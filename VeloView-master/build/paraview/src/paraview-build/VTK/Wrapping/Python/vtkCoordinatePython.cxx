// python wrapper for vtkCoordinate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCoordinate.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCoordinate(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCoordinateNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCoordinate_Doc();


static PyObject *
PyvtkCoordinate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCoordinate::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinate::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinate::NewInstance());

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
PyvtkCoordinate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCoordinate *tempr = vtkCoordinate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystem(temp0);
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkCoordinate::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToDisplay();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToNormalizedDisplay();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToViewport();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToNormalizedViewport();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToView();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToWorld();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCoordinateSystemAsString() :
      op->vtkCoordinate::GetCoordinateSystemAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

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
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCoordinate_SetValue_s1(self, args);
    case 1:
      return PyvtkCoordinate_SetValue_s2(self, args);
    case 2:
      return PyvtkCoordinate_SetValue_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkCoordinate_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkCoordinate::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
    {
    if (ap.IsBound())
      {
      op->SetReferenceCoordinate(temp0);
      }
    else
      {
      op->vtkCoordinate::SetReferenceCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetReferenceCoordinate() :
      op->vtkCoordinate::GetReferenceCoordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkCoordinate::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkCoordinate::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedWorldValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedWorldValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComputedWorldValue(temp0) :
      op->vtkCoordinate::GetComputedWorldValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int *tempr = (ap.IsBound() ?
      op->GetComputedViewportValue(temp0) :
      op->vtkCoordinate::GetComputedViewportValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int *tempr = (ap.IsBound() ?
      op->GetComputedDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDisplayValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedLocalDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedLocalDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int *tempr = (ap.IsBound() ?
      op->GetComputedLocalDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedLocalDisplayValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleViewportValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleViewportValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleDisplayValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComputedValue(temp0) :
      op->vtkCoordinate::GetComputedValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComputedUserDefinedValue(temp0) :
      op->vtkCoordinate::GetComputedUserDefinedValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCoordinate_Methods[] = {
  {(char*)"GetClassName", PyvtkCoordinate_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCoordinate_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCoordinate_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCoordinate\nC++: vtkCoordinate *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCoordinate_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCoordinate\nC++: vtkCoordinate *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCoordinateSystem", PyvtkCoordinate_SetCoordinateSystem, METH_VARARGS,
   (char*)"V.SetCoordinateSystem(int)\nC++: void SetCoordinateSystem(int a)\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"GetCoordinateSystem", PyvtkCoordinate_GetCoordinateSystem, METH_VARARGS,
   (char*)"V.GetCoordinateSystem() -> int\nC++: int GetCoordinateSystem()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToDisplay", PyvtkCoordinate_SetCoordinateSystemToDisplay, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToDisplay()\nC++: void SetCoordinateSystemToDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToNormalizedDisplay", PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToNormalizedDisplay()\nC++: void SetCoordinateSystemToNormalizedDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToViewport", PyvtkCoordinate_SetCoordinateSystemToViewport, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToViewport()\nC++: void SetCoordinateSystemToViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToNormalizedViewport", PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToNormalizedViewport()\nC++: void SetCoordinateSystemToNormalizedViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToView", PyvtkCoordinate_SetCoordinateSystemToView, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToView()\nC++: void SetCoordinateSystemToView()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToWorld", PyvtkCoordinate_SetCoordinateSystemToWorld, METH_VARARGS,
   (char*)"V.SetCoordinateSystemToWorld()\nC++: void SetCoordinateSystemToWorld()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"GetCoordinateSystemAsString", PyvtkCoordinate_GetCoordinateSystemAsString, METH_VARARGS,
   (char*)"V.GetCoordinateSystemAsString() -> string\nC++: const char *GetCoordinateSystemAsString()\n\n"},
  {(char*)"SetValue", PyvtkCoordinate_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float, float, float)\nC++: void SetValue(double, double, double)\nV.SetValue((float, float, float))\nC++: void SetValue(double a[3])\nV.SetValue(float, float)\nC++: void SetValue(double a, double b)\n\n"},
  {(char*)"GetValue", PyvtkCoordinate_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> (float, float, float)\nC++: double *GetValue()\n\n"},
  {(char*)"SetReferenceCoordinate", PyvtkCoordinate_SetReferenceCoordinate, METH_VARARGS,
   (char*)"V.SetReferenceCoordinate(vtkCoordinate)\nC++: virtual void SetReferenceCoordinate(vtkCoordinate *)\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {(char*)"GetReferenceCoordinate", PyvtkCoordinate_GetReferenceCoordinate, METH_VARARGS,
   (char*)"V.GetReferenceCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetReferenceCoordinate()\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {(char*)"SetViewport", PyvtkCoordinate_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer not a reference counted\nobject to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {(char*)"GetViewport", PyvtkCoordinate_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer not a reference counted\nobject to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {(char*)"GetComputedWorldValue", PyvtkCoordinate_GetComputedWorldValue, METH_VARARGS,
   (char*)"V.GetComputedWorldValue(vtkViewport) -> (float, float, float)\nC++: double *GetComputedWorldValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedViewportValue", PyvtkCoordinate_GetComputedViewportValue, METH_VARARGS,
   (char*)"V.GetComputedViewportValue(vtkViewport) -> (int, int)\nC++: int *GetComputedViewportValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedDisplayValue", PyvtkCoordinate_GetComputedDisplayValue, METH_VARARGS,
   (char*)"V.GetComputedDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedLocalDisplayValue", PyvtkCoordinate_GetComputedLocalDisplayValue, METH_VARARGS,
   (char*)"V.GetComputedLocalDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedLocalDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedDoubleViewportValue", PyvtkCoordinate_GetComputedDoubleViewportValue, METH_VARARGS,
   (char*)"V.GetComputedDoubleViewportValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleViewportValue(vtkViewport *)\n\n"},
  {(char*)"GetComputedDoubleDisplayValue", PyvtkCoordinate_GetComputedDoubleDisplayValue, METH_VARARGS,
   (char*)"V.GetComputedDoubleDisplayValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleDisplayValue(vtkViewport *)\n\n"},
  {(char*)"GetComputedValue", PyvtkCoordinate_GetComputedValue, METH_VARARGS,
   (char*)"V.GetComputedValue(vtkViewport) -> (float, ...)\nC++: double *GetComputedValue(vtkViewport *)\n\nGetComputedValue() will return either World, Viewport or Display\nbased on what has been set as the coordinate system. This is good\nfor objects like vtkLineSource, where the user might want to use\nthem as World or Viewport coordinates\n"},
  {(char*)"GetComputedUserDefinedValue", PyvtkCoordinate_GetComputedUserDefinedValue, METH_VARARGS,
   (char*)"V.GetComputedUserDefinedValue(vtkViewport) -> (float, ...)\nC++: virtual double *GetComputedUserDefinedValue(vtkViewport *)\n\nGetComputedUserDefinedValue() is to be used only when the\ncoordinate system is VTK_USERDEFINED. The user must subclass\nvtkCoordinate and override this function, when set as the\nTransformCoordinate in 2D-Mappers, the user can customize display\nof 2D polygons\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCoordinate_StaticNew()
{
  return vtkCoordinate::New();
}

PyObject *PyVTKClass_vtkCoordinateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCoordinate_StaticNew,
    PyvtkCoordinate_Methods,
    "vtkCoordinate", modulename,
    NULL, NULL,
    PyvtkCoordinate_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCoordinate_Doc()
{
  static const char *docstring[] = {
    "vtkCoordinate - perform coordinate transformation, and represent\nposition, in a variety of vtk coordinate systems\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCoordinate represents position in a variety of coordinate systems,\nand converts position to other coordinate systems. It also supports\nrelative positioning, so you can create a cascade of vtkCoordinate\nobjects (no loops please!) that refer to each other. The typical\nusage of this object is to set the coordinate system in which to\nrepresent a position (e.g.,\nSetCoordinateSystemToNormalizedDispla",
    "y()), set the value of the\ncoordinate (e.g., SetValue()), and then invoke the appropriate method\nto convert to another coordinate system (e.g.,\nGetComputedWorldValue()).\n\nThe coordinate systems in vtk are as follows: <PRE>\n  DISPLAY -             x-y pixel values in window\n  NORMALIZED DISPLAY -  x-y (0,1) normalized values\n  VIEWPORT -            x-y pixel values in viewport\n  NORMALIZED VIEWPORT",
    " - x-y (0,1) normalized value in viewport\n  VIEW -                x-y-z (-1,1) values in camera coordinates. (z\nis depth)\n  WORLD -               x-y-z global coordinate values\n  USERDEFINED -         x-y-z in User defined space </PRE>\n\nIf you cascade vtkCoordinate objects, you refer to another\nvtkCoordinate object which in turn can refer to others, and so on.\nThis allows you to create composite g",
    "roups of things like vtkActor2D\nthat are positioned relative to one another. Note that in cascaded\nsequences, each vtkCoordinate object may be specified in different\ncoordinate systems!\n\nSee Also:\n\nvtkActor2D vtkScalarBarActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCoordinate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCoordinateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCoordinate", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 7; c++)
    {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_DISPLAY", 0 },
        { "VTK_NORMALIZED_DISPLAY", 1 },
        { "VTK_VIEWPORT", 2 },
        { "VTK_NORMALIZED_VIEWPORT", 3 },
        { "VTK_VIEW", 4 },
        { "VTK_WORLD", 5 },
        { "VTK_USERDEFINED", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

