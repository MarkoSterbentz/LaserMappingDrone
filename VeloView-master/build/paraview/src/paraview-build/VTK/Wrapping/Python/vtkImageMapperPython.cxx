// python wrapper for vtkImageMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkImageMapper_Doc();


static PyObject *
PyvtkImageMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper::NewInstance());

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
PyvtkImageMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMapper *tempr = vtkImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorWindow(temp0);
      }
    else
      {
      op->vtkImageMapper::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageMapper::GetColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorLevel(temp0);
      }
    else
      {
      op->vtkImageMapper::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageMapper::GetColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZSlice(temp0);
      }
    else
      {
      op->vtkImageMapper::SetZSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageMapper::GetZSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageMapper::GetWholeZMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageMapper::GetWholeZMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderStart(temp0, temp1);
      }
    else
      {
      op->vtkImageMapper::RenderStart(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkActor2D *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
    {
    op->RenderData(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorShift() :
      op->vtkImageMapper::GetColorShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorScale() :
      op->vtkImageMapper::GetColorScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkImageMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderToRectangle(temp0);
      }
    else
      {
      op->vtkImageMapper::SetRenderToRectangle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRenderToRectangle() :
      op->vtkImageMapper::GetRenderToRectangle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderToRectangleOn();
      }
    else
      {
      op->vtkImageMapper::RenderToRectangleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderToRectangleOff();
      }
    else
      {
      op->vtkImageMapper::RenderToRectangleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCustomExtents(temp0);
      }
    else
      {
      op->vtkImageMapper::SetUseCustomExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCustomExtents() :
      op->vtkImageMapper::GetUseCustomExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomExtentsOn();
      }
    else
      {
      op->vtkImageMapper::UseCustomExtentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomExtentsOff();
      }
    else
      {
      op->vtkImageMapper::UseCustomExtentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomDisplayExtents(temp0);
      }
    else
      {
      op->vtkImageMapper::SetCustomDisplayExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCustomDisplayExtents() :
      op->vtkImageMapper::GetCustomDisplayExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMapper\nC++: vtkImageMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapper\nC++: vtkImageMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImageMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nOverride Modifiedtime as we have added a lookuptable\n"},
  {(char*)"SetColorWindow", PyvtkImageMapper_SetColorWindow, METH_VARARGS,
   (char*)"V.SetColorWindow(float)\nC++: void SetColorWindow(double a)\n\nSet/Get the window value for window/level\n"},
  {(char*)"GetColorWindow", PyvtkImageMapper_GetColorWindow, METH_VARARGS,
   (char*)"V.GetColorWindow() -> float\nC++: double GetColorWindow()\n\nSet/Get the window value for window/level\n"},
  {(char*)"SetColorLevel", PyvtkImageMapper_SetColorLevel, METH_VARARGS,
   (char*)"V.SetColorLevel(float)\nC++: void SetColorLevel(double a)\n\nSet/Get the level value for window/level\n"},
  {(char*)"GetColorLevel", PyvtkImageMapper_GetColorLevel, METH_VARARGS,
   (char*)"V.GetColorLevel() -> float\nC++: double GetColorLevel()\n\nSet/Get the level value for window/level\n"},
  {(char*)"SetZSlice", PyvtkImageMapper_SetZSlice, METH_VARARGS,
   (char*)"V.SetZSlice(int)\nC++: void SetZSlice(int a)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetZSlice", PyvtkImageMapper_GetZSlice, METH_VARARGS,
   (char*)"V.GetZSlice() -> int\nC++: int GetZSlice()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMin", PyvtkImageMapper_GetWholeZMin, METH_VARARGS,
   (char*)"V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMax", PyvtkImageMapper_GetWholeZMax, METH_VARARGS,
   (char*)"V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"RenderStart", PyvtkImageMapper_RenderStart, METH_VARARGS,
   (char*)"V.RenderStart(vtkViewport, vtkActor2D)\nC++: void RenderStart(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw the image to the screen.\n"},
  {(char*)"RenderData", PyvtkImageMapper_RenderData, METH_VARARGS,
   (char*)"V.RenderData(vtkViewport, vtkImageData, vtkActor2D)\nC++: virtual void RenderData(vtkViewport *, vtkImageData *,\n    vtkActor2D *)\n\nFunction called by Render to actually draw the image to to the\nscreen\n"},
  {(char*)"GetColorShift", PyvtkImageMapper_GetColorShift, METH_VARARGS,
   (char*)"V.GetColorShift() -> float\nC++: double GetColorShift()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {(char*)"GetColorScale", PyvtkImageMapper_GetColorScale, METH_VARARGS,
   (char*)"V.GetColorScale() -> float\nC++: double GetColorScale()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {(char*)"SetInputData", PyvtkImageMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *input)\n\nSet the Input of a filter.\n"},
  {(char*)"GetInput", PyvtkImageMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet the Input of a filter.\n"},
  {(char*)"SetRenderToRectangle", PyvtkImageMapper_SetRenderToRectangle, METH_VARARGS,
   (char*)"V.SetRenderToRectangle(int)\nC++: void SetRenderToRectangle(int a)\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"GetRenderToRectangle", PyvtkImageMapper_GetRenderToRectangle, METH_VARARGS,
   (char*)"V.GetRenderToRectangle() -> int\nC++: int GetRenderToRectangle()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"RenderToRectangleOn", PyvtkImageMapper_RenderToRectangleOn, METH_VARARGS,
   (char*)"V.RenderToRectangleOn()\nC++: void RenderToRectangleOn()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"RenderToRectangleOff", PyvtkImageMapper_RenderToRectangleOff, METH_VARARGS,
   (char*)"V.RenderToRectangleOff()\nC++: void RenderToRectangleOff()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"SetUseCustomExtents", PyvtkImageMapper_SetUseCustomExtents, METH_VARARGS,
   (char*)"V.SetUseCustomExtents(int)\nC++: void SetUseCustomExtents(int a)\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"GetUseCustomExtents", PyvtkImageMapper_GetUseCustomExtents, METH_VARARGS,
   (char*)"V.GetUseCustomExtents() -> int\nC++: int GetUseCustomExtents()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"UseCustomExtentsOn", PyvtkImageMapper_UseCustomExtentsOn, METH_VARARGS,
   (char*)"V.UseCustomExtentsOn()\nC++: void UseCustomExtentsOn()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"UseCustomExtentsOff", PyvtkImageMapper_UseCustomExtentsOff, METH_VARARGS,
   (char*)"V.UseCustomExtentsOff()\nC++: void UseCustomExtentsOff()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"SetCustomDisplayExtents", PyvtkImageMapper_SetCustomDisplayExtents, METH_VARARGS,
   (char*)"V.SetCustomDisplayExtents((int, int, int, int))\nC++: void SetCustomDisplayExtents(int a[4])\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {(char*)"GetCustomDisplayExtents", PyvtkImageMapper_GetCustomDisplayExtents, METH_VARARGS,
   (char*)"V.GetCustomDisplayExtents() -> (int, int, int, int)\nC++: int *GetCustomDisplayExtents()\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapper_StaticNew()
{
  return vtkImageMapper::New();
}

PyObject *PyVTKClass_vtkImageMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapper_StaticNew,
    PyvtkImageMapper_Methods,
    "vtkImageMapper", modulename,
    NULL, NULL,
    PyvtkImageMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));
  return cls;
}

const char **PyvtkImageMapper_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapper - 2D image display\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkImageMapper provides 2D image display support for vtk. It is a\nMapper2D subclass that can be associated with an Actor2D and placed\nwithin a RenderWindow or ImageWindow. The vtkImageMapper is a 2D\nmapper, which means that it displays images in display coordinates.\nIn display coordinates, one image pixel is always one screen pixel.\n\nSee Also:\n\nvtkMapper2D vtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

