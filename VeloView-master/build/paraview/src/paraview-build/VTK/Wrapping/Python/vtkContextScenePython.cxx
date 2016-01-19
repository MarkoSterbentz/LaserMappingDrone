// python wrapper for vtkContextScene
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextScene.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContextScene(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContextSceneNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkContextScene_Doc();


static PyObject *
PyvtkContextScene_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContextScene::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextScene::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextScene::NewInstance());

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
PyvtkContextScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContextScene *tempr = vtkContextScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextScene::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->AddItem(temp0) :
      op->vtkContextScene::AddItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkContextScene::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkContextScene::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextScene_RemoveItem_Methods[] = {
  {NULL, PyvtkContextScene_RemoveItem_s1, METH_VARARGS,
   (char*)"@O *vtkAbstractContextItem"},
  {NULL, PyvtkContextScene_RemoveItem_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContextScene_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextScene_RemoveItem_Methods;
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
PyvtkContextScene_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkContextScene::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkContextScene::GetNumberOfItems());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ClearItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearItems();
      }
    else
      {
      op->vtkContextScene::ClearItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkContextScene::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkContextScene::GetAnnotationLink());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0, temp1);
      }
    else
      {
      op->vtkContextScene::SetGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkContextScene::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContextScene_SetGeometry_s1(self, args);
    case 1:
      return PyvtkContextScene_SetGeometry_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return NULL;
}



static PyObject *
PyvtkContextScene_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkContextScene::GetGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBufferId(temp0);
      }
    else
      {
      op->vtkContextScene::SetUseBufferId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseBufferId() :
      op->vtkContextScene::GetUseBufferId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetViewWidth() :
      op->vtkContextScene::GetViewWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetViewHeight() :
      op->vtkContextScene::GetViewHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSceneWidth() :
      op->vtkContextScene::GetSceneWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSceneHeight() :
      op->vtkContextScene::GetSceneHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleTiles(temp0);
      }
    else
      {
      op->vtkContextScene::SetScaleTiles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaleTiles() :
      op->vtkContextScene::GetScaleTiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleTilesOn();
      }
    else
      {
      op->vtkContextScene::ScaleTilesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleTilesOff();
      }
    else
      {
      op->vtkContextScene::ScaleTilesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkContextScene::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirty(temp0);
      }
    else
      {
      op->vtkContextScene::SetDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDirty() :
      op->vtkContextScene::GetDirty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources();
      }
    else
      {
      op->vtkContextScene::ReleaseGraphicsResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextBufferId *tempr = (ap.IsBound() ?
      op->GetBufferId() :
      op->vtkContextScene::GetBufferId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkTransform2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkContextScene::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContextScene::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_HasTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasTransform() :
      op->vtkContextScene::HasTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextScene_Methods[] = {
  {(char*)"GetClassName", PyvtkContextScene_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextScene_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextScene_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContextScene\nC++: vtkContextScene *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextScene_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextScene\nC++: vtkContextScene *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkContextScene_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddItem", PyvtkContextScene_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkAbstractContextItem) -> int\nC++: unsigned int AddItem(vtkAbstractContextItem *item)\n\nAdd child items to this item. Increments reference count of item.\n\\return the index of the child item.\n"},
  {(char*)"RemoveItem", PyvtkContextScene_RemoveItem, METH_VARARGS,
   (char*)"V.RemoveItem(vtkAbstractContextItem) -> bool\nC++: bool RemoveItem(vtkAbstractContextItem *item)\nV.RemoveItem(int) -> bool\nC++: bool RemoveItem(unsigned int index)\n\nRemove child item from this item. Decrements reference count of\nitem.\n\\param item the item to be removed.\n\\return true on success, false otherwise.\n"},
  {(char*)"GetItem", PyvtkContextScene_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetItem(unsigned int index)\n\nGet the item at the specified index.\n\\return the item at the specified index (null if index is\n    invalid).\n"},
  {(char*)"GetNumberOfItems", PyvtkContextScene_GetNumberOfItems, METH_VARARGS,
   (char*)"V.GetNumberOfItems() -> int\nC++: unsigned int GetNumberOfItems()\n\nGet the number of child items.\n"},
  {(char*)"ClearItems", PyvtkContextScene_ClearItems, METH_VARARGS,
   (char*)"V.ClearItems()\nC++: void ClearItems()\n\nRemove all child items from this item.\n"},
  {(char*)"SetAnnotationLink", PyvtkContextScene_SetAnnotationLink, METH_VARARGS,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {(char*)"GetAnnotationLink", PyvtkContextScene_GetAnnotationLink, METH_VARARGS,
   (char*)"V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {(char*)"SetGeometry", PyvtkContextScene_SetGeometry, METH_VARARGS,
   (char*)"V.SetGeometry(int, int)\nC++: void SetGeometry(int, int)\nV.SetGeometry((int, int))\nC++: void SetGeometry(int a[2])\n\n"},
  {(char*)"GetGeometry", PyvtkContextScene_GetGeometry, METH_VARARGS,
   (char*)"V.GetGeometry() -> (int, int)\nC++: int *GetGeometry()\n\n"},
  {(char*)"SetUseBufferId", PyvtkContextScene_SetUseBufferId, METH_VARARGS,
   (char*)"V.SetUseBufferId(bool)\nC++: void SetUseBufferId(bool a)\n\nSet whether the scene should use the color buffer. Default is\ntrue.\n"},
  {(char*)"GetUseBufferId", PyvtkContextScene_GetUseBufferId, METH_VARARGS,
   (char*)"V.GetUseBufferId() -> bool\nC++: bool GetUseBufferId()\n\nGet whether the scene is using the color buffer. Default is true.\n"},
  {(char*)"GetViewWidth", PyvtkContextScene_GetViewWidth, METH_VARARGS,
   (char*)"V.GetViewWidth() -> int\nC++: virtual int GetViewWidth()\n\nGet the width of the view\n"},
  {(char*)"GetViewHeight", PyvtkContextScene_GetViewHeight, METH_VARARGS,
   (char*)"V.GetViewHeight() -> int\nC++: virtual int GetViewHeight()\n\nGet the height of the view\n"},
  {(char*)"GetSceneWidth", PyvtkContextScene_GetSceneWidth, METH_VARARGS,
   (char*)"V.GetSceneWidth() -> int\nC++: int GetSceneWidth()\n\nGet the width of the scene.\n"},
  {(char*)"GetSceneHeight", PyvtkContextScene_GetSceneHeight, METH_VARARGS,
   (char*)"V.GetSceneHeight() -> int\nC++: int GetSceneHeight()\n\nGet the height of the scene.\n"},
  {(char*)"SetScaleTiles", PyvtkContextScene_SetScaleTiles, METH_VARARGS,
   (char*)"V.SetScaleTiles(bool)\nC++: void SetScaleTiles(bool a)\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"GetScaleTiles", PyvtkContextScene_GetScaleTiles, METH_VARARGS,
   (char*)"V.GetScaleTiles() -> bool\nC++: bool GetScaleTiles()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"ScaleTilesOn", PyvtkContextScene_ScaleTilesOn, METH_VARARGS,
   (char*)"V.ScaleTilesOn()\nC++: void ScaleTilesOn()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"ScaleTilesOff", PyvtkContextScene_ScaleTilesOff, METH_VARARGS,
   (char*)"V.ScaleTilesOff()\nC++: void ScaleTilesOff()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"SetRenderer", PyvtkContextScene_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *renderer)\n\nThis should not be necessary as the context view should take care\nof rendering.\n"},
  {(char*)"SetDirty", PyvtkContextScene_SetDirty, METH_VARARGS,
   (char*)"V.SetDirty(bool)\nC++: void SetDirty(bool isDirty)\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {(char*)"GetDirty", PyvtkContextScene_GetDirty, METH_VARARGS,
   (char*)"V.GetDirty() -> bool\nC++: bool GetDirty()\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkContextScene_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources()\n\nRelease graphics resources hold by the scene.\n"},
  {(char*)"GetBufferId", PyvtkContextScene_GetBufferId, METH_VARARGS,
   (char*)"V.GetBufferId() -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *GetBufferId()\n\nReturn buffer id. Not part of the end-user API. Can be used by\ncontext items to initialize their own colorbuffer id (when a\ncontext item is a container).\n"},
  {(char*)"SetTransform", PyvtkContextScene_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform2D)\nC++: virtual void SetTransform(vtkTransform2D *transform)\n\nSet the transform for the scene.\n"},
  {(char*)"GetTransform", PyvtkContextScene_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform2D\nC++: vtkTransform2D *GetTransform()\n\nGet the transform for the scene.\n"},
  {(char*)"HasTransform", PyvtkContextScene_HasTransform, METH_VARARGS,
   (char*)"V.HasTransform() -> bool\nC++: bool HasTransform()\n\nCheck whether the scene has a transform.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextScene_StaticNew()
{
  return vtkContextScene::New();
}

PyObject *PyVTKClass_vtkContextSceneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextScene_StaticNew,
    PyvtkContextScene_Methods,
    "vtkContextScene", modulename,
    NULL, NULL,
    PyvtkContextScene_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "SELECTION_NONE", vtkContextScene::SELECTION_NONE },
          { "SELECTION_DEFAULT", vtkContextScene::SELECTION_DEFAULT },
          { "SELECTION_ADDITION", vtkContextScene::SELECTION_ADDITION },
          { "SELECTION_SUBTRACTION", vtkContextScene::SELECTION_SUBTRACTION },
          { "SELECTION_TOGGLE", vtkContextScene::SELECTION_TOGGLE },
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

const char **PyvtkContextScene_Doc()
{
  static const char *docstring[] = {
    "vtkContextScene - Provides a 2D scene for vtkContextItem objects.\n\n",
    "Superclass: vtkObject\n\n",
    "Provides a 2D scene that vtkContextItem objects can be added to.\nManages the items, ensures that they are rendered at the right times\nand passes on mouse events.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextScene(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextSceneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextScene", o) != 0)
    {
    Py_DECREF(o);
    }

}

