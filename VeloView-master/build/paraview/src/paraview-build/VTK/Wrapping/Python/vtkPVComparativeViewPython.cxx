// python wrapper for vtkPVComparativeView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVComparativeView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVComparativeView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVComparativeViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVComparativeView_Doc();


static PyObject *
PyvtkPVComparativeView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVComparativeView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVComparativeView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVComparativeView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVComparativeView::NewInstance());

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
PyvtkPVComparativeView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVComparativeView *tempr = vtkPVComparativeView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkPVComparativeView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeView_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkPVComparativeView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVComparativeView_Initialize_Methods[] = {
  {NULL, PyvtkPVComparativeView_Initialize_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkPVComparativeView_Initialize_s2, METH_VARARGS,
   (char*)"@O *vtkSMViewProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVComparativeView_Initialize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVComparativeView_Initialize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkPVComparativeView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkPVComparativeView::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkPVComparativeView::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Build(temp0, temp1);
      }
    else
      {
      op->vtkPVComparativeView::Build(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetOverlayAllComparisons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlayAllComparisons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOverlayAllComparisons(temp0);
      }
    else
      {
      op->vtkPVComparativeView::SetOverlayAllComparisons(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetOverlayAllComparisons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlayAllComparisons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOverlayAllComparisons() :
      op->vtkPVComparativeView::GetOverlayAllComparisons());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkPVComparativeView::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AddRepresentation(temp0);
      }
    else
      {
      op->vtkPVComparativeView::AddRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_RemoveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveRepresentation(temp0);
      }
    else
      {
      op->vtkPVComparativeView::RemoveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRepresentations();
      }
    else
      {
      op->vtkPVComparativeView::RemoveAllRepresentations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVComparativeView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetViews(temp0);
      }
    else
      {
      op->vtkPVComparativeView::GetViews(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetRepresentationsForView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationsForView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetRepresentationsForView(temp0, temp1);
      }
    else
      {
      op->vtkPVComparativeView::GetRepresentationsForView(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  vtkCollection *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetRepresentations(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVComparativeView::GetRepresentations(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetRootView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetRootView() :
      op->vtkPVComparativeView::GetRootView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetViewSize(temp0, temp1);
      }
    else
      {
      op->vtkPVComparativeView::SetViewSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetViewPosition(temp0, temp1);
      }
    else
      {
      op->vtkPVComparativeView::SetViewPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0, temp1);
      }
    else
      {
      op->vtkPVComparativeView::SetSpacing(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeView_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkPVComparativeView::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeView_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVComparativeView_SetSpacing_s1(self, args);
    case 1:
      return PyvtkPVComparativeView_SetSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return NULL;
}



static PyObject *
PyvtkPVComparativeView_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkPVComparativeView::GetSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMComparativeAnimationCueProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMComparativeAnimationCueProxy"))
    {
    if (ap.IsBound())
      {
      op->AddCue(temp0);
      }
    else
      {
      op->vtkPVComparativeView::AddCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  vtkSMComparativeAnimationCueProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMComparativeAnimationCueProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveCue(temp0);
      }
    else
      {
      op->vtkPVComparativeView::RemoveCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_GetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewTime() :
      op->vtkPVComparativeView::GetViewTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_SetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewTime(temp0);
      }
    else
      {
      op->vtkPVComparativeView::SetViewTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeView_MarkOutdated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkOutdated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeView *op = static_cast<vtkPVComparativeView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkOutdated();
      }
    else
      {
      op->vtkPVComparativeView::MarkOutdated();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVComparativeView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVComparativeView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVComparativeView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVComparativeView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVComparativeView\nC++: vtkPVComparativeView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVComparativeView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVComparativeView\nC++: vtkPVComparativeView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkPVComparativeView_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: void Initialize(unsigned int)\nV.Initialize(vtkSMViewProxy)\nC++: void Initialize(vtkSMViewProxy *rootView)\n\nProvides empty handlers to simulate the vtkPVView API.\n"},
  {(char*)"StillRender", PyvtkPVComparativeView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: void StillRender()\n\nCall StillRender() on the root view.\n"},
  {(char*)"InteractiveRender", PyvtkPVComparativeView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: void InteractiveRender()\n\nCall InteractiveRender() on the root view.\n"},
  {(char*)"Build", PyvtkPVComparativeView_Build, METH_VARARGS,
   (char*)"V.Build(int, int)\nC++: void Build(int dx, int dy)\n\nBuilds the MxN views. This method simply creates the MxN internal\nview modules. It does not generate the visualization i.e. play\nthe animation scene(s). This method does nothing unless the\ndimensions have changed, in which case it creates new internal\nview modules (or destroys extra ones). Note that the it's the\nresponsibility of the application to lay the views out so that\nthey form a MxN grid.\n"},
  {(char*)"SetOverlayAllComparisons", PyvtkPVComparativeView_SetOverlayAllComparisons, METH_VARARGS,
   (char*)"V.SetOverlayAllComparisons(bool)\nC++: void SetOverlayAllComparisons(bool)\n\nWhen set to true, all comparisons are shown in the same view.\nOtherwise, they are tiled in separate views.\n"},
  {(char*)"GetOverlayAllComparisons", PyvtkPVComparativeView_GetOverlayAllComparisons, METH_VARARGS,
   (char*)"V.GetOverlayAllComparisons() -> bool\nC++: bool GetOverlayAllComparisons()\n\nWhen set to true, all comparisons are shown in the same view.\nOtherwise, they are tiled in separate views.\n"},
  {(char*)"GetDimensions", PyvtkPVComparativeView_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> (int, int)\nC++: int *GetDimensions()\n\n"},
  {(char*)"AddRepresentation", PyvtkPVComparativeView_AddRepresentation, METH_VARARGS,
   (char*)"V.AddRepresentation(vtkSMProxy)\nC++: void AddRepresentation(vtkSMProxy *)\n\nAdds a representation proxy to this view.\n"},
  {(char*)"RemoveRepresentation", PyvtkPVComparativeView_RemoveRepresentation, METH_VARARGS,
   (char*)"V.RemoveRepresentation(vtkSMProxy)\nC++: void RemoveRepresentation(vtkSMProxy *)\n\nRemoves a representation proxy from this view.\n"},
  {(char*)"RemoveAllRepresentations", PyvtkPVComparativeView_RemoveAllRepresentations, METH_VARARGS,
   (char*)"V.RemoveAllRepresentations()\nC++: void RemoveAllRepresentations()\n\nRemoves all added representations from this view. Simply calls\nRemoveRepresentation() on all added representations one by one.\n"},
  {(char*)"Update", PyvtkPVComparativeView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nUpdates the data pipelines for all visible representations.\n"},
  {(char*)"GetViews", PyvtkPVComparativeView_GetViews, METH_VARARGS,
   (char*)"V.GetViews(vtkCollection)\nC++: void GetViews(vtkCollection *collection)\n\nGet all the internal views. The views should only be used to be\nlayed out by the GUI. It's not recommended to directly change the\nproperties of the views.\n"},
  {(char*)"GetRepresentationsForView", PyvtkPVComparativeView_GetRepresentationsForView, METH_VARARGS,
   (char*)"V.GetRepresentationsForView(vtkSMViewProxy, vtkCollection)\nC++: void GetRepresentationsForView(vtkSMViewProxy *,\n    vtkCollection *)\n\nGet all internal vtkSMRepresentations for a given view.  If the\ngiven view is not managed by this comparative view it will be\nignored.  The representations should only be used by the GUI for\ncreating representation clones.  It is not recommended to\ndirectly change the properties of the returned representations.\n"},
  {(char*)"GetRepresentations", PyvtkPVComparativeView_GetRepresentations, METH_VARARGS,
   (char*)"V.GetRepresentations(int, int, vtkCollection)\nC++: void GetRepresentations(int x, int y, vtkCollection *)\n\nGet all internal vtkSMRepresentations for a given view.  If the\ngiven view is not managed by this comparative view it will be\nignored.  The representations should only be used by the GUI for\ncreating representation clones.  It is not recommended to\ndirectly change the properties of the returned representations.\n"},
  {(char*)"GetRootView", PyvtkPVComparativeView_GetRootView, METH_VARARGS,
   (char*)"V.GetRootView() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetRootView()\n\nReturns the root view proxy.\n"},
  {(char*)"SetViewSize", PyvtkPVComparativeView_SetViewSize, METH_VARARGS,
   (char*)"V.SetViewSize(int, int)\nC++: void SetViewSize(int x, int y)\n\nViewSize, ViewPosition need to split up among all the component\nviews correctly.\n"},
  {(char*)"SetViewPosition", PyvtkPVComparativeView_SetViewPosition, METH_VARARGS,
   (char*)"V.SetViewPosition(int, int)\nC++: void SetViewPosition(int x, int y)\n\nViewSize, ViewPosition need to split up among all the component\nviews correctly.\n"},
  {(char*)"SetSpacing", PyvtkPVComparativeView_SetSpacing, METH_VARARGS,
   (char*)"V.SetSpacing(int, int)\nC++: void SetSpacing(int, int)\nV.SetSpacing((int, int))\nC++: void SetSpacing(int a[2])\n\n"},
  {(char*)"GetSpacing", PyvtkPVComparativeView_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing() -> (int, int)\nC++: int *GetSpacing()\n\n"},
  {(char*)"AddCue", PyvtkPVComparativeView_AddCue, METH_VARARGS,
   (char*)"V.AddCue(vtkSMComparativeAnimationCueProxy)\nC++: void AddCue(vtkSMComparativeAnimationCueProxy *)\n\nAdd/Remove parameter cues.\n"},
  {(char*)"RemoveCue", PyvtkPVComparativeView_RemoveCue, METH_VARARGS,
   (char*)"V.RemoveCue(vtkSMComparativeAnimationCueProxy)\nC++: void RemoveCue(vtkSMComparativeAnimationCueProxy *)\n\nAdd/Remove parameter cues.\n"},
  {(char*)"GetViewTime", PyvtkPVComparativeView_GetViewTime, METH_VARARGS,
   (char*)"V.GetViewTime() -> float\nC++: double GetViewTime()\n\nGet/Set the view time.\n"},
  {(char*)"SetViewTime", PyvtkPVComparativeView_SetViewTime, METH_VARARGS,
   (char*)"V.SetViewTime(float)\nC++: void SetViewTime(double time)\n\nGet/Set the view time.\n"},
  {(char*)"MarkOutdated", PyvtkPVComparativeView_MarkOutdated, METH_VARARGS,
   (char*)"V.MarkOutdated()\nC++: void MarkOutdated()\n\nMarks the view dirty i.e. on next Update() it needs to regenerate\nthe comparative vis by replaying the animation(s).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVComparativeView_StaticNew()
{
  return vtkPVComparativeView::New();
}

PyObject *PyVTKClass_vtkPVComparativeViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVComparativeView_StaticNew,
    PyvtkPVComparativeView_Methods,
    "vtkPVComparativeView", modulename,
    NULL, NULL,
    PyvtkPVComparativeView_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVComparativeView_Doc()
{
  static const char *docstring[] = {
    "vtkPVComparativeView - view for comparative visualization/\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVComparativeView is the view used to generate/view comparative\nvisualizations/film-strips. This is not a proxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVComparativeView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVComparativeViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVComparativeView", o) != 0)
    {
    Py_DECREF(o);
    }

}

