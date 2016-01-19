// python wrapper for vtkSelectVisiblePoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectVisiblePoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectVisiblePoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectVisiblePointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSelectVisiblePoints_Doc();


static PyObject *
PyvtkSelectVisiblePoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectVisiblePoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectVisiblePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectVisiblePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectVisiblePoints::NewInstance());

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
PyvtkSelectVisiblePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectVisiblePoints *tempr = vtkSelectVisiblePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

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
      op->vtkSelectVisiblePoints::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSelectVisiblePoints::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelectionWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionWindow(temp0);
      }
    else
      {
      op->vtkSelectVisiblePoints::SetSelectionWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetSelectionWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionWindow() :
      op->vtkSelectVisiblePoints::GetSelectionWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectionWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectionWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectionWindowOn();
      }
    else
      {
      op->vtkSelectVisiblePoints::SelectionWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectionWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectionWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectionWindowOff();
      }
    else
      {
      op->vtkSelectVisiblePoints::SelectionWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSelectVisiblePoints::SetSelection(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectVisiblePoints_SetSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkSelectVisiblePoints::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectVisiblePoints_SetSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSelectVisiblePoints_SetSelection_s1(self, args);
    case 1:
      return PyvtkSelectVisiblePoints_SetSelection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelection");
  return NULL;
}



static PyObject *
PyvtkSelectVisiblePoints_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkSelectVisiblePoints::GetSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetSelectInvisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectInvisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectInvisible(temp0);
      }
    else
      {
      op->vtkSelectVisiblePoints::SetSelectInvisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetSelectInvisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectInvisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectInvisible() :
      op->vtkSelectVisiblePoints::GetSelectInvisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectInvisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInvisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectInvisibleOn();
      }
    else
      {
      op->vtkSelectVisiblePoints::SelectInvisibleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SelectInvisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInvisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectInvisibleOff();
      }
    else
      {
      op->vtkSelectVisiblePoints::SelectInvisibleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSelectVisiblePoints::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSelectVisiblePoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSelectVisiblePoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSelectVisiblePoints::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkSelectVisiblePoints::Initialize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_IsPointOccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointOccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  float *temp1 = NULL;
  float small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    bool tempr = (ap.IsBound() ?
      op->IsPointOccluded(temp0, temp1) :
      op->vtkSelectVisiblePoints::IsPointOccluded(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkSelectVisiblePoints_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectVisiblePoints *op = static_cast<vtkSelectVisiblePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectVisiblePoints::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectVisiblePoints_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectVisiblePoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectVisiblePoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectVisiblePoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectVisiblePoints\nC++: vtkSelectVisiblePoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectVisiblePoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectVisiblePoints\nC++: vtkSelectVisiblePoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkSelectVisiblePoints_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nSpecify the renderer in which the visibility computation is to be\nperformed.\n"},
  {(char*)"GetRenderer", PyvtkSelectVisiblePoints_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nSpecify the renderer in which the visibility computation is to be\nperformed.\n"},
  {(char*)"SetSelectionWindow", PyvtkSelectVisiblePoints_SetSelectionWindow, METH_VARARGS,
   (char*)"V.SetSelectionWindow(int)\nC++: void SetSelectionWindow(int a)\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {(char*)"GetSelectionWindow", PyvtkSelectVisiblePoints_GetSelectionWindow, METH_VARARGS,
   (char*)"V.GetSelectionWindow() -> int\nC++: int GetSelectionWindow()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {(char*)"SelectionWindowOn", PyvtkSelectVisiblePoints_SelectionWindowOn, METH_VARARGS,
   (char*)"V.SelectionWindowOn()\nC++: void SelectionWindowOn()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {(char*)"SelectionWindowOff", PyvtkSelectVisiblePoints_SelectionWindowOff, METH_VARARGS,
   (char*)"V.SelectionWindowOff()\nC++: void SelectionWindowOff()\n\nSet/Get the flag which enables selection in a rectangular display\nregion.\n"},
  {(char*)"SetSelection", PyvtkSelectVisiblePoints_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(int, int, int, int)\nC++: void SetSelection(int, int, int, int)\nV.SetSelection((int, int, int, int))\nC++: void SetSelection(int a[4])\n\n"},
  {(char*)"GetSelection", PyvtkSelectVisiblePoints_GetSelection, METH_VARARGS,
   (char*)"V.GetSelection() -> (int, int, int, int)\nC++: int *GetSelection()\n\nSpecify the selection window in display coordinates. You must\nspecify a rectangular region using (xmin,xmax,ymin,ymax).\n"},
  {(char*)"SetSelectInvisible", PyvtkSelectVisiblePoints_SetSelectInvisible, METH_VARARGS,
   (char*)"V.SetSelectInvisible(int)\nC++: void SetSelectInvisible(int a)\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {(char*)"GetSelectInvisible", PyvtkSelectVisiblePoints_GetSelectInvisible, METH_VARARGS,
   (char*)"V.GetSelectInvisible() -> int\nC++: int GetSelectInvisible()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {(char*)"SelectInvisibleOn", PyvtkSelectVisiblePoints_SelectInvisibleOn, METH_VARARGS,
   (char*)"V.SelectInvisibleOn()\nC++: void SelectInvisibleOn()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {(char*)"SelectInvisibleOff", PyvtkSelectVisiblePoints_SelectInvisibleOff, METH_VARARGS,
   (char*)"V.SelectInvisibleOff()\nC++: void SelectInvisibleOff()\n\nSet/Get the flag which enables inverse selection; i.e., invisible\npoints are selected.\n"},
  {(char*)"SetTolerance", PyvtkSelectVisiblePoints_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {(char*)"GetToleranceMinValue", PyvtkSelectVisiblePoints_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkSelectVisiblePoints_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {(char*)"GetTolerance", PyvtkSelectVisiblePoints_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet/Get a tolerance to use to determine whether a point is\nvisible. A tolerance is usually required because the conversion\nfrom world space to display space during rendering introduces\nnumerical round-off.\n"},
  {(char*)"Initialize", PyvtkSelectVisiblePoints_Initialize, METH_VARARGS,
   (char*)"V.Initialize(bool) -> (float, ...)\nC++: float *Initialize(bool getZbuff)\n\nRequires the renderer to be set. Populates the composite\nperspective transform and returns a pointer to the Z-buffer (that\nmust be deleted) if getZbuff is set.\n"},
  {(char*)"IsPointOccluded", PyvtkSelectVisiblePoints_IsPointOccluded, METH_VARARGS,
   (char*)"V.IsPointOccluded((float, float, float), (float, ...)) -> bool\nC++: bool IsPointOccluded(const double x[3], const float *zPtr)\n\nTests if a point x is being occluded or not against the Z-Buffer\narray passed in by zPtr. Call Initialize before calling this\nmethod.\n"},
  {(char*)"GetMTime", PyvtkSelectVisiblePoints_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn MTime also considering the renderer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectVisiblePoints_StaticNew()
{
  return vtkSelectVisiblePoints::New();
}

PyObject *PyVTKClass_vtkSelectVisiblePointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectVisiblePoints_StaticNew,
    PyvtkSelectVisiblePoints_Methods,
    "vtkSelectVisiblePoints", modulename,
    NULL, NULL,
    PyvtkSelectVisiblePoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectVisiblePoints_Doc()
{
  static const char *docstring[] = {
    "vtkSelectVisiblePoints - extract points that are visible (based on\nz-buffer calculation)\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSelectVisiblePoints is a filter that selects points based on\nwhether they are visible or not. Visibility is determined by\naccessing the z-buffer of a rendering window. (The position of each\ninput point is converted into display coordinates, and then the\nz-value at that point is obtained. If within the user-specified\ntolerance, the point is considered visible.)\n\nPoints that are visible (or if th",
    "e ivar SelectInvisible is on,\ninvisible points) are passed to the output. Associated data\nattributes are passed to the output as well.\n\nThis filter also allows you to specify a rectangular window in\ndisplay (pixel) coordinates in which the visible points must lie.\nThis can be used as a sort of local \"brushing\" operation to select\njust data within a window.\n\nCaveats:\n\nYou must carefully synchronize",
    " the execution of this filter. The\nfilter refers to a renderer, which is modified every time a render\noccurs. Therefore, the filter is always out of date, and always\nexecutes. You may have to perform two rendering passes, or if you are\nusing this filter in conjunction with vtkLabeledDataMapper, things\nwork out because 2D rendering occurs after the 3D rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectVisiblePoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectVisiblePointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectVisiblePoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

