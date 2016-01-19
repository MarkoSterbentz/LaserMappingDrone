// python wrapper for vtkPVOrthographicSliceView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVOrthographicSliceView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVOrthographicSliceView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVOrthographicSliceViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVMultiSliceViewNew
extern "C" { PyObject *PyVTKClass_vtkPVMultiSliceViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVMultiSliceViewNew
#endif

static const char **PyvtkPVOrthographicSliceView_Doc();


static PyObject *
PyvtkPVOrthographicSliceView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVOrthographicSliceView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOrthographicSliceView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVOrthographicSliceView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOrthographicSliceView::NewInstance());

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
PyvtkPVOrthographicSliceView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVOrthographicSliceView *tempr = vtkPVOrthographicSliceView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

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
      op->vtkPVOrthographicSliceView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVOrthographicSliceView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer(temp0) :
      op->vtkPVOrthographicSliceView::GetRenderer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkPVOrthographicSliceView::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ResetCamera(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::ResetCamera(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVOrthographicSliceView_ResetCamera_s1(self, args);
    case 1:
      return PyvtkPVOrthographicSliceView_ResetCamera_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return NULL;
}



static PyObject *
PyvtkPVOrthographicSliceView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionMode(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetInteractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSlicePosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetSlicePosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSlicePosition() :
      op->vtkPVOrthographicSliceView::GetSlicePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSliceIncrements(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetSliceIncrements(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceIncrements(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetSliceIncrements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOrthographicSliceView_SetSliceIncrements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVOrthographicSliceView_SetSliceIncrements_s1(self, args);
    case 1:
      return PyvtkPVOrthographicSliceView_SetSliceIncrements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceIncrements");
  return NULL;
}



static PyObject *
PyvtkPVOrthographicSliceView_SetSliceAnnotationsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceAnnotationsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceAnnotationsVisibility(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetSliceAnnotationsVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_GetSliceAnnotationsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceAnnotationsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSliceAnnotationsVisibility() :
      op->vtkPVOrthographicSliceView::GetSliceAnnotationsVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetCenterAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterAxesVisibility(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetCenterAxesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetBackground(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetBackground2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetBackground2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundTexture(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetBackgroundTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientBackground(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetGradientBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOrthographicSliceView_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOrthographicSliceView *op = static_cast<vtkPVOrthographicSliceView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTexturedBackground(temp0);
      }
    else
      {
      op->vtkPVOrthographicSliceView::SetTexturedBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVOrthographicSliceView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVOrthographicSliceView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVOrthographicSliceView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVOrthographicSliceView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVOrthographicSliceView\nC++: vtkPVOrthographicSliceView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVOrthographicSliceView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVOrthographicSliceView\nC++: vtkPVOrthographicSliceView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkPVOrthographicSliceView_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: virtual void Initialize(unsigned int id)\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.@CallOnAllProcessess\n"},
  {(char*)"Update", PyvtkPVOrthographicSliceView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverridden to ensure that the SlicePositionAxes3D doesn't get\nused when determine view bounds.\n"},
  {(char*)"GetRenderer", PyvtkPVOrthographicSliceView_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer(int) -> vtkRenderer\nC++: vtkRenderer *GetRenderer(int index)\n\n"},
  {(char*)"ResetCamera", PyvtkPVOrthographicSliceView_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera()\nC++: virtual void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: virtual void ResetCamera(double bounds[6])\n\n"},
  {(char*)"SetInteractionMode", PyvtkPVOrthographicSliceView_SetInteractionMode, METH_VARARGS,
   (char*)"V.SetInteractionMode(int)\nC++: virtual void SetInteractionMode(int mode)\n\n"},
  {(char*)"SetSlicePosition", PyvtkPVOrthographicSliceView_SetSlicePosition, METH_VARARGS,
   (char*)"V.SetSlicePosition(float, float, float)\nC++: void SetSlicePosition(double x, double y, double z)\n\nSet the slice position.\n"},
  {(char*)"GetSlicePosition", PyvtkPVOrthographicSliceView_GetSlicePosition, METH_VARARGS,
   (char*)"V.GetSlicePosition() -> (float, float, float)\nC++: double *GetSlicePosition()\n\n"},
  {(char*)"SetSliceIncrements", PyvtkPVOrthographicSliceView_SetSliceIncrements, METH_VARARGS,
   (char*)"V.SetSliceIncrements(float, float, float)\nC++: void SetSliceIncrements(double, double, double)\nV.SetSliceIncrements((float, float, float))\nC++: void SetSliceIncrements(double a[3])\n\n"},
  {(char*)"SetSliceAnnotationsVisibility", PyvtkPVOrthographicSliceView_SetSliceAnnotationsVisibility, METH_VARARGS,
   (char*)"V.SetSliceAnnotationsVisibility(bool)\nC++: void SetSliceAnnotationsVisibility(bool a)\n\nGet/Set whether to show slice annotations.\n"},
  {(char*)"GetSliceAnnotationsVisibility", PyvtkPVOrthographicSliceView_GetSliceAnnotationsVisibility, METH_VARARGS,
   (char*)"V.GetSliceAnnotationsVisibility() -> bool\nC++: bool GetSliceAnnotationsVisibility()\n\nGet/Set whether to show slice annotations.\n"},
  {(char*)"SetCenterAxesVisibility", PyvtkPVOrthographicSliceView_SetCenterAxesVisibility, METH_VARARGS,
   (char*)"V.SetCenterAxesVisibility(bool)\nC++: virtual void SetCenterAxesVisibility(bool)\n\nTo avoid confusion, we don't show the center axes at all in this\nview.\n"},
  {(char*)"SetBackground", PyvtkPVOrthographicSliceView_SetBackground, METH_VARARGS,
   (char*)"V.SetBackground(float, float, float)\nC++: virtual void SetBackground(double r, double g, double b)\n\n"},
  {(char*)"SetBackground2", PyvtkPVOrthographicSliceView_SetBackground2, METH_VARARGS,
   (char*)"V.SetBackground2(float, float, float)\nC++: virtual void SetBackground2(double r, double g, double b)\n\n"},
  {(char*)"SetBackgroundTexture", PyvtkPVOrthographicSliceView_SetBackgroundTexture, METH_VARARGS,
   (char*)"V.SetBackgroundTexture(vtkTexture)\nC++: virtual void SetBackgroundTexture(vtkTexture *val)\n\n"},
  {(char*)"SetGradientBackground", PyvtkPVOrthographicSliceView_SetGradientBackground, METH_VARARGS,
   (char*)"V.SetGradientBackground(int)\nC++: virtual void SetGradientBackground(int val)\n\n"},
  {(char*)"SetTexturedBackground", PyvtkPVOrthographicSliceView_SetTexturedBackground, METH_VARARGS,
   (char*)"V.SetTexturedBackground(int)\nC++: virtual void SetTexturedBackground(int val)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVOrthographicSliceView_StaticNew()
{
  return vtkPVOrthographicSliceView::New();
}

PyObject *PyVTKClass_vtkPVOrthographicSliceViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVOrthographicSliceView_StaticNew,
    PyvtkPVOrthographicSliceView_Methods,
    "vtkPVOrthographicSliceView", modulename,
    NULL, NULL,
    PyvtkPVOrthographicSliceView_Doc(),
    PyVTKClass_vtkPVMultiSliceViewNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 10; c++)
      {
      static const struct { const char *name; int value; }
        constants[10] = {
          { "SIDE_VIEW", vtkPVOrthographicSliceView::SIDE_VIEW },
          { "TOP_VIEW", vtkPVOrthographicSliceView::TOP_VIEW },
          { "FRONT_VIEW", vtkPVOrthographicSliceView::FRONT_VIEW },
          { "YZ_PLANE", vtkPVOrthographicSliceView::YZ_PLANE },
          { "ZX_PLANE", vtkPVOrthographicSliceView::ZX_PLANE },
          { "XY_PLANE", vtkPVOrthographicSliceView::XY_PLANE },
          { "AXIAL_VIEW", vtkPVOrthographicSliceView::AXIAL_VIEW },
          { "CORONAL_VIEW", vtkPVOrthographicSliceView::CORONAL_VIEW },
          { "SAGITTAL_VIEW", vtkPVOrthographicSliceView::SAGITTAL_VIEW },
          { "RIGHT_SIDE_VIEW", vtkPVOrthographicSliceView::RIGHT_SIDE_VIEW },
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

const char **PyvtkPVOrthographicSliceView_Doc()
{
  static const char *docstring[] = {
    "vtkPVOrthographicSliceView -- vtkView subclass for Orthographic Slice\n\n",
    "Superclass: vtkPVMultiSliceView\n\n",
    "vtkPVOrthographicSliceView extends vtkPVMultiSliceView to support\nshowing a quad-view with orthographic views along with the 3D view.\nWork with vtkPVCompositeOrthographicSliceRepresentation and\nvtkGeometrySliceRepresentation, this class create a 3 slices for any\ndataset shown in this view and shows those slices in the orthographic\nviews. The orthographic views themselves are non-composited i.e. th",
    "e\ndata is simply cloned on all rendering processes (hence we limit\nourselves to showing slices alone).\n\nInteractions:\n\nIn the orthographic views, users can use the thumb-wheel to change\nthe slice plane (in which case the SliceIncrements are used to update\nthe slice position). Additionally, users can double click in any of\nthe orthographic views to move the slice position to that location.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVOrthographicSliceView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVOrthographicSliceViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVOrthographicSliceView", o) != 0)
    {
    Py_DECREF(o);
    }

}

