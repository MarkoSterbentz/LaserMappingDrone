// python wrapper for vtkQuaternion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkQuaternion.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuaternion(PyObject *, const char *); }

static const char **PyvtkQuaternion_IdE_Doc();


static PyObject *
PyvtkQuaternion_IdE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SquaredNorm");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToIdentity");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToIdentity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Identity(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = vtkQuaternion<double>::Identity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalized");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Conjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugate");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Conjugate();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugated");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Invert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Invert();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Inverse");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->Inverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToUnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToUnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToUnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToUnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_NormalizeWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizeWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->NormalizeWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Set(temp0);

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
PyvtkQuaternion_IdE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkQuaternion_IdE_Set_s1(self, args);
    case 1:
      return PyvtkQuaternion_IdE_Set_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkQuaternion_IdE_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Get");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Get(temp0);

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
PyvtkQuaternion_IdE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetW");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetW");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = op->GetRotationAngleAndAxis(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->SetRotationAngleAndAxis(temp0, temp1);

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
PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetRotationAngleAndAxis(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_SetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s1(self, args);
    case 4:
      return PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationAngleAndAxis");
  return NULL;
}



static PyObject *
PyvtkQuaternion_IdE_ToMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToMatrix3x3");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0[3][3];
  double save0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    op->ToMatrix3x3(temp0);

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_FromMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "FromMatrix3x3");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    op->FromMatrix3x3(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Slerp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  vtkQuaternion<double> *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IdE"))
    {
    vtkQuaternion<double> tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "InnerPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  vtkQuaternion<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkQuaternion<double> *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IdE") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IdE"))
    {
    vtkQuaternion<double> tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternion_IdE_Methods[] = {
  {(char*)"SquaredNorm", PyvtkQuaternion_IdE_SquaredNorm, METH_VARARGS,
   (char*)"V.SquaredNorm() -> float\nC++: double SquaredNorm()\n\nGet the squared norm of the quaternion.\n"},
  {(char*)"Norm", PyvtkQuaternion_IdE_Norm, METH_VARARGS,
   (char*)"V.Norm() -> float\nC++: double Norm()\n\nGet the norm of the quaternion, i.e. its length.\n"},
  {(char*)"ToIdentity", PyvtkQuaternion_IdE_ToIdentity, METH_VARARGS,
   (char*)"V.ToIdentity()\nC++: void ToIdentity()\n\nSet the quaternion to identity in place.\n"},
  {(char*)"Identity", PyvtkQuaternion_IdE_Identity, METH_VARARGS | METH_STATIC,
   (char*)"V.Identity() -> vtkQuaternion<double>\nC++: static vtkQuaternion<double> Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {(char*)"Normalize", PyvtkQuaternion_IdE_Normalize, METH_VARARGS,
   (char*)"V.Normalize() -> float\nC++: double Normalize()\n\nNormalize the quaternion in place. Return the norm of the\nquaternion.\n"},
  {(char*)"Normalized", PyvtkQuaternion_IdE_Normalized, METH_VARARGS,
   (char*)"V.Normalized() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {(char*)"Conjugate", PyvtkQuaternion_IdE_Conjugate, METH_VARARGS,
   (char*)"V.Conjugate()\nC++: void Conjugate()\n\nConjugate the quaternion in place.\n"},
  {(char*)"Conjugated", PyvtkQuaternion_IdE_Conjugated, METH_VARARGS,
   (char*)"V.Conjugated() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {(char*)"Invert", PyvtkQuaternion_IdE_Invert, METH_VARARGS,
   (char*)"V.Invert()\nC++: void Invert()\n\nInvert the quaternion in place. This is equivalent to conjugate\nthe quaternion and then divide it by its squared norm.\n"},
  {(char*)"Inverse", PyvtkQuaternion_IdE_Inverse, METH_VARARGS,
   (char*)"V.Inverse() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {(char*)"ToUnitLog", PyvtkQuaternion_IdE_ToUnitLog, METH_VARARGS,
   (char*)"V.ToUnitLog()\nC++: void ToUnitLog()\n\nConvert this quaternion to a unit log quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*sin(theta)].\n"},
  {(char*)"UnitLog", PyvtkQuaternion_IdE_UnitLog, METH_VARARGS,
   (char*)"V.UnitLog() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*sin(theta)].\n"},
  {(char*)"ToUnitExp", PyvtkQuaternion_IdE_ToUnitExp, METH_VARARGS,
   (char*)"V.ToUnitExp()\nC++: void ToUnitExp()\n\nConvert this quaternion to a unit exponential quaternion. The\nunit exponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {(char*)"UnitExp", PyvtkQuaternion_IdE_UnitExp, METH_VARARGS,
   (char*)"V.UnitExp() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {(char*)"NormalizeWithAngleInDegrees", PyvtkQuaternion_IdE_NormalizeWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizeWithAngleInDegrees()\nC++: void NormalizeWithAngleInDegrees()\n\nNormalize a quaternion in place and transform it to so its angle\nis in degrees and its axis normalized.\n"},
  {(char*)"NormalizedWithAngleInDegrees", PyvtkQuaternion_IdE_NormalizedWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizedWithAngleInDegrees() -> vtkQuaternion<double>\nC++: vtkQuaternion<double> NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {(char*)"Set", PyvtkQuaternion_IdE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float, float)\nC++: void Set(const double &w, const double &x, const double &y,\n    const double &z)\nV.Set([float, float, float, float])\nC++: void Set(double quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {(char*)"Get", PyvtkQuaternion_IdE_Get, METH_VARARGS,
   (char*)"V.Get([float, float, float, float])\nC++: void Get(double quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {(char*)"SetW", PyvtkQuaternion_IdE_SetW, METH_VARARGS,
   (char*)"V.SetW(float)\nC++: void SetW(const double &w)\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {(char*)"GetW", PyvtkQuaternion_IdE_GetW, METH_VARARGS,
   (char*)"V.GetW() -> float\nC++: const double &GetW()\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {(char*)"SetX", PyvtkQuaternion_IdE_SetX, METH_VARARGS,
   (char*)"V.SetX(float)\nC++: void SetX(const double &x)\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {(char*)"GetX", PyvtkQuaternion_IdE_GetX, METH_VARARGS,
   (char*)"V.GetX() -> float\nC++: const double &GetX()\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {(char*)"SetY", PyvtkQuaternion_IdE_SetY, METH_VARARGS,
   (char*)"V.SetY(float)\nC++: void SetY(const double &y)\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {(char*)"GetY", PyvtkQuaternion_IdE_GetY, METH_VARARGS,
   (char*)"V.GetY() -> float\nC++: const double &GetY()\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {(char*)"SetZ", PyvtkQuaternion_IdE_SetZ, METH_VARARGS,
   (char*)"V.SetZ(float)\nC++: void SetZ(const double &z)\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {(char*)"GetZ", PyvtkQuaternion_IdE_GetZ, METH_VARARGS,
   (char*)"V.GetZ() -> float\nC++: const double &GetZ()\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {(char*)"GetRotationAngleAndAxis", PyvtkQuaternion_IdE_GetRotationAngleAndAxis, METH_VARARGS,
   (char*)"V.GetRotationAngleAndAxis([float, float, float]) -> float\nC++: double GetRotationAngleAndAxis(double axis[3])\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {(char*)"SetRotationAngleAndAxis", PyvtkQuaternion_IdE_SetRotationAngleAndAxis, METH_VARARGS,
   (char*)"V.SetRotationAngleAndAxis(float, [float, float, float])\nC++: void SetRotationAngleAndAxis(double angle, double axis[3])\nV.SetRotationAngleAndAxis(float, float, float, float)\nC++: void SetRotationAngleAndAxis(const double &angle,\n    const double &x, const double &y, const double &z)\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {(char*)"ToMatrix3x3", PyvtkQuaternion_IdE_ToMatrix3x3, METH_VARARGS,
   (char*)"V.ToMatrix3x3([[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void ToMatrix3x3(double A[3][3])\n\nConvert a quaternion to a 3x3 rotation matrix. The quaternion\ndoes not have to be normalized beforehand.@sa FromMatrix3x3()\n"},
  {(char*)"FromMatrix3x3", PyvtkQuaternion_IdE_FromMatrix3x3, METH_VARARGS,
   (char*)"V.FromMatrix3x3(((float, float, float), (float, float, float), (\n    float, float, float)))\nC++: void FromMatrix3x3(const double A[3][3])\n\nConvert a 3x3 matrix into a quaternion.  This will provide the\nbest possible answer even if the matrix is not a pure rotation\nmatrix. The method used is that of B.K.P. Horn.@sa ToMatrix3x3()\n"},
  {(char*)"Slerp", PyvtkQuaternion_IdE_Slerp, METH_VARARGS,
   (char*)"V.Slerp(float, vtkQuaternion<double>) -> vtkQuaternion<double>\nC++: vtkQuaternion<double> Slerp(double t,\n    const vtkQuaternion<double> &q)\n\nInterpolate quaternions using spherical linear interpolation\nbetween this quaternion and q1 to produce the output. The\nparametric coordinate t belongs to [0,1] and lies between\n(this,q1).@sa vtkQuaternionInterpolator\n"},
  {(char*)"InnerPoint", PyvtkQuaternion_IdE_InnerPoint, METH_VARARGS,
   (char*)"V.InnerPoint(vtkQuaternion<double>, vtkQuaternion<double>)\n    -> vtkQuaternion<double>\nC++: vtkQuaternion<double> InnerPoint(\n    const vtkQuaternion<double> &q1,\n    const vtkQuaternion<double> &q2)\n\nInterpolates between quaternions, using spherical quadrangle\ninterpolation.@sa vtkQuaternionInterpolator\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkQuaternion_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaternion_IdE_Type;
#define DECLARED_PyvtkQuaternion_IdE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IdLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IdLi4EE_Type;
#define DECLARED_PyvtkTuple_IdLi4EE_Type
#endif


static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<double> *op = new vtkQuaternion<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  vtkQuaternion<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IdE"))
    {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternion_IdE_vtkQuaternion_Methods[] = {
  {NULL, PyvtkQuaternion_IdE_vtkQuaternion_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkQuaternion_IdE_vtkQuaternion_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkQuaternion_IdE_vtkQuaternion_s5, METH_VARARGS,
   (char*)"O &vtkQuaternion_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternion_IdE_vtkQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuaternion_IdE_vtkQuaternion_s1(self, args);
    case 4:
      return PyvtkQuaternion_IdE_vtkQuaternion_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternion");
  return NULL;
}


static PyMethodDef PyvtkQuaternion_IdE_NewMethod = \
{ (char*)"vtkQuaternion_IdE", PyvtkQuaternion_IdE_vtkQuaternion, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkQuaternion_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkQuaternion_IdE_vtkQuaternion(NULL, args);
}
#endif

static void PyvtkQuaternion_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkQuaternion<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkQuaternion_IdE_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkQuaternion_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkQuaternion_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternion_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkQuaternion_IdE_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkQuaternion_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IdLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkQuaternion_IdE_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkQuaternion_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkQuaternion<double>(*static_cast<const vtkQuaternion<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkQuaternion_IdE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkQuaternion_IdE_Type,
    PyvtkQuaternion_IdE_Methods,
    PyvtkQuaternion_IdE_vtkQuaternion_Methods,
    &PyvtkQuaternion_IdE_NewMethod,
    PyvtkQuaternion_IdE_Doc(), &PyvtkQuaternion_IdE_CCopy);

  return cls;
}

const char **PyvtkQuaternion_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkQuaterniond - Double quaternion type.\n\n",
    "Superclass: vtkTuple[float64,4]\n\n",
    "This class is uses vtkQuaternion with double type data. For futher\ndescription, seethe templated class vtkQuaternion.@sa vtkQuaternionf\nvtkQuaternion\n\n",
    "V.vtkQuaternion()\nC++: vtkQuaternion()\nV.vtkQuaternion(float)\nC++: explicit vtkQuaternion(const double &scalar)\nV.vtkQuaternion((float, float, float, float))\nC++: explicit vtkQuaternion(const double *init)\nV.vtkQuaternion(float, float, float, float)\nC++: vtkQuaternion(const double &w, const double &x, const double &y,\n    const double &z)\nV.vtkQuaternion(vtkQuaternion<double>)\nC++: vtkQuaternion(const &vtkQuaternion<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkQuaternion_IfE_Doc();


static PyObject *
PyvtkQuaternion_IfE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SquaredNorm");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float tempr = op->Norm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToIdentity");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToIdentity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Identity(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = vtkQuaternion<float>::Identity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float tempr = op->Normalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalized");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Conjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugate");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Conjugate();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugated");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Invert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Invert();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Inverse");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->Inverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToUnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToUnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToUnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToUnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_NormalizeWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizeWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->NormalizeWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0[4];
  float save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Set(temp0);

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
PyvtkQuaternion_IfE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkQuaternion_IfE_Set_s1(self, args);
    case 1:
      return PyvtkQuaternion_IfE_Set_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkQuaternion_IfE_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Get");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0[4];
  float save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->Get(temp0);

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
PyvtkQuaternion_IfE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetW");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetW");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    float tempr = op->GetRotationAngleAndAxis(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  float temp1[3];
  float save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->SetRotationAngleAndAxis(temp0, temp1);

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
PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetRotationAngleAndAxis(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_SetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s1(self, args);
    case 4:
      return PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationAngleAndAxis");
  return NULL;
}



static PyObject *
PyvtkQuaternion_IfE_ToMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToMatrix3x3");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0[3][3];
  float save0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    op->ToMatrix3x3(temp0);

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_FromMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "FromMatrix3x3");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    op->FromMatrix3x3(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Slerp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  vtkQuaternion<float> *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IfE"))
    {
    vtkQuaternion<float> tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "InnerPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  vtkQuaternion<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkQuaternion<float> *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IfE") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IfE"))
    {
    vtkQuaternion<float> tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternion_IfE_Methods[] = {
  {(char*)"SquaredNorm", PyvtkQuaternion_IfE_SquaredNorm, METH_VARARGS,
   (char*)"V.SquaredNorm() -> float\nC++: float SquaredNorm()\n\nGet the squared norm of the quaternion.\n"},
  {(char*)"Norm", PyvtkQuaternion_IfE_Norm, METH_VARARGS,
   (char*)"V.Norm() -> float\nC++: float Norm()\n\nGet the norm of the quaternion, i.e. its length.\n"},
  {(char*)"ToIdentity", PyvtkQuaternion_IfE_ToIdentity, METH_VARARGS,
   (char*)"V.ToIdentity()\nC++: void ToIdentity()\n\nSet the quaternion to identity in place.\n"},
  {(char*)"Identity", PyvtkQuaternion_IfE_Identity, METH_VARARGS | METH_STATIC,
   (char*)"V.Identity() -> vtkQuaternion<float>\nC++: static vtkQuaternion<float> Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {(char*)"Normalize", PyvtkQuaternion_IfE_Normalize, METH_VARARGS,
   (char*)"V.Normalize() -> float\nC++: float Normalize()\n\nNormalize the quaternion in place. Return the norm of the\nquaternion.\n"},
  {(char*)"Normalized", PyvtkQuaternion_IfE_Normalized, METH_VARARGS,
   (char*)"V.Normalized() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {(char*)"Conjugate", PyvtkQuaternion_IfE_Conjugate, METH_VARARGS,
   (char*)"V.Conjugate()\nC++: void Conjugate()\n\nConjugate the quaternion in place.\n"},
  {(char*)"Conjugated", PyvtkQuaternion_IfE_Conjugated, METH_VARARGS,
   (char*)"V.Conjugated() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {(char*)"Invert", PyvtkQuaternion_IfE_Invert, METH_VARARGS,
   (char*)"V.Invert()\nC++: void Invert()\n\nInvert the quaternion in place. This is equivalent to conjugate\nthe quaternion and then divide it by its squared norm.\n"},
  {(char*)"Inverse", PyvtkQuaternion_IfE_Inverse, METH_VARARGS,
   (char*)"V.Inverse() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {(char*)"ToUnitLog", PyvtkQuaternion_IfE_ToUnitLog, METH_VARARGS,
   (char*)"V.ToUnitLog()\nC++: void ToUnitLog()\n\nConvert this quaternion to a unit log quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*sin(theta)].\n"},
  {(char*)"UnitLog", PyvtkQuaternion_IfE_UnitLog, METH_VARARGS,
   (char*)"V.UnitLog() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*sin(theta)].\n"},
  {(char*)"ToUnitExp", PyvtkQuaternion_IfE_ToUnitExp, METH_VARARGS,
   (char*)"V.ToUnitExp()\nC++: void ToUnitExp()\n\nConvert this quaternion to a unit exponential quaternion. The\nunit exponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {(char*)"UnitExp", PyvtkQuaternion_IfE_UnitExp, METH_VARARGS,
   (char*)"V.UnitExp() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {(char*)"NormalizeWithAngleInDegrees", PyvtkQuaternion_IfE_NormalizeWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizeWithAngleInDegrees()\nC++: void NormalizeWithAngleInDegrees()\n\nNormalize a quaternion in place and transform it to so its angle\nis in degrees and its axis normalized.\n"},
  {(char*)"NormalizedWithAngleInDegrees", PyvtkQuaternion_IfE_NormalizedWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizedWithAngleInDegrees() -> vtkQuaternion<float>\nC++: vtkQuaternion<float> NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {(char*)"Set", PyvtkQuaternion_IfE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float, float)\nC++: void Set(const float &w, const float &x, const float &y,\n    const float &z)\nV.Set([float, float, float, float])\nC++: void Set(float quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {(char*)"Get", PyvtkQuaternion_IfE_Get, METH_VARARGS,
   (char*)"V.Get([float, float, float, float])\nC++: void Get(float quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {(char*)"SetW", PyvtkQuaternion_IfE_SetW, METH_VARARGS,
   (char*)"V.SetW(float)\nC++: void SetW(const float &w)\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {(char*)"GetW", PyvtkQuaternion_IfE_GetW, METH_VARARGS,
   (char*)"V.GetW() -> float\nC++: const float &GetW()\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {(char*)"SetX", PyvtkQuaternion_IfE_SetX, METH_VARARGS,
   (char*)"V.SetX(float)\nC++: void SetX(const float &x)\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {(char*)"GetX", PyvtkQuaternion_IfE_GetX, METH_VARARGS,
   (char*)"V.GetX() -> float\nC++: const float &GetX()\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {(char*)"SetY", PyvtkQuaternion_IfE_SetY, METH_VARARGS,
   (char*)"V.SetY(float)\nC++: void SetY(const float &y)\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {(char*)"GetY", PyvtkQuaternion_IfE_GetY, METH_VARARGS,
   (char*)"V.GetY() -> float\nC++: const float &GetY()\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {(char*)"SetZ", PyvtkQuaternion_IfE_SetZ, METH_VARARGS,
   (char*)"V.SetZ(float)\nC++: void SetZ(const float &z)\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {(char*)"GetZ", PyvtkQuaternion_IfE_GetZ, METH_VARARGS,
   (char*)"V.GetZ() -> float\nC++: const float &GetZ()\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {(char*)"GetRotationAngleAndAxis", PyvtkQuaternion_IfE_GetRotationAngleAndAxis, METH_VARARGS,
   (char*)"V.GetRotationAngleAndAxis([float, float, float]) -> float\nC++: float GetRotationAngleAndAxis(float axis[3])\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {(char*)"SetRotationAngleAndAxis", PyvtkQuaternion_IfE_SetRotationAngleAndAxis, METH_VARARGS,
   (char*)"V.SetRotationAngleAndAxis(float, [float, float, float])\nC++: void SetRotationAngleAndAxis(float angle, float axis[3])\nV.SetRotationAngleAndAxis(float, float, float, float)\nC++: void SetRotationAngleAndAxis(const float &angle,\n    const float &x, const float &y, const float &z)\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {(char*)"ToMatrix3x3", PyvtkQuaternion_IfE_ToMatrix3x3, METH_VARARGS,
   (char*)"V.ToMatrix3x3([[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void ToMatrix3x3(float A[3][3])\n\nConvert a quaternion to a 3x3 rotation matrix. The quaternion\ndoes not have to be normalized beforehand.@sa FromMatrix3x3()\n"},
  {(char*)"FromMatrix3x3", PyvtkQuaternion_IfE_FromMatrix3x3, METH_VARARGS,
   (char*)"V.FromMatrix3x3(((float, float, float), (float, float, float), (\n    float, float, float)))\nC++: void FromMatrix3x3(const float A[3][3])\n\nConvert a 3x3 matrix into a quaternion.  This will provide the\nbest possible answer even if the matrix is not a pure rotation\nmatrix. The method used is that of B.K.P. Horn.@sa ToMatrix3x3()\n"},
  {(char*)"Slerp", PyvtkQuaternion_IfE_Slerp, METH_VARARGS,
   (char*)"V.Slerp(float, vtkQuaternion<float>) -> vtkQuaternion<float>\nC++: vtkQuaternion<float> Slerp(float t,\n    const vtkQuaternion<float> &q)\n\nInterpolate quaternions using spherical linear interpolation\nbetween this quaternion and q1 to produce the output. The\nparametric coordinate t belongs to [0,1] and lies between\n(this,q1).@sa vtkQuaternionInterpolator\n"},
  {(char*)"InnerPoint", PyvtkQuaternion_IfE_InnerPoint, METH_VARARGS,
   (char*)"V.InnerPoint(vtkQuaternion<float>, vtkQuaternion<float>)\n    -> vtkQuaternion<float>\nC++: vtkQuaternion<float> InnerPoint(\n    const vtkQuaternion<float> &q1,\n    const vtkQuaternion<float> &q2)\n\nInterpolates between quaternions, using spherical quadrangle\ninterpolation.@sa vtkQuaternionInterpolator\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkQuaternion_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaternion_IfE_Type;
#define DECLARED_PyvtkQuaternion_IfE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IfLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IfLi4EE_Type;
#define DECLARED_PyvtkTuple_IfLi4EE_Type
#endif


static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternion<float> *op = new vtkQuaternion<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  vtkQuaternion<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IfE"))
    {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternion_IfE_vtkQuaternion_Methods[] = {
  {NULL, PyvtkQuaternion_IfE_vtkQuaternion_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkQuaternion_IfE_vtkQuaternion_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkQuaternion_IfE_vtkQuaternion_s5, METH_VARARGS,
   (char*)"O &vtkQuaternion_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternion_IfE_vtkQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuaternion_IfE_vtkQuaternion_s1(self, args);
    case 4:
      return PyvtkQuaternion_IfE_vtkQuaternion_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternion");
  return NULL;
}


static PyMethodDef PyvtkQuaternion_IfE_NewMethod = \
{ (char*)"vtkQuaternion_IfE", PyvtkQuaternion_IfE_vtkQuaternion, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkQuaternion_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkQuaternion_IfE_vtkQuaternion(NULL, args);
}
#endif

static void PyvtkQuaternion_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkQuaternion<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkQuaternion_IfE_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkQuaternion_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkQuaternion_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternion_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkQuaternion_IfE_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkQuaternion_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IfLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkQuaternion_IfE_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkQuaternion_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkQuaternion<float>(*static_cast<const vtkQuaternion<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkQuaternion_IfE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkQuaternion_IfE_Type,
    PyvtkQuaternion_IfE_Methods,
    PyvtkQuaternion_IfE_vtkQuaternion_Methods,
    &PyvtkQuaternion_IfE_NewMethod,
    PyvtkQuaternion_IfE_Doc(), &PyvtkQuaternion_IfE_CCopy);

  return cls;
}

const char **PyvtkQuaternion_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkQuaterniond - Double quaternion type.\n\n",
    "Superclass: vtkTuple[float32,4]\n\n",
    "This class is uses vtkQuaternion with double type data. For futher\ndescription, seethe templated class vtkQuaternion.@sa vtkQuaternionf\nvtkQuaternion\n\n",
    "V.vtkQuaternion()\nC++: vtkQuaternion()\nV.vtkQuaternion(float)\nC++: explicit vtkQuaternion(const float &scalar)\nV.vtkQuaternion((float, float, float, float))\nC++: explicit vtkQuaternion(const float *init)\nV.vtkQuaternion(float, float, float, float)\nC++: vtkQuaternion(const float &w, const float &x, const float &y,\n    const float &z)\nV.vtkQuaternion(vtkQuaternion<float>)\nC++: vtkQuaternion(const &vtkQuaternion<float>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkQuaternion_Doc[] = {
    "vtkQuaterniond - Double quaternion type.\n\n",
    "Superclass: vtkTuple[T,4]\n\n",
    "This class is uses vtkQuaternion with double type data. For futher\ndescription, seethe templated class vtkQuaternion.@sa vtkQuaternionf\nvtkQuaternion\n\n",
    "\nProvided Types:\n\n",
    "  vtkQuaternion[float64] => vtkQuaternion<double>\n",
    "  vtkQuaternion[float32] => vtkQuaternion<float>\n",
    NULL
};

PyObject *PyvtkQuaternion_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkQuaternion", modulename,
                                     PyvtkQuaternion_Doc);

  o = PyvtkQuaternion_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkQuaternion_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkQuaternionf_Doc();


static PyObject *
PyvtkQuaternionf_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->Identity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalized");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->Normalized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugated");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Inverse");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->Inverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionf_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Slerp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  float temp0;
  vtkQuaternionf *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternionf"))
    {
    vtkQuaternionf tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternionf_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "InnerPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  vtkQuaternionf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkQuaternionf *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternionf") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternionf"))
    {
    vtkQuaternionf tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternionf_Methods[] = {
  {(char*)"Identity", PyvtkQuaternionf_Identity, METH_VARARGS,
   (char*)"V.Identity() -> vtkQuaternionf\nC++: vtkQuaternionf Identity()\n\n"},
  {(char*)"Normalized", PyvtkQuaternionf_Normalized, METH_VARARGS,
   (char*)"V.Normalized() -> vtkQuaternionf\nC++: vtkQuaternionf Normalized()\n\n"},
  {(char*)"Conjugated", PyvtkQuaternionf_Conjugated, METH_VARARGS,
   (char*)"V.Conjugated() -> vtkQuaternionf\nC++: vtkQuaternionf Conjugated()\n\n"},
  {(char*)"Inverse", PyvtkQuaternionf_Inverse, METH_VARARGS,
   (char*)"V.Inverse() -> vtkQuaternionf\nC++: vtkQuaternionf Inverse()\n\n"},
  {(char*)"UnitLog", PyvtkQuaternionf_UnitLog, METH_VARARGS,
   (char*)"V.UnitLog() -> vtkQuaternionf\nC++: vtkQuaternionf UnitLog()\n\n"},
  {(char*)"UnitExp", PyvtkQuaternionf_UnitExp, METH_VARARGS,
   (char*)"V.UnitExp() -> vtkQuaternionf\nC++: vtkQuaternionf UnitExp()\n\n"},
  {(char*)"NormalizedWithAngleInDegrees", PyvtkQuaternionf_NormalizedWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizedWithAngleInDegrees() -> vtkQuaternionf\nC++: vtkQuaternionf NormalizedWithAngleInDegrees()\n\n"},
  {(char*)"Slerp", PyvtkQuaternionf_Slerp, METH_VARARGS,
   (char*)"V.Slerp(float, vtkQuaternionf) -> vtkQuaternionf\nC++: vtkQuaternionf Slerp(float t, const vtkQuaternionf &q)\n\n"},
  {(char*)"InnerPoint", PyvtkQuaternionf_InnerPoint, METH_VARARGS,
   (char*)"V.InnerPoint(vtkQuaternionf, vtkQuaternionf) -> vtkQuaternionf\nC++: vtkQuaternionf InnerPoint(const vtkQuaternionf &q1,\n    const vtkQuaternionf &q2)\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkQuaternionf_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaternionf_Type;
#define DECLARED_PyvtkQuaternionf_Type
#endif

#ifndef DECLARED_PyvtkQuaternion_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaternion_IfE_Type;
#define DECLARED_PyvtkQuaternion_IfE_Type
#endif


static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaternionf *op = new vtkQuaternionf();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkQuaternionf *op = new vtkQuaternionf(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkQuaternionf *op = new vtkQuaternionf(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkQuaternionf *op = new vtkQuaternionf(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
    }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  vtkQuaternionf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternionf"))
    {
    vtkQuaternionf *op = new vtkQuaternionf(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternionf_vtkQuaternionf_Methods[] = {
  {NULL, PyvtkQuaternionf_vtkQuaternionf_s3, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkQuaternionf_vtkQuaternionf_s4, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkQuaternionf_vtkQuaternionf_s5, METH_VARARGS,
   (char*)"O &vtkQuaternionf"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaternionf_vtkQuaternionf(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionf_vtkQuaternionf_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuaternionf_vtkQuaternionf_s1(self, args);
    case 4:
      return PyvtkQuaternionf_vtkQuaternionf_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternionf");
  return NULL;
}


static PyMethodDef PyvtkQuaternionf_NewMethod = \
{ (char*)"vtkQuaternionf", PyvtkQuaternionf_vtkQuaternionf, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkQuaternionf_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkQuaternionf_vtkQuaternionf(NULL, args);
}
#endif

static void PyvtkQuaternionf_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkQuaternionf *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkQuaternionf_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkQuaternionf_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkQuaternionf", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternionf_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkQuaternionf_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkQuaternionf_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkQuaternion_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkQuaternionf_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkQuaternionf_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkQuaternionf(*static_cast<const vtkQuaternionf*>(obj));
    }
  return 0;
}

static PyObject *PyvtkQuaternionf_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkQuaternionf_Type,
    PyvtkQuaternionf_Methods,
    PyvtkQuaternionf_vtkQuaternionf_Methods,
    &PyvtkQuaternionf_NewMethod,
    PyvtkQuaternionf_Doc(), &PyvtkQuaternionf_CCopy);

  return cls;
}

const char **PyvtkQuaternionf_Doc()
{
  static const char *docstring[] = {
    "vtkQuaterniond - Double quaternion type.\n\n",
    "Superclass: vtkQuaternion[float32]\n\n",
    "This class is uses vtkQuaternion with double type data. For futher\ndescription, seethe templated class vtkQuaternion.@sa vtkQuaternionf\nvtkQuaternion\n\n",
    "V.vtkQuaternionf()\nC++: vtkQuaternionf()\nV.vtkQuaternionf(float, float, float, float)\nC++: explicit vtkQuaternionf(float w, float x, float y, float z)\nV.vtkQuaternionf(float)\nC++: explicit vtkQuaternionf(float scalar)\nV.vtkQuaternionf((float, float, float, float))\nC++: explicit vtkQuaternionf(const float *init)\nV.vtkQuaternionf(vtkQuaternionf)\nC++: vtkQuaternionf(const &vtkQuaternionf)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkQuaterniond_Doc();


static PyObject *
PyvtkQuaterniond_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->Identity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalized");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->Normalized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Conjugated");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Inverse");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->Inverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitLog");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "UnitExp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  return result;
}


static PyObject *
PyvtkQuaterniond_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Slerp");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
    {
    vtkQuaterniond tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaterniond_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "InnerPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  vtkQuaterniond *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkQuaterniond *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaterniond") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
    {
    vtkQuaterniond tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaterniond_Methods[] = {
  {(char*)"Identity", PyvtkQuaterniond_Identity, METH_VARARGS,
   (char*)"V.Identity() -> vtkQuaterniond\nC++: vtkQuaterniond Identity()\n\n"},
  {(char*)"Normalized", PyvtkQuaterniond_Normalized, METH_VARARGS,
   (char*)"V.Normalized() -> vtkQuaterniond\nC++: vtkQuaterniond Normalized()\n\n"},
  {(char*)"Conjugated", PyvtkQuaterniond_Conjugated, METH_VARARGS,
   (char*)"V.Conjugated() -> vtkQuaterniond\nC++: vtkQuaterniond Conjugated()\n\n"},
  {(char*)"Inverse", PyvtkQuaterniond_Inverse, METH_VARARGS,
   (char*)"V.Inverse() -> vtkQuaterniond\nC++: vtkQuaterniond Inverse()\n\n"},
  {(char*)"UnitLog", PyvtkQuaterniond_UnitLog, METH_VARARGS,
   (char*)"V.UnitLog() -> vtkQuaterniond\nC++: vtkQuaterniond UnitLog()\n\n"},
  {(char*)"UnitExp", PyvtkQuaterniond_UnitExp, METH_VARARGS,
   (char*)"V.UnitExp() -> vtkQuaterniond\nC++: vtkQuaterniond UnitExp()\n\n"},
  {(char*)"NormalizedWithAngleInDegrees", PyvtkQuaterniond_NormalizedWithAngleInDegrees, METH_VARARGS,
   (char*)"V.NormalizedWithAngleInDegrees() -> vtkQuaterniond\nC++: vtkQuaterniond NormalizedWithAngleInDegrees()\n\n"},
  {(char*)"Slerp", PyvtkQuaterniond_Slerp, METH_VARARGS,
   (char*)"V.Slerp(float, vtkQuaterniond) -> vtkQuaterniond\nC++: vtkQuaterniond Slerp(double t, const vtkQuaterniond &q)\n\n"},
  {(char*)"InnerPoint", PyvtkQuaterniond_InnerPoint, METH_VARARGS,
   (char*)"V.InnerPoint(vtkQuaterniond, vtkQuaterniond) -> vtkQuaterniond\nC++: vtkQuaterniond InnerPoint(const vtkQuaterniond &q1,\n    const vtkQuaterniond &q2)\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkQuaterniond_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaterniond_Type;
#define DECLARED_PyvtkQuaterniond_Type
#endif

#ifndef DECLARED_PyvtkQuaternion_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuaternion_IdE_Type;
#define DECLARED_PyvtkQuaternion_IdE_Type
#endif


static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkQuaterniond *op = new vtkQuaterniond();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
    }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkQuaterniond *op = new vtkQuaterniond(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
    }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkQuaterniond *op = new vtkQuaterniond(temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
    }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkQuaterniond *op = new vtkQuaterniond(temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
    }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  vtkQuaterniond *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaterniond"))
    {
    vtkQuaterniond *op = new vtkQuaterniond(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaterniond_vtkQuaterniond_Methods[] = {
  {NULL, PyvtkQuaterniond_vtkQuaterniond_s3, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkQuaterniond_vtkQuaterniond_s4, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkQuaterniond_vtkQuaterniond_s5, METH_VARARGS,
   (char*)"O &vtkQuaterniond"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaterniond_vtkQuaterniond(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaterniond_vtkQuaterniond_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuaterniond_vtkQuaterniond_s1(self, args);
    case 4:
      return PyvtkQuaterniond_vtkQuaterniond_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaterniond");
  return NULL;
}


static PyMethodDef PyvtkQuaterniond_NewMethod = \
{ (char*)"vtkQuaterniond", PyvtkQuaterniond_vtkQuaterniond, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkQuaterniond_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkQuaterniond_vtkQuaterniond(NULL, args);
}
#endif

static void PyvtkQuaterniond_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkQuaterniond *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkQuaterniond_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkQuaterniond_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkQuaterniond", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaterniond_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkQuaterniond_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkQuaterniond_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkQuaternion_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkQuaterniond_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkQuaterniond_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkQuaterniond(*static_cast<const vtkQuaterniond*>(obj));
    }
  return 0;
}

static PyObject *PyvtkQuaterniond_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkQuaterniond_Type,
    PyvtkQuaterniond_Methods,
    PyvtkQuaterniond_vtkQuaterniond_Methods,
    &PyvtkQuaterniond_NewMethod,
    PyvtkQuaterniond_Doc(), &PyvtkQuaterniond_CCopy);

  return cls;
}

const char **PyvtkQuaterniond_Doc()
{
  static const char *docstring[] = {
    "vtkQuaterniond - Double quaternion type.\n\n",
    "Superclass: vtkQuaternion[float64]\n\n",
    "This class is uses vtkQuaternion with double type data. For futher\ndescription, seethe templated class vtkQuaternion.@sa vtkQuaternionf\nvtkQuaternion\n\n",
    "V.vtkQuaterniond()\nC++: vtkQuaterniond()\nV.vtkQuaterniond(float, float, float, float)\nC++: explicit vtkQuaterniond(double w, double x, double y, double z)\nV.vtkQuaterniond(float)\nC++: explicit vtkQuaterniond(double scalar)\nV.vtkQuaterniond((float, float, float, float))\nC++: explicit vtkQuaterniond(const double *init)\nV.vtkQuaterniond(vtkQuaterniond)\nC++: vtkQuaterniond(const &vtkQuaterniond)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuaternion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkQuaternion_TemplateNew(modulename);

  if (o)
    {
    PyObject *l = PyObject_CallMethod(o, (char *)"values", 0);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
      {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = NULL;
      if (PyVTKClass_Check(ot))
        {
        nt = PyString_AsString(((PyVTKClass *)ot)->vtk_name);
        }
      else if (PyType_Check(ot))
        {
        nt = ((PyTypeObject *)ot)->tp_name;
        }
      else if (PyCFunction_Check(ot))
        {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
        }
      if (nt)
        {
        PyDict_SetItemString(dict, (char *)nt, ot);
        }
      }
    Py_DECREF(l);
    }

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuaternion", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkQuaternionf_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuaternionf", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkQuaterniond_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuaterniond", o) != 0)
    {
    Py_DECREF(o);
    }

}

