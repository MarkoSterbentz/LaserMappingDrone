// python wrapper for vtkLegendBoxActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLegendBoxActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLegendBoxActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLegendBoxActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkLegendBoxActor_Doc();


static PyObject *
PyvtkLegendBoxActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLegendBoxActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLegendBoxActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLegendBoxActor::NewInstance());

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
PyvtkLegendBoxActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLegendBoxActor *tempr = vtkLegendBoxActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfEntries(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetNumberOfEntries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEntries() :
      op->vtkLegendBoxActor::GetNumberOfEntries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  char *temp2 = NULL;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetEntry(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetEntry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  char *temp2 = NULL;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetEntry(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetEntry_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  vtkImageData *temp2 = NULL;
  char *temp3 = NULL;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->SetEntry(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLegendBoxActor_SetEntry_Methods[] = {
  {NULL, PyvtkLegendBoxActor_SetEntry_s1, METH_VARARGS,
   (char*)"@iOzO *vtkPolyData *d"},
  {NULL, PyvtkLegendBoxActor_SetEntry_s2, METH_VARARGS,
   (char*)"@iOzO *vtkImageData *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLegendBoxActor_SetEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLegendBoxActor_SetEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkLegendBoxActor_SetEntry_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEntry");
  return NULL;
}



static PyObject *
PyvtkLegendBoxActor_SetEntrySymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntrySymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetEntrySymbol(temp0, temp1);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntrySymbol(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetEntryIcon(temp0, temp1);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntryIcon(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEntryString(temp0, temp1);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntryString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetEntryColor(temp0, temp1);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntryColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetEntryColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetEntryColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntryColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetEntryColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLegendBoxActor_SetEntryColor_s1(self, args);
    case 4:
      return PyvtkLegendBoxActor_SetEntryColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEntryColor");
  return NULL;
}



static PyObject *
PyvtkLegendBoxActor_GetEntrySymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntrySymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetEntrySymbol(temp0) :
      op->vtkLegendBoxActor::GetEntrySymbol(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetEntryIcon(temp0) :
      op->vtkLegendBoxActor::GetEntryIcon(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryString(temp0) :
      op->vtkLegendBoxActor::GetEntryString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetEntryColor(temp0) :
      op->vtkLegendBoxActor::GetEntryColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetEntryTextProperty(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetEntryTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetEntryTextProperty() :
      op->vtkLegendBoxActor::GetEntryTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkLegendBoxActor::GetBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOn();
      }
    else
      {
      op->vtkLegendBoxActor::BorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOff();
      }
    else
      {
      op->vtkLegendBoxActor::BorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetLockBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockBorder(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetLockBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetLockBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLockBorder() :
      op->vtkLegendBoxActor::GetLockBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_LockBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockBorderOn();
      }
    else
      {
      op->vtkLegendBoxActor::LockBorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_LockBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockBorderOff();
      }
    else
      {
      op->vtkLegendBoxActor::LockBorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBox(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetBox(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBox() :
      op->vtkLegendBoxActor::GetBox());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoxOn();
      }
    else
      {
      op->vtkLegendBoxActor::BoxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoxOff();
      }
    else
      {
      op->vtkLegendBoxActor::BoxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBoxProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBoxProperty() :
      op->vtkLegendBoxActor::GetBoxProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPadding(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkLegendBoxActor::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkLegendBoxActor::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkLegendBoxActor::GetPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarVisibility(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkLegendBoxActor::GetScalarVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkLegendBoxActor::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkLegendBoxActor::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBackground(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetUseBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseBackground() :
      op->vtkLegendBoxActor::GetUseBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_UseBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBackgroundOn();
      }
    else
      {
      op->vtkLegendBoxActor::UseBackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_UseBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBackgroundOff();
      }
    else
      {
      op->vtkLegendBoxActor::UseBackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLegendBoxActor::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLegendBoxActor_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkLegendBoxActor_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkLegendBoxActor_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkLegendBoxActor::GetBackgroundColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundOpacity(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::SetBackgroundOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkLegendBoxActor::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkLegendBoxActor::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkLegendBoxActor::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkLegendBoxActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLegendBoxActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLegendBoxActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLegendBoxActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLegendBoxActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLegendBoxActor_Methods[] = {
  {(char*)"GetClassName", PyvtkLegendBoxActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLegendBoxActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLegendBoxActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLegendBoxActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfEntries", PyvtkLegendBoxActor_SetNumberOfEntries, METH_VARARGS,
   (char*)"V.SetNumberOfEntries(int)\nC++: void SetNumberOfEntries(int num)\n\nSpecify the number of entries in the legend box.\n"},
  {(char*)"GetNumberOfEntries", PyvtkLegendBoxActor_GetNumberOfEntries, METH_VARARGS,
   (char*)"V.GetNumberOfEntries() -> int\nC++: int GetNumberOfEntries()\n\nSpecify the number of entries in the legend box.\n"},
  {(char*)"SetEntry", PyvtkLegendBoxActor_SetEntry, METH_VARARGS,
   (char*)"V.SetEntry(int, vtkPolyData, string, [float, float, float])\nC++: void SetEntry(int i, vtkPolyData *symbol, const char *string,\n     double color[3])\nV.SetEntry(int, vtkImageData, string, [float, float, float])\nC++: void SetEntry(int i, vtkImageData *symbol,\n    const char *string, double color[3])\nV.SetEntry(int, vtkPolyData, vtkImageData, string, [float, float,\n    float])\nC++: void SetEntry(int i, vtkPolyData *symbol, vtkImageData *icon,\n     const char *string, double color[3])\n\nAdd an entry to the legend box. You must supply a vtkPolyData to\nbe used as a symbol (it can be NULL) and a text string (which\nalso can be NULL). The vtkPolyData is assumed to be defined in\nthe x-y plane, and the text is assumed to be a single line in\nheight. Note that when this method is invoked previous entries\nare deleted. Also supply a text string and optionally a color.\n(If a color is not specified, then the entry color is the same as\nthis actor's color.) (Note: use the set methods when you use\nSetNumberOfEntries().)\n"},
  {(char*)"SetEntrySymbol", PyvtkLegendBoxActor_SetEntrySymbol, METH_VARARGS,
   (char*)"V.SetEntrySymbol(int, vtkPolyData)\nC++: void SetEntrySymbol(int i, vtkPolyData *symbol)\n\n"},
  {(char*)"SetEntryIcon", PyvtkLegendBoxActor_SetEntryIcon, METH_VARARGS,
   (char*)"V.SetEntryIcon(int, vtkImageData)\nC++: void SetEntryIcon(int i, vtkImageData *icon)\n\n"},
  {(char*)"SetEntryString", PyvtkLegendBoxActor_SetEntryString, METH_VARARGS,
   (char*)"V.SetEntryString(int, string)\nC++: void SetEntryString(int i, const char *string)\n\n"},
  {(char*)"SetEntryColor", PyvtkLegendBoxActor_SetEntryColor, METH_VARARGS,
   (char*)"V.SetEntryColor(int, [float, float, float])\nC++: void SetEntryColor(int i, double color[3])\nV.SetEntryColor(int, float, float, float)\nC++: void SetEntryColor(int i, double r, double g, double b)\n\n"},
  {(char*)"GetEntrySymbol", PyvtkLegendBoxActor_GetEntrySymbol, METH_VARARGS,
   (char*)"V.GetEntrySymbol(int) -> vtkPolyData\nC++: vtkPolyData *GetEntrySymbol(int i)\n\n"},
  {(char*)"GetEntryIcon", PyvtkLegendBoxActor_GetEntryIcon, METH_VARARGS,
   (char*)"V.GetEntryIcon(int) -> vtkImageData\nC++: vtkImageData *GetEntryIcon(int i)\n\n"},
  {(char*)"GetEntryString", PyvtkLegendBoxActor_GetEntryString, METH_VARARGS,
   (char*)"V.GetEntryString(int) -> string\nC++: const char *GetEntryString(int i)\n\n"},
  {(char*)"GetEntryColor", PyvtkLegendBoxActor_GetEntryColor, METH_VARARGS,
   (char*)"V.GetEntryColor(int) -> (float, float, float)\nC++: double *GetEntryColor(int i)\n\n"},
  {(char*)"SetEntryTextProperty", PyvtkLegendBoxActor_SetEntryTextProperty, METH_VARARGS,
   (char*)"V.SetEntryTextProperty(vtkTextProperty)\nC++: virtual void SetEntryTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetEntryTextProperty", PyvtkLegendBoxActor_GetEntryTextProperty, METH_VARARGS,
   (char*)"V.GetEntryTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetEntryTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"SetBorder", PyvtkLegendBoxActor_SetBorder, METH_VARARGS,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int a)\n\nSet/Get the flag that controls whether a border will be drawn\naround the legend box.\n"},
  {(char*)"GetBorder", PyvtkLegendBoxActor_GetBorder, METH_VARARGS,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nSet/Get the flag that controls whether a border will be drawn\naround the legend box.\n"},
  {(char*)"BorderOn", PyvtkLegendBoxActor_BorderOn, METH_VARARGS,
   (char*)"V.BorderOn()\nC++: void BorderOn()\n\nSet/Get the flag that controls whether a border will be drawn\naround the legend box.\n"},
  {(char*)"BorderOff", PyvtkLegendBoxActor_BorderOff, METH_VARARGS,
   (char*)"V.BorderOff()\nC++: void BorderOff()\n\nSet/Get the flag that controls whether a border will be drawn\naround the legend box.\n"},
  {(char*)"SetLockBorder", PyvtkLegendBoxActor_SetLockBorder, METH_VARARGS,
   (char*)"V.SetLockBorder(int)\nC++: void SetLockBorder(int a)\n\nSet/Get the flag that controls whether the border and legend\nplacement is locked into the rectangle defined by\n(Position,Position2). If off, then the legend box will adjust its\nsize so that the border fits nicely around the text and symbols.\n(The ivar is off by default.) Note: the legend box is guaranteed\nto lie within the original border definition.\n"},
  {(char*)"GetLockBorder", PyvtkLegendBoxActor_GetLockBorder, METH_VARARGS,
   (char*)"V.GetLockBorder() -> int\nC++: int GetLockBorder()\n\nSet/Get the flag that controls whether the border and legend\nplacement is locked into the rectangle defined by\n(Position,Position2). If off, then the legend box will adjust its\nsize so that the border fits nicely around the text and symbols.\n(The ivar is off by default.) Note: the legend box is guaranteed\nto lie within the original border definition.\n"},
  {(char*)"LockBorderOn", PyvtkLegendBoxActor_LockBorderOn, METH_VARARGS,
   (char*)"V.LockBorderOn()\nC++: void LockBorderOn()\n\nSet/Get the flag that controls whether the border and legend\nplacement is locked into the rectangle defined by\n(Position,Position2). If off, then the legend box will adjust its\nsize so that the border fits nicely around the text and symbols.\n(The ivar is off by default.) Note: the legend box is guaranteed\nto lie within the original border definition.\n"},
  {(char*)"LockBorderOff", PyvtkLegendBoxActor_LockBorderOff, METH_VARARGS,
   (char*)"V.LockBorderOff()\nC++: void LockBorderOff()\n\nSet/Get the flag that controls whether the border and legend\nplacement is locked into the rectangle defined by\n(Position,Position2). If off, then the legend box will adjust its\nsize so that the border fits nicely around the text and symbols.\n(The ivar is off by default.) Note: the legend box is guaranteed\nto lie within the original border definition.\n"},
  {(char*)"SetBox", PyvtkLegendBoxActor_SetBox, METH_VARARGS,
   (char*)"V.SetBox(int)\nC++: void SetBox(int a)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetBox", PyvtkLegendBoxActor_GetBox, METH_VARARGS,
   (char*)"V.GetBox() -> int\nC++: int GetBox()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"BoxOn", PyvtkLegendBoxActor_BoxOn, METH_VARARGS,
   (char*)"V.BoxOn()\nC++: void BoxOn()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"BoxOff", PyvtkLegendBoxActor_BoxOff, METH_VARARGS,
   (char*)"V.BoxOff()\nC++: void BoxOff()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetBoxProperty", PyvtkLegendBoxActor_GetBoxProperty, METH_VARARGS,
   (char*)"V.GetBoxProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetBoxProperty()\n\nGet the box vtkProperty2D.\n"},
  {(char*)"SetPadding", PyvtkLegendBoxActor_SetPadding, METH_VARARGS,
   (char*)"V.SetPadding(int)\nC++: void SetPadding(int)\n\nSet/Get the padding between the legend entries and the border.\nThe value is specified in pixels.\n"},
  {(char*)"GetPaddingMinValue", PyvtkLegendBoxActor_GetPaddingMinValue, METH_VARARGS,
   (char*)"V.GetPaddingMinValue() -> int\nC++: int GetPaddingMinValue()\n\nSet/Get the padding between the legend entries and the border.\nThe value is specified in pixels.\n"},
  {(char*)"GetPaddingMaxValue", PyvtkLegendBoxActor_GetPaddingMaxValue, METH_VARARGS,
   (char*)"V.GetPaddingMaxValue() -> int\nC++: int GetPaddingMaxValue()\n\nSet/Get the padding between the legend entries and the border.\nThe value is specified in pixels.\n"},
  {(char*)"GetPadding", PyvtkLegendBoxActor_GetPadding, METH_VARARGS,
   (char*)"V.GetPadding() -> int\nC++: int GetPadding()\n\nSet/Get the padding between the legend entries and the border.\nThe value is specified in pixels.\n"},
  {(char*)"SetScalarVisibility", PyvtkLegendBoxActor_SetScalarVisibility, METH_VARARGS,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether the symbol's scalar data is\nused to color the symbol. If off, the color of the\nvtkLegendBoxActor is used.\n"},
  {(char*)"GetScalarVisibility", PyvtkLegendBoxActor_GetScalarVisibility, METH_VARARGS,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether the symbol's scalar data is\nused to color the symbol. If off, the color of the\nvtkLegendBoxActor is used.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkLegendBoxActor_ScalarVisibilityOn, METH_VARARGS,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether the symbol's scalar data is\nused to color the symbol. If off, the color of the\nvtkLegendBoxActor is used.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkLegendBoxActor_ScalarVisibilityOff, METH_VARARGS,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether the symbol's scalar data is\nused to color the symbol. If off, the color of the\nvtkLegendBoxActor is used.\n"},
  {(char*)"SetUseBackground", PyvtkLegendBoxActor_SetUseBackground, METH_VARARGS,
   (char*)"V.SetUseBackground(int)\nC++: void SetUseBackground(int a)\n\nTurn on/off background.\n"},
  {(char*)"GetUseBackground", PyvtkLegendBoxActor_GetUseBackground, METH_VARARGS,
   (char*)"V.GetUseBackground() -> int\nC++: int GetUseBackground()\n\nTurn on/off background.\n"},
  {(char*)"UseBackgroundOn", PyvtkLegendBoxActor_UseBackgroundOn, METH_VARARGS,
   (char*)"V.UseBackgroundOn()\nC++: void UseBackgroundOn()\n\nTurn on/off background.\n"},
  {(char*)"UseBackgroundOff", PyvtkLegendBoxActor_UseBackgroundOff, METH_VARARGS,
   (char*)"V.UseBackgroundOff()\nC++: void UseBackgroundOff()\n\nTurn on/off background.\n"},
  {(char*)"SetBackgroundColor", PyvtkLegendBoxActor_SetBackgroundColor, METH_VARARGS,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkLegendBoxActor_GetBackgroundColor, METH_VARARGS,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetBackgroundOpacity", PyvtkLegendBoxActor_SetBackgroundOpacity, METH_VARARGS,
   (char*)"V.SetBackgroundOpacity(float)\nC++: void SetBackgroundOpacity(double)\n\nSet/Get background opacity. Default is: 1.0\n"},
  {(char*)"GetBackgroundOpacityMinValue", PyvtkLegendBoxActor_GetBackgroundOpacityMinValue, METH_VARARGS,
   (char*)"V.GetBackgroundOpacityMinValue() -> float\nC++: double GetBackgroundOpacityMinValue()\n\nSet/Get background opacity. Default is: 1.0\n"},
  {(char*)"GetBackgroundOpacityMaxValue", PyvtkLegendBoxActor_GetBackgroundOpacityMaxValue, METH_VARARGS,
   (char*)"V.GetBackgroundOpacityMaxValue() -> float\nC++: double GetBackgroundOpacityMaxValue()\n\nSet/Get background opacity. Default is: 1.0\n"},
  {(char*)"GetBackgroundOpacity", PyvtkLegendBoxActor_GetBackgroundOpacity, METH_VARARGS,
   (char*)"V.GetBackgroundOpacity() -> float\nC++: double GetBackgroundOpacity()\n\nSet/Get background opacity. Default is: 1.0\n"},
  {(char*)"ShallowCopy", PyvtkLegendBoxActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this scaled text actor. Overloads the virtual\nvtkProp method.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLegendBoxActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLegendBoxActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkLegendBoxActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkLegendBoxActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLegendBoxActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLegendBoxActor_StaticNew()
{
  return vtkLegendBoxActor::New();
}

PyObject *PyVTKClass_vtkLegendBoxActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLegendBoxActor_StaticNew,
    PyvtkLegendBoxActor_Methods,
    "vtkLegendBoxActor", modulename,
    NULL, NULL,
    PyvtkLegendBoxActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkLegendBoxActor_Doc()
{
  static const char *docstring[] = {
    "vtkLegendBoxActor - draw symbols with text\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkLegendBoxActor is used to associate a symbol with a text string.\nThe user specifies a vtkPolyData to use as the symbol, and a string\nassociated with the symbol. The actor can then be placed in the scene\nin the same way that any other vtkActor2D can be used.\n\nTo use this class, you must define the position of the legend box by\nusing the superclasses' vtkActor2D::Position coordinate and Position2",
    "\ncoordinate. Then define the set of symbols and text strings that make\nup the menu box. The font attributes of the entries can be set\nthrough the vtkTextProperty associated to this actor. The class will\nscale the symbols and text to fit in the legend box defined by\n(Position,Position2). Optional features like turning on a border line\nand setting the spacing between the border and the symbols/text ",
    "can\nalso be set.\n\nSee Also:\n\nvtkXYPlotActor vtkActor2D vtkGlyphSource2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLegendBoxActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLegendBoxActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLegendBoxActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

