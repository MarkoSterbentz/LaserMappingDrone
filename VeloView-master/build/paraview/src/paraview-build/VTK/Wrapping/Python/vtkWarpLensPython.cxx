// python wrapper for vtkWarpLens
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWarpLens.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWarpLens(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWarpLensNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkWarpLens_Doc();


static PyObject *
PyvtkWarpLens_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWarpLens::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpLens::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWarpLens *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpLens::NewInstance());

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
PyvtkWarpLens_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWarpLens *tempr = vtkWarpLens::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetKappa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKappa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKappa(temp0);
      }
    else
      {
      op->vtkWarpLens::SetKappa(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetKappa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKappa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKappa() :
      op->vtkWarpLens::GetKappa());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0, temp1);
      }
    else
      {
      op->vtkWarpLens::SetCenter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkWarpLens::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetPrincipalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPrincipalPoint(temp0, temp1);
      }
    else
      {
      op->vtkWarpLens::SetPrincipalPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpLens_SetPrincipalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPrincipalPoint(temp0);
      }
    else
      {
      op->vtkWarpLens::SetPrincipalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpLens_SetPrincipalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWarpLens_SetPrincipalPoint_s1(self, args);
    case 1:
      return PyvtkWarpLens_SetPrincipalPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPrincipalPoint");
  return NULL;
}



static PyObject *
PyvtkWarpLens_GetPrincipalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPrincipalPoint() :
      op->vtkWarpLens::GetPrincipalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetK1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetK1(temp0);
      }
    else
      {
      op->vtkWarpLens::SetK1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetK1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetK1() :
      op->vtkWarpLens::GetK1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetK2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetK2(temp0);
      }
    else
      {
      op->vtkWarpLens::SetK2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetK2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetK2() :
      op->vtkWarpLens::GetK2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetP1(temp0);
      }
    else
      {
      op->vtkWarpLens::SetP1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetP1() :
      op->vtkWarpLens::GetP1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetP2(temp0);
      }
    else
      {
      op->vtkWarpLens::SetP2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetP2() :
      op->vtkWarpLens::GetP2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetFormatWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormatWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFormatWidth(temp0);
      }
    else
      {
      op->vtkWarpLens::SetFormatWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetFormatWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormatWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFormatWidth() :
      op->vtkWarpLens::GetFormatWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetFormatHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormatHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFormatHeight(temp0);
      }
    else
      {
      op->vtkWarpLens::SetFormatHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetFormatHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormatHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFormatHeight() :
      op->vtkWarpLens::GetFormatHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetImageWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageWidth(temp0);
      }
    else
      {
      op->vtkWarpLens::SetImageWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetImageWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageWidth() :
      op->vtkWarpLens::GetImageWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_SetImageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageHeight(temp0);
      }
    else
      {
      op->vtkWarpLens::SetImageHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_GetImageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageHeight() :
      op->vtkWarpLens::GetImageHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpLens_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkWarpLens::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWarpLens_Methods[] = {
  {(char*)"GetClassName", PyvtkWarpLens_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWarpLens_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWarpLens_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWarpLens\nC++: vtkWarpLens *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWarpLens_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWarpLens\nC++: vtkWarpLens *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKappa", PyvtkWarpLens_SetKappa, METH_VARARGS,
   (char*)"V.SetKappa(float)\nC++: void SetKappa(double kappa)\n\nSpecify second order symmetric radial lens distortion parameter.\nThis is obsoleted by newer instance variables.\n"},
  {(char*)"GetKappa", PyvtkWarpLens_GetKappa, METH_VARARGS,
   (char*)"V.GetKappa() -> float\nC++: double GetKappa()\n\nSpecify second order symmetric radial lens distortion parameter.\nThis is obsoleted by newer instance variables.\n"},
  {(char*)"SetCenter", PyvtkWarpLens_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float)\nC++: void SetCenter(double centerX, double centerY)\n\nSpecify the center of radial distortion in pixels. This is\nobsoleted by newer instance variables.\n"},
  {(char*)"GetCenter", PyvtkWarpLens_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float)\nC++: double *GetCenter()\n\nSpecify the center of radial distortion in pixels. This is\nobsoleted by newer instance variables.\n"},
  {(char*)"SetPrincipalPoint", PyvtkWarpLens_SetPrincipalPoint, METH_VARARGS,
   (char*)"V.SetPrincipalPoint(float, float)\nC++: void SetPrincipalPoint(double, double)\nV.SetPrincipalPoint((float, float))\nC++: void SetPrincipalPoint(double a[2])\n\n"},
  {(char*)"GetPrincipalPoint", PyvtkWarpLens_GetPrincipalPoint, METH_VARARGS,
   (char*)"V.GetPrincipalPoint() -> (float, float)\nC++: double *GetPrincipalPoint()\n\nSpecify the calibrated principal point of the camera/lens\n"},
  {(char*)"SetK1", PyvtkWarpLens_SetK1, METH_VARARGS,
   (char*)"V.SetK1(float)\nC++: void SetK1(double a)\n\nSpecify the symmetric radial distortion parameters for the lens\n"},
  {(char*)"GetK1", PyvtkWarpLens_GetK1, METH_VARARGS,
   (char*)"V.GetK1() -> float\nC++: double GetK1()\n\nSpecify the symmetric radial distortion parameters for the lens\n"},
  {(char*)"SetK2", PyvtkWarpLens_SetK2, METH_VARARGS,
   (char*)"V.SetK2(float)\nC++: void SetK2(double a)\n\nSpecify the symmetric radial distortion parameters for the lens\n"},
  {(char*)"GetK2", PyvtkWarpLens_GetK2, METH_VARARGS,
   (char*)"V.GetK2() -> float\nC++: double GetK2()\n\nSpecify the symmetric radial distortion parameters for the lens\n"},
  {(char*)"SetP1", PyvtkWarpLens_SetP1, METH_VARARGS,
   (char*)"V.SetP1(float)\nC++: void SetP1(double a)\n\nSpecify the decentering distortion parameters for the lens\n"},
  {(char*)"GetP1", PyvtkWarpLens_GetP1, METH_VARARGS,
   (char*)"V.GetP1() -> float\nC++: double GetP1()\n\nSpecify the decentering distortion parameters for the lens\n"},
  {(char*)"SetP2", PyvtkWarpLens_SetP2, METH_VARARGS,
   (char*)"V.SetP2(float)\nC++: void SetP2(double a)\n\nSpecify the decentering distortion parameters for the lens\n"},
  {(char*)"GetP2", PyvtkWarpLens_GetP2, METH_VARARGS,
   (char*)"V.GetP2() -> float\nC++: double GetP2()\n\nSpecify the decentering distortion parameters for the lens\n"},
  {(char*)"SetFormatWidth", PyvtkWarpLens_SetFormatWidth, METH_VARARGS,
   (char*)"V.SetFormatWidth(float)\nC++: void SetFormatWidth(double a)\n\nSpecify the imager format width / height in mm\n"},
  {(char*)"GetFormatWidth", PyvtkWarpLens_GetFormatWidth, METH_VARARGS,
   (char*)"V.GetFormatWidth() -> float\nC++: double GetFormatWidth()\n\nSpecify the imager format width / height in mm\n"},
  {(char*)"SetFormatHeight", PyvtkWarpLens_SetFormatHeight, METH_VARARGS,
   (char*)"V.SetFormatHeight(float)\nC++: void SetFormatHeight(double a)\n\nSpecify the imager format width / height in mm\n"},
  {(char*)"GetFormatHeight", PyvtkWarpLens_GetFormatHeight, METH_VARARGS,
   (char*)"V.GetFormatHeight() -> float\nC++: double GetFormatHeight()\n\nSpecify the imager format width / height in mm\n"},
  {(char*)"SetImageWidth", PyvtkWarpLens_SetImageWidth, METH_VARARGS,
   (char*)"V.SetImageWidth(int)\nC++: void SetImageWidth(int a)\n\nSpecify the image width / height in pixels\n"},
  {(char*)"GetImageWidth", PyvtkWarpLens_GetImageWidth, METH_VARARGS,
   (char*)"V.GetImageWidth() -> int\nC++: int GetImageWidth()\n\nSpecify the image width / height in pixels\n"},
  {(char*)"SetImageHeight", PyvtkWarpLens_SetImageHeight, METH_VARARGS,
   (char*)"V.SetImageHeight(int)\nC++: void SetImageHeight(int a)\n\nSpecify the image width / height in pixels\n"},
  {(char*)"GetImageHeight", PyvtkWarpLens_GetImageHeight, METH_VARARGS,
   (char*)"V.GetImageHeight() -> int\nC++: int GetImageHeight()\n\nSpecify the image width / height in pixels\n"},
  {(char*)"FillInputPortInformation", PyvtkWarpLens_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWarpLens_StaticNew()
{
  return vtkWarpLens::New();
}

PyObject *PyVTKClass_vtkWarpLensNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWarpLens_StaticNew,
    PyvtkWarpLens_Methods,
    "vtkWarpLens", modulename,
    NULL, NULL,
    PyvtkWarpLens_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWarpLens_Doc()
{
  static const char *docstring[] = {
    "vtkWarpLens - deform geometry by applying lens distortion\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkWarpLens is a filter that modifies point coordinates by moving in\naccord with a lens distortion model.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWarpLens(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWarpLensNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWarpLens", o) != 0)
    {
    Py_DECREF(o);
    }

}

