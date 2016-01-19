// python wrapper for vtkMath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMath_Doc();


static PyObject *
PyvtkMath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMath::NewInstance());

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
PyvtkMath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMath *tempr = vtkMath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Pi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Pi");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::Pi();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkMath_DoublePi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DoublePi");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::DoublePi();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkMath_DoubleTwoPi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DoubleTwoPi");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::DoubleTwoPi();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkMath_RadiansFromDegrees(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RadiansFromDegrees");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = vtkMath::RadiansFromDegrees(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_DegreesFromRadians(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DegreesFromRadians");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = vtkMath::DegreesFromRadians(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Round(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Round");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::Round(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Floor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Floor");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::Floor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Ceil(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Ceil");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::Ceil(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_CeilLog2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CeilLog2");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::CeilLog2(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_IsPowerOfTwo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPowerOfTwo");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = vtkMath::IsPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_NearestPowerOfTwo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NearestPowerOfTwo");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::NearestPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Factorial(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Factorial");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = vtkMath::Factorial(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Binomial(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Binomial");

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    long long tempr = vtkMath::Binomial(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_BeginCombination(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BeginCombination");

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int *tempr = vtkMath::BeginCombination(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_NextCombination(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NextCombination");

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkMath::NextCombination(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkMath_FreeCombination(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FreeCombination");

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new int[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::FreeCombination(temp0);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkMath_RandomSeed(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RandomSeed");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMath::RandomSeed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_GetSeed(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSeed");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkMath::GetSeed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Random_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Random");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::Random();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Random_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Random");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkMath::Random(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Random(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMath_Random_s1(self, args);
    case 2:
      return PyvtkMath_Random_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Random");
  return NULL;
}



static PyObject *
PyvtkMath_Gaussian_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Gaussian");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::Gaussian();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Gaussian_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Gaussian");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkMath::Gaussian(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Gaussian(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMath_Gaussian_s1(self, args);
    case 2:
      return PyvtkMath_Gaussian_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gaussian");
  return NULL;
}



static PyObject *
PyvtkMath_Add(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Add");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::Add(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Subtract(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Subtract");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::Subtract(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_MultiplyScalar(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyScalar");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::MultiplyScalar(temp0, temp1);

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
PyvtkMath_MultiplyScalar2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyScalar2D");

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::MultiplyScalar2D(temp0, temp1);

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
PyvtkMath_Dot(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Dot");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::Dot(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Outer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Outer");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Outer(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Cross(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Cross");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::Cross(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Norm_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[size0];
    }

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkMath::Norm(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMath_Norm_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = vtkMath::Norm(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Norm(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_Norm_s1(self, args);
    case 1:
      return PyvtkMath_Norm_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Norm");
  return NULL;
}



static PyObject *
PyvtkMath_Normalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = vtkMath::Normalize(temp0);

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
PyvtkMath_Perpendiculars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Perpendiculars");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkMath::Perpendiculars(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_ProjectVector(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProjectVector");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = vtkMath::ProjectVector(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_ProjectVector2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProjectVector2D");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  const int size1 = 2;
  double temp2[2];
  double save2[2];
  const int size2 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = vtkMath::ProjectVector2D(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Distance2BetweenPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Distance2BetweenPoints");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::Distance2BetweenPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_AngleBetweenVectors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AngleBetweenVectors");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::AngleBetweenVectors(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_GaussianAmplitude_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianAmplitude");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkMath::GaussianAmplitude(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_GaussianAmplitude_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianAmplitude");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = vtkMath::GaussianAmplitude(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_GaussianAmplitude(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_GaussianAmplitude_s1(self, args);
    case 3:
      return PyvtkMath_GaussianAmplitude_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GaussianAmplitude");
  return NULL;
}



static PyObject *
PyvtkMath_GaussianWeight_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianWeight");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkMath::GaussianWeight(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_GaussianWeight_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianWeight");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = vtkMath::GaussianWeight(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_GaussianWeight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_GaussianWeight_s1(self, args);
    case 3:
      return PyvtkMath_GaussianWeight_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GaussianWeight");
  return NULL;
}



static PyObject *
PyvtkMath_Dot2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Dot2D");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::Dot2D(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Outer2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Outer2D");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  const int size1 = 2;
  double temp2[2][2];
  double save2[2][2];
  static int size2[2] = { 2, 2 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Outer2D(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Norm2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm2D");

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = vtkMath::Norm2D(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Normalize2D(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize2D");

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = vtkMath::Normalize2D(temp0);

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
PyvtkMath_Determinant2x2_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant2x2");

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
    double tempr = vtkMath::Determinant2x2(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Determinant2x2_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant2x2");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::Determinant2x2(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Determinant2x2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkMath_Determinant2x2_s1(self, args);
    case 2:
      return PyvtkMath_Determinant2x2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Determinant2x2");
  return NULL;
}



static PyObject *
PyvtkMath_LUFactor3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LUFactor3x3");

  double temp0[3][3];
  double save0[3][3];
  static int size0[2] = { 3, 3 };
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);
    ap.SaveArray(temp1, save1, size1);

    vtkMath::LUFactor3x3(temp0, temp1);

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
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
PyvtkMath_LUSolve3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LUSolve3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  int temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::LUSolve3x3(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_LinearSolve3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LinearSolve3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::LinearSolve3x3(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Multiply3x3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::Multiply3x3(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Multiply3x3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3][3];
  static int size1[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Multiply3x3(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMath_Multiply3x3_Methods[] = {
  {NULL, PyvtkMath_Multiply3x3_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d[3] *d *d"},
  {NULL, PyvtkMath_Multiply3x3_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d[3] *d[3] *d[3]"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMath_Multiply3x3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMath_Multiply3x3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Multiply3x3");
  return NULL;
}



static PyObject *
PyvtkMath_Transpose3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  static int size1[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
    {
    ap.SaveArray(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Transpose3x3(temp0, temp1);

    if (ap.ArrayHasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(1, *temp1, 2, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Invert3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  static int size1[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
    {
    ap.SaveArray(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Invert3x3(temp0, temp1);

    if (ap.ArrayHasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(1, *temp1, 2, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Identity3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity3x3");

  double temp0[3][3];
  double save0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    vtkMath::Identity3x3(temp0);

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
PyvtkMath_Determinant3x3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  double temp0[3][3];
  double save0[3][3];
  static int size0[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    double tempr = vtkMath::Determinant3x3(temp0);

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    double tempr = vtkMath::Determinant3x3(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = NULL;

  if (ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    double tempr = vtkMath::Determinant3x3(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkMath_Determinant3x3_s1(self, args);
    case 3:
      return PyvtkMath_Determinant3x3_s2(self, args);
    case 9:
      return PyvtkMath_Determinant3x3_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Determinant3x3");
  return NULL;
}



static PyObject *
PyvtkMath_QuaternionToMatrix3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuaternionToMatrix3x3");

  double temp0[4];
  const int size0 = 4;
  double temp1[3][3];
  double save1[3][3];
  static int size1[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetNArray(*temp1, 2, size1))
    {
    ap.SaveArray(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::QuaternionToMatrix3x3(temp0, temp1);

    if (ap.ArrayHasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(1, *temp1, 2, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Matrix3x3ToQuaternion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Matrix3x3ToQuaternion");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::Matrix3x3ToQuaternion(temp0, temp1);

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
PyvtkMath_MultiplyQuaternion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyQuaternion");

  double temp0[4];
  const int size0 = 4;
  double temp1[4];
  const int size1 = 4;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::MultiplyQuaternion(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Orthogonalize3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Orthogonalize3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  static int size1[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
    {
    ap.SaveArray(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Orthogonalize3x3(temp0, temp1);

    if (ap.ArrayHasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(1, *temp1, 2, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Diagonalize3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Diagonalize3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Diagonalize3x3(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_SingularValueDecomposition3x3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SingularValueDecomposition3x3");

  double temp0[3][3];
  static int size0[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  static int size1[2] = { 3, 3 };
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3][3];
  double save3[3][3];
  static int size3[2] = { 3, 3 };
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetNArray(*temp3, 2, size3))
    {
    ap.SaveArray(*temp1, *save1, size1[0]*size1[1]);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(*temp3, *save3, size3[0]*size3[1]);

    vtkMath::SingularValueDecomposition3x3(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(1, *temp1, 2, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(*temp3, *save3, size3[0]*size3[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(3, *temp3, 2, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMath_RGBToHSV_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::RGBToHSV(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToHSV_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = vtkMath::RGBToHSV(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToHSV_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::RGBToHSV(temp0, temp1);

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
PyvtkMath_RGBToHSV_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::RGBToHSV(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToHSV(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkMath_RGBToHSV_s1(self, args);
    case 3:
      return PyvtkMath_RGBToHSV_s2(self, args);
    case 2:
      return PyvtkMath_RGBToHSV_s3(self, args);
    case 6:
      return PyvtkMath_RGBToHSV_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RGBToHSV");
  return NULL;
}



static PyObject *
PyvtkMath_HSVToRGB_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::HSVToRGB(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_HSVToRGB_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = vtkMath::HSVToRGB(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_HSVToRGB_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::HSVToRGB(temp0, temp1);

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
PyvtkMath_HSVToRGB_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::HSVToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_HSVToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkMath_HSVToRGB_s1(self, args);
    case 3:
      return PyvtkMath_HSVToRGB_s2(self, args);
    case 2:
      return PyvtkMath_HSVToRGB_s3(self, args);
    case 6:
      return PyvtkMath_HSVToRGB_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HSVToRGB");
  return NULL;
}



static PyObject *
PyvtkMath_LabToXYZ_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToXYZ");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::LabToXYZ(temp0, temp1);

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
PyvtkMath_LabToXYZ_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToXYZ");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::LabToXYZ(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_LabToXYZ_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToXYZ");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::LabToXYZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_LabToXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_LabToXYZ_s1(self, args);
    case 6:
      return PyvtkMath_LabToXYZ_s2(self, args);
    case 1:
      return PyvtkMath_LabToXYZ_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LabToXYZ");
  return NULL;
}



static PyObject *
PyvtkMath_XYZToLab_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToLab");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::XYZToLab(temp0, temp1);

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
PyvtkMath_XYZToLab_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToLab");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::XYZToLab(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_XYZToLab_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToLab");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::XYZToLab(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_XYZToLab(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_XYZToLab_s1(self, args);
    case 6:
      return PyvtkMath_XYZToLab_s2(self, args);
    case 1:
      return PyvtkMath_XYZToLab_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "XYZToLab");
  return NULL;
}



static PyObject *
PyvtkMath_XYZToRGB_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToRGB");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::XYZToRGB(temp0, temp1);

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
PyvtkMath_XYZToRGB_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToRGB");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::XYZToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_XYZToRGB_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToRGB");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::XYZToRGB(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_XYZToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_XYZToRGB_s1(self, args);
    case 6:
      return PyvtkMath_XYZToRGB_s2(self, args);
    case 1:
      return PyvtkMath_XYZToRGB_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "XYZToRGB");
  return NULL;
}



static PyObject *
PyvtkMath_RGBToXYZ_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToXYZ");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::RGBToXYZ(temp0, temp1);

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
PyvtkMath_RGBToXYZ_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToXYZ");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::RGBToXYZ(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToXYZ_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToXYZ");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::RGBToXYZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_RGBToXYZ_s1(self, args);
    case 6:
      return PyvtkMath_RGBToXYZ_s2(self, args);
    case 1:
      return PyvtkMath_RGBToXYZ_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RGBToXYZ");
  return NULL;
}



static PyObject *
PyvtkMath_RGBToLab_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToLab");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::RGBToLab(temp0, temp1);

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
PyvtkMath_RGBToLab_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToLab");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::RGBToLab(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToLab_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToLab");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::RGBToLab(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_RGBToLab(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_RGBToLab_s1(self, args);
    case 6:
      return PyvtkMath_RGBToLab_s2(self, args);
    case 1:
      return PyvtkMath_RGBToLab_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RGBToLab");
  return NULL;
}



static PyObject *
PyvtkMath_LabToRGB_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToRGB");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMath::LabToRGB(temp0, temp1);

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
PyvtkMath_LabToRGB_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToRGB");

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new double[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkMath::LabToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMath_LabToRGB_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToRGB");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = vtkMath::LabToRGB(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMath_LabToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_LabToRGB_s1(self, args);
    case 6:
      return PyvtkMath_LabToRGB_s2(self, args);
    case 1:
      return PyvtkMath_LabToRGB_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LabToRGB");
  return NULL;
}



static PyObject *
PyvtkMath_UninitializeBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UninitializeBounds");

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::UninitializeBounds(temp0);

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
PyvtkMath_AreBoundsInitialized(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AreBoundsInitialized");

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = vtkMath::AreBoundsInitialized(temp0);

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
PyvtkMath_ClampValue_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValue");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::ClampValue(temp0, temp1);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMath_ClampValue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValue");

  double temp0;
  double temp1[2];
  const int size1 = 2;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMath::ClampValue(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkMath_ClampValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMath_ClampValue_s1(self, args);
    case 3:
      return PyvtkMath_ClampValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ClampValue");
  return NULL;
}



static PyObject *
PyvtkMath_ClampValues_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValues");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double temp2[2];
  const int size2 = 2;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMath::ClampValues(temp0, temp1, temp2);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMath_ClampValues_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValues");

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  int temp1;
  double temp2[2];
  const int size2 = 2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[size0];
    }
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkMath::ClampValues(temp0, temp1, temp2, temp3);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMath_ClampValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkMath_ClampValues_s1(self, args);
    case 4:
      return PyvtkMath_ClampValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ClampValues");
  return NULL;
}



static PyObject *
PyvtkMath_ClampAndNormalizeValue(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampAndNormalizeValue");

  double temp0;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    double tempr = vtkMath::ClampAndNormalizeValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_GetScalarTypeFittingRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarTypeFittingRange");

  double temp0;
  double temp1;
  double temp2 = 1.0;
  double temp3 = 0.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    int tempr = vtkMath::GetScalarTypeFittingRange(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_GetAdjustedScalarRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAdjustedScalarRange");

  vtkDataArray *temp0 = NULL;
  int temp1;
  double temp2[2];
  double save2[2];
  const int size2 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkMath::GetAdjustedScalarRange(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_ExtentIsWithinOtherExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtentIsWithinOtherExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkMath::ExtentIsWithinOtherExtent(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_BoundsIsWithinOtherBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BoundsIsWithinOtherBounds");

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkMath::BoundsIsWithinOtherBounds(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_PointIsWithinBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PointIsWithinBounds");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkMath::PointIsWithinBounds(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Solve3PointCircle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Solve3PointCircle");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    double tempr = vtkMath::Solve3PointCircle(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Inf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Inf");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::Inf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_NegInf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NegInf");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::NegInf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_Nan(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Nan");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkMath::Nan();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_IsInf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInf");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::IsInf(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_IsNan(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNan");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMath::IsNan(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMath_IsFinite(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsFinite");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = vtkMath::IsFinite(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMath_Methods[] = {
  {(char*)"GetClassName", PyvtkMath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMath\nC++: vtkMath *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMath\nC++: vtkMath *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Pi", PyvtkMath_Pi, METH_VARARGS | METH_STATIC,
   (char*)"V.Pi() -> float\nC++: static double Pi()\n\nA mathematical constant. This version is atan(1.0) * 4.0\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"DoublePi", PyvtkMath_DoublePi, METH_VARARGS | METH_STATIC,
   (char*)"V.DoublePi() -> float\nC++: static double DoublePi()\n\nDeprecated.  Use vtkMath::Pi() instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"DoubleTwoPi", PyvtkMath_DoubleTwoPi, METH_VARARGS | METH_STATIC,
   (char*)"V.DoubleTwoPi() -> float\nC++: static double DoubleTwoPi()\n\nDeprecated.  Use 2.0 * vtkMath::Pi() instead.\n"},
#endif
  {(char*)"RadiansFromDegrees", PyvtkMath_RadiansFromDegrees, METH_VARARGS | METH_STATIC,
   (char*)"V.RadiansFromDegrees(float) -> float\nC++: static double RadiansFromDegrees(double degrees)\n\nConvert degrees into radians\n"},
  {(char*)"DegreesFromRadians", PyvtkMath_DegreesFromRadians, METH_VARARGS | METH_STATIC,
   (char*)"V.DegreesFromRadians(float) -> float\nC++: static double DegreesFromRadians(double radians)\n\nConvert radians into degrees\n"},
  {(char*)"Round", PyvtkMath_Round, METH_VARARGS | METH_STATIC,
   (char*)"V.Round(float) -> int\nC++: static int Round(double f)\n\nRounds a float to the nearest integer.\n"},
  {(char*)"Floor", PyvtkMath_Floor, METH_VARARGS | METH_STATIC,
   (char*)"V.Floor(float) -> int\nC++: static int Floor(double x)\n\nRounds a double to the nearest integer not greater than itself.\nThis is faster than floor() but provides undefined output on\noverflow.\n"},
  {(char*)"Ceil", PyvtkMath_Ceil, METH_VARARGS | METH_STATIC,
   (char*)"V.Ceil(float) -> int\nC++: static int Ceil(double x)\n\nRounds a double to the nearest integer not less than itself. This\nis faster than ceil() but provides undefined output on overflow.\n"},
  {(char*)"CeilLog2", PyvtkMath_CeilLog2, METH_VARARGS | METH_STATIC,
   (char*)"V.CeilLog2(int) -> int\nC++: static int CeilLog2(vtkTypeUInt64 x)\n\nGives the exponent of the lowest power of two not less than x. Or\nin mathspeak, return the smallest \"i\" for which 2^i >= x. If x is\nzero, then the return value will be zero.\n"},
  {(char*)"IsPowerOfTwo", PyvtkMath_IsPowerOfTwo, METH_VARARGS | METH_STATIC,
   (char*)"V.IsPowerOfTwo(int) -> bool\nC++: static bool IsPowerOfTwo(vtkTypeUInt64 x)\n\nReturns true if integer is a power of two.\n"},
  {(char*)"NearestPowerOfTwo", PyvtkMath_NearestPowerOfTwo, METH_VARARGS | METH_STATIC,
   (char*)"V.NearestPowerOfTwo(int) -> int\nC++: static int NearestPowerOfTwo(int x)\n\nCompute the nearest power of two that is not less than x. The\nreturn value is 1 if x is less than or equal to zero, and is\nVTK_INT_MIN if result is too large to fit in an int.\n"},
  {(char*)"Factorial", PyvtkMath_Factorial, METH_VARARGS | METH_STATIC,
   (char*)"V.Factorial(int) -> int\nC++: static vtkTypeInt64 Factorial(int N)\n\nCompute N factorial, N! = N*(N-1) * (N-2)...*3*2*1. 0! is taken\nto be 1.\n"},
  {(char*)"Binomial", PyvtkMath_Binomial, METH_VARARGS | METH_STATIC,
   (char*)"V.Binomial(int, int) -> int\nC++: static vtkTypeInt64 Binomial(int m, int n)\n\nThe number of combinations of n objects from a pool of m objects\n(m>n). This is commonly known as \"m choose n\" and sometimes\ndenoted $_mC_n $ or $\\left(\\begin{array}{c}m \\\nn\\end{array}\\right) $.\n"},
  {(char*)"BeginCombination", PyvtkMath_BeginCombination, METH_VARARGS | METH_STATIC,
   (char*)"V.BeginCombination(int, int) -> (int, ...)\nC++: static int *BeginCombination(int m, int n)\n\nStart iterating over \"m choose n\" objects. This function returns\nan array of n integers, each from 0 to m-1. These integers\nrepresent the n items chosen from the set [0,m[.\n\nYou are responsible for calling vtkMath::FreeCombination() once\nthe iterator is no longer needed.\n\nWarning: this gets large very quickly, especially when n nears\nm/2! (Hint: think of Pascal's triangle.)\n"},
  {(char*)"NextCombination", PyvtkMath_NextCombination, METH_VARARGS | METH_STATIC,
   (char*)"V.NextCombination(int, int, [int, ...]) -> int\nC++: static int NextCombination(int m, int n, int *combination)\n\nGiven m, n, and a valid combination of n integers in the range\n[0,m[, this function alters the integers into the next\ncombination in a sequence of all combinations of n items from a\npool of m.\n\nIf the combination is the last item in the sequence on input,\nthen combination is unaltered and 0 is returned. Otherwise, 1 is\nreturned and combination is updated.\n"},
  {(char*)"FreeCombination", PyvtkMath_FreeCombination, METH_VARARGS | METH_STATIC,
   (char*)"V.FreeCombination([int, ...])\nC++: static void FreeCombination(int *combination)\n\nFree the \"iterator\" array created by vtkMath::BeginCombination.\n"},
  {(char*)"RandomSeed", PyvtkMath_RandomSeed, METH_VARARGS | METH_STATIC,
   (char*)"V.RandomSeed(int)\nC++: static void RandomSeed(int s)\n\nInitialize seed value. NOTE: Random() has the bad property that\nthe first random number returned after RandomSeed() is called is\nproportional to the seed value! To help solve this, call\nRandomSeed() a few times inside seed. This doesn't ruin the\nrepeatability of Random().\n\nDON'T USE Random(), RandomSeed(), GetSeed(), Gaussian() THIS IS\nSTATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR REGRESSION\nTESTS) THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY. Instead, for\na sequence of random numbers with a uniform distribution create a\nvtkMinimalStandardRandomSequence object. For a sequence of random\nnumbers with a gaussian/normal distribution create a\nvtkBoxMuellerRandomSequence object.\n"},
  {(char*)"GetSeed", PyvtkMath_GetSeed, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSeed() -> int\nC++: static int GetSeed()\n\nReturn the current seed used by the random number generator.\n\nDON'T USE Random(), RandomSeed(), GetSeed(), Gaussian() THIS IS\nSTATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR REGRESSION\nTESTS) THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY. Instead, for\na sequence of random numbers with a uniform distribution create a\nvtkMinimalStandardRandomSequence object. For a sequence of random\nnumbers with a gaussian/normal distribution create a\nvtkBoxMuellerRandomSequence object.\n"},
  {(char*)"Random", PyvtkMath_Random, METH_VARARGS | METH_STATIC,
   (char*)"V.Random() -> float\nC++: static double Random()\nV.Random(float, float) -> float\nC++: static double Random(double min, double max)\n\nGenerate pseudo-random numbers distributed according to the\nuniform distribution between 0.0 and 1.0. This is used to provide\nportability across different systems.\n\nDON'T USE Random(), RandomSeed(), GetSeed(), Gaussian() THIS IS\nSTATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR REGRESSION\nTESTS) THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY. Instead, for\na sequence of random numbers with a uniform distribution create a\nvtkMinimalStandardRandomSequence object. For a sequence of random\nnumbers with a gaussian/normal distribution create a\nvtkBoxMuellerRandomSequence object.\n"},
  {(char*)"Gaussian", PyvtkMath_Gaussian, METH_VARARGS | METH_STATIC,
   (char*)"V.Gaussian() -> float\nC++: static double Gaussian()\nV.Gaussian(float, float) -> float\nC++: static double Gaussian(double mean, double std)\n\nGenerate pseudo-random numbers distributed according to the\nstandard normal distribution.\n\nDON'T USE Random(), RandomSeed(), GetSeed(), Gaussian() THIS IS\nSTATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR REGRESSION\nTESTS) THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY. Instead, for\na sequence of random numbers with a uniform distribution create a\nvtkMinimalStandardRandomSequence object. For a sequence of random\nnumbers with a gaussian/normal distribution create a\nvtkBoxMuellerRandomSequence object.\n"},
  {(char*)"Add", PyvtkMath_Add, METH_VARARGS | METH_STATIC,
   (char*)"V.Add((float, float, float), (float, float, float), [float, float,\n     float])\nC++: static void Add(const double a[3], const double b[3],\n    double c[3])\n\nAddition of two 3-vectors (double version). Result is stored in\nc.\n"},
  {(char*)"Subtract", PyvtkMath_Subtract, METH_VARARGS | METH_STATIC,
   (char*)"V.Subtract((float, float, float), (float, float, float), [float,\n    float, float])\nC++: static void Subtract(const double a[3], const double b[3],\n    double c[3])\n\nSubtraction of two 3-vectors (double version). Result is stored\nin c according to c = a - b.\n"},
  {(char*)"MultiplyScalar", PyvtkMath_MultiplyScalar, METH_VARARGS | METH_STATIC,
   (char*)"V.MultiplyScalar([float, float, float], float)\nC++: static void MultiplyScalar(double a[3], double s)\n\nMultiplies a 3-vector by a scalar (double version). This modifies\nthe input 3-vector.\n"},
  {(char*)"MultiplyScalar2D", PyvtkMath_MultiplyScalar2D, METH_VARARGS | METH_STATIC,
   (char*)"V.MultiplyScalar2D([float, float], float)\nC++: static void MultiplyScalar2D(double a[2], double s)\n\nMultiplies a 2-vector by a scalar (double version). This modifies\nthe input 2-vector.\n"},
  {(char*)"Dot", PyvtkMath_Dot, METH_VARARGS | METH_STATIC,
   (char*)"V.Dot((float, float, float), (float, float, float)) -> float\nC++: static double Dot(const double x[3], const double y[3])\n\nDot product of two 3-vectors (double-precision version).\n"},
  {(char*)"Outer", PyvtkMath_Outer, METH_VARARGS | METH_STATIC,
   (char*)"V.Outer((float, float, float), (float, float, float), [[float,\n    float, float], [float, float, float], [float, float, float]])\nC++: static void Outer(const double x[3], const double y[3],\n    double A[3][3])\n\nOuter product of two 3-vectors (double-precision version).\n"},
  {(char*)"Cross", PyvtkMath_Cross, METH_VARARGS | METH_STATIC,
   (char*)"V.Cross((float, float, float), (float, float, float), [float,\n    float, float])\nC++: static void Cross(const double x[3], const double y[3],\n    double z[3])\n\nCross product of two 3-vectors. Result (a x b) is stored in z.\n(double-precision version)\n"},
  {(char*)"Norm", PyvtkMath_Norm, METH_VARARGS | METH_STATIC,
   (char*)"V.Norm((float, ...), int) -> float\nC++: static double Norm(const double *x, int n)\nV.Norm((float, float, float)) -> float\nC++: static double Norm(const double x[3])\n\nCompute the norm of n-vector. x is the vector, n is its length.\n"},
  {(char*)"Normalize", PyvtkMath_Normalize, METH_VARARGS | METH_STATIC,
   (char*)"V.Normalize([float, float, float]) -> float\nC++: static double Normalize(double x[3])\n\nNormalize (in place) a 3-vector. Returns norm of vector\n(double-precision version).\n"},
  {(char*)"Perpendiculars", PyvtkMath_Perpendiculars, METH_VARARGS | METH_STATIC,
   (char*)"V.Perpendiculars((float, float, float), [float, float, float],\n    [float, float, float], float)\nC++: static void Perpendiculars(const double x[3], double y[3],\n    double z[3], double theta)\n\nGiven a unit vector x, find two unit vectors y and z such that x\ncross y = z (i.e. the vectors are perpendicular to each other).\nThere is an infinite number of such vectors, specify an angle\ntheta to choose one set.  If you want only one perpendicular\nvector, specify NULL for z.\n"},
  {(char*)"ProjectVector", PyvtkMath_ProjectVector, METH_VARARGS | METH_STATIC,
   (char*)"V.ProjectVector((float, float, float), (float, float, float),\n    [float, float, float]) -> bool\nC++: static bool ProjectVector(const double a[3],\n    const double b[3], double projection[3])\n\nCompute the projection of vector a on vector b and return it in\nprojection[3]. If b is a zero vector, the function returns false\nand 'projection' is invalid. Otherwise, it returns true.\n"},
  {(char*)"ProjectVector2D", PyvtkMath_ProjectVector2D, METH_VARARGS | METH_STATIC,
   (char*)"V.ProjectVector2D((float, float), (float, float), [float, float])\n    -> bool\nC++: static bool ProjectVector2D(const double a[2],\n    const double b[2], double projection[2])\n\nCompute the projection of 2D vector 'a' on 2D vector 'b' and\nreturns the result in projection[2]. If b is a zero vector, the\nfunction returns false and 'projection' is invalid. Otherwise, it\nreturns true.\n"},
  {(char*)"Distance2BetweenPoints", PyvtkMath_Distance2BetweenPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.Distance2BetweenPoints((float, float, float), (float, float,\n    float)) -> float\nC++: static double Distance2BetweenPoints(const double x[3],\n    const double y[3])\n\nCompute distance squared between two points x and y(double\nprecision version).\n"},
  {(char*)"AngleBetweenVectors", PyvtkMath_AngleBetweenVectors, METH_VARARGS | METH_STATIC,
   (char*)"V.AngleBetweenVectors((float, float, float), (float, float, float)\n    ) -> float\nC++: static double AngleBetweenVectors(const double v1[3],\n    const double v2[3])\n\nCompute angle in radians between two vectors.\n"},
  {(char*)"GaussianAmplitude", PyvtkMath_GaussianAmplitude, METH_VARARGS | METH_STATIC,
   (char*)"V.GaussianAmplitude(float, float) -> float\nC++: static double GaussianAmplitude(const double variance,\n    const double distanceFromMean)\nV.GaussianAmplitude(float, float, float) -> float\nC++: static double GaussianAmplitude(const double mean,\n    const double variance, const double position)\n\nCompute the amplitude of a Gaussian function with mean=0 and\nspecified variance. That is, 1./(sqrt(2 Pi * variance)) *\nexp(-distanceFromMean^2/(2.*variance)).\n"},
  {(char*)"GaussianWeight", PyvtkMath_GaussianWeight, METH_VARARGS | METH_STATIC,
   (char*)"V.GaussianWeight(float, float) -> float\nC++: static double GaussianWeight(const double variance,\n    const double distanceFromMean)\nV.GaussianWeight(float, float, float) -> float\nC++: static double GaussianWeight(const double mean,\n    const double variance, const double position)\n\nCompute the amplitude of an unnormalized Gaussian function with\nmean=0 and specified variance. That is,\nexp(-distanceFromMean^2/(2.*variance)). When distanceFromMean =\n0, this function returns 1.\n"},
  {(char*)"Dot2D", PyvtkMath_Dot2D, METH_VARARGS | METH_STATIC,
   (char*)"V.Dot2D((float, float), (float, float)) -> float\nC++: static double Dot2D(const double x[2], const double y[2])\n\nDot product of two 2-vectors. (double-precision version).\n"},
  {(char*)"Outer2D", PyvtkMath_Outer2D, METH_VARARGS | METH_STATIC,
   (char*)"V.Outer2D((float, float), (float, float), [[float, float], [float,\n     float]])\nC++: static void Outer2D(const double x[2], const double y[2],\n    double A[2][2])\n\nOuter product of two 2-vectors (float version).\n"},
  {(char*)"Norm2D", PyvtkMath_Norm2D, METH_VARARGS | METH_STATIC,
   (char*)"V.Norm2D((float, float)) -> float\nC++: static double Norm2D(const double x[2])\n\nCompute the norm of a 2-vector. (double-precision version).\n"},
  {(char*)"Normalize2D", PyvtkMath_Normalize2D, METH_VARARGS | METH_STATIC,
   (char*)"V.Normalize2D([float, float]) -> float\nC++: static double Normalize2D(double x[2])\n\nNormalize (in place) a 2-vector. Returns norm of vector.\n(double-precision version).\n"},
  {(char*)"Determinant2x2", PyvtkMath_Determinant2x2, METH_VARARGS | METH_STATIC,
   (char*)"V.Determinant2x2(float, float, float, float) -> float\nC++: static double Determinant2x2(double a, double b, double c,\n    double d)\nV.Determinant2x2((float, float), (float, float)) -> float\nC++: static double Determinant2x2(const double c1[2],\n    const double c2[2])\n\nCalculate the determinant of a 2x2 matrix: | a b | | c d |\n"},
  {(char*)"LUFactor3x3", PyvtkMath_LUFactor3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.LUFactor3x3([[float, float, float], [float, float, float],\n    [float, float, float]], [int, int, int])\nC++: static void LUFactor3x3(double A[3][3], int index[3])\n\nLU Factorization of a 3x3 matrix.\n"},
  {(char*)"LUSolve3x3", PyvtkMath_LUSolve3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.LUSolve3x3(((float, float, float), (float, float, float), (\n    float, float, float)), (int, int, int), [float, float, float])\nC++: static void LUSolve3x3(const double A[3][3],\n    const int index[3], double x[3])\n\nLU back substitution for a 3x3 matrix.\n"},
  {(char*)"LinearSolve3x3", PyvtkMath_LinearSolve3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.LinearSolve3x3(((float, float, float), (float, float, float), (\n    float, float, float)), (float, float, float), [float, float,\n    float])\nC++: static void LinearSolve3x3(const double A[3][3],\n    const double x[3], double y[3])\n\nSolve Ay = x for y and place the result in y.  The matrix A is\ndestroyed in the process.\n"},
  {(char*)"Multiply3x3", PyvtkMath_Multiply3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Multiply3x3(((float, float, float), (float, float, float), (\n    float, float, float)), (float, float, float), [float, float,\n    float])\nC++: static void Multiply3x3(const double A[3][3],\n    const double in[3], double out[3])\nV.Multiply3x3(((float, float, float), (float, float, float), (\n    float, float, float)), ((float, float, float), (float, float,\n    float), (float, float, float)), [[float, float, float],\n    [float, float, float], [float, float, float]])\nC++: static void Multiply3x3(const double A[3][3],\n    const double B[3][3], double C[3][3])\n\nMultiply a vector by a 3x3 matrix.  The result is placed in out.\n"},
  {(char*)"Transpose3x3", PyvtkMath_Transpose3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Transpose3x3(((float, float, float), (float, float, float), (\n    float, float, float)), [[float, float, float], [float, float,\n    float], [float, float, float]])\nC++: static void Transpose3x3(const double A[3][3],\n    double AT[3][3])\n\nTranspose a 3x3 matrix. The input matrix is A. The output is\nstored in AT.\n"},
  {(char*)"Invert3x3", PyvtkMath_Invert3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Invert3x3(((float, float, float), (float, float, float), (float,\n     float, float)), [[float, float, float], [float, float,\n    float], [float, float, float]])\nC++: static void Invert3x3(const double A[3][3], double AI[3][3])\n\nInvert a 3x3 matrix. The input matrix is A. The output is stored\nin AI.\n"},
  {(char*)"Identity3x3", PyvtkMath_Identity3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Identity3x3([[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: static void Identity3x3(double A[3][3])\n\nSet A to the identity matrix.\n"},
  {(char*)"Determinant3x3", PyvtkMath_Determinant3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Determinant3x3([[float, float, float], [float, float, float],\n    [float, float, float]]) -> float\nC++: static double Determinant3x3(double A[3][3])\nV.Determinant3x3((float, float, float), (float, float, float), (\n    float, float, float)) -> float\nC++: static double Determinant3x3(const double c1[3],\n    const double c2[3], const double c3[3])\nV.Determinant3x3(float, float, float, float, float, float, float,\n    float, float) -> float\nC++: static double Determinant3x3(double a1, double a2, double a3,\n     double b1, double b2, double b3, double c1, double c2,\n    double c3)\n\nReturn the determinant of a 3x3 matrix.\n"},
  {(char*)"QuaternionToMatrix3x3", PyvtkMath_QuaternionToMatrix3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.QuaternionToMatrix3x3((float, float, float, float), [[float,\n    float, float], [float, float, float], [float, float, float]])\nC++: static void QuaternionToMatrix3x3(const double quat[4],\n    double A[3][3])\n\nConvert a quaternion to a 3x3 rotation matrix.  The quaternion\ndoes not have to be normalized beforehand. The quaternion must be\nin the form [w, x, y, z].@sa Matrix3x3ToQuaternion()\nMultiplyQuaternion()@sa vtkQuaternion\n"},
  {(char*)"Matrix3x3ToQuaternion", PyvtkMath_Matrix3x3ToQuaternion, METH_VARARGS | METH_STATIC,
   (char*)"V.Matrix3x3ToQuaternion(((float, float, float), (float, float,\n    float), (float, float, float)), [float, float, float, float])\nC++: static void Matrix3x3ToQuaternion(const double A[3][3],\n    double quat[4])\n\nConvert a 3x3 matrix into a quaternion.  This will provide the\nbest possible answer even if the matrix is not a pure rotation\nmatrix. The quaternion is in the form [w, x, y, z]. The method\nused is that of B.K.P. Horn.@sa QuaternionToMatrix3x3()\nMultiplyQuaternion()@sa vtkQuaternion\n"},
  {(char*)"MultiplyQuaternion", PyvtkMath_MultiplyQuaternion, METH_VARARGS | METH_STATIC,
   (char*)"V.MultiplyQuaternion((float, float, float, float), (float, float,\n    float, float), [float, float, float, float])\nC++: static void MultiplyQuaternion(const double q1[4],\n    const double q2[4], double q[4])\n\nMultiply two quaternions. This is used to concatenate rotations.\nQuaternions are in the form [w, x, y, z].@sa\nMatrix3x3ToQuaternion() QuaternionToMatrix3x3()@sa vtkQuaternion\n"},
  {(char*)"Orthogonalize3x3", PyvtkMath_Orthogonalize3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Orthogonalize3x3(((float, float, float), (float, float, float),\n    (float, float, float)), [[float, float, float], [float, float,\n     float], [float, float, float]])\nC++: static void Orthogonalize3x3(const double A[3][3],\n    double B[3][3])\n\nOrthogonalize a 3x3 matrix and put the result in B.  If matrix A\nhas a negative determinant, then B will be a rotation plus a flip\ni.e. it will have a determinant of -1.\n"},
  {(char*)"Diagonalize3x3", PyvtkMath_Diagonalize3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Diagonalize3x3(((float, float, float), (float, float, float), (\n    float, float, float)), [float, float, float], [[float, float,\n    float], [float, float, float], [float, float, float]])\nC++: static void Diagonalize3x3(const double A[3][3], double w[3],\n     double V[3][3])\n\nDiagonalize a symmetric 3x3 matrix and return the eigenvalues in\nw and the eigenvectors in the columns of V.  The matrix V will\nhave a positive determinant, and the three eigenvectors will be\naligned as closely as possible with the x, y, and z axes.\n"},
  {(char*)"SingularValueDecomposition3x3", PyvtkMath_SingularValueDecomposition3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.SingularValueDecomposition3x3(((float, float, float), (float,\n    float, float), (float, float, float)), [[float, float, float],\n     [float, float, float], [float, float, float]], [float, float,\n     float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: static void SingularValueDecomposition3x3(\n    const double A[3][3], double U[3][3], double w[3],\n    double VT[3][3])\n\nPerform singular value decomposition on a 3x3 matrix.  This is\nnot done using a conventional SVD algorithm, instead it is done\nusing Orthogonalize3x3 and Diagonalize3x3.  Both output matrices\nU and VT will have positive determinants, and the w values will\nbe arranged such that the three rows of VT are aligned as closely\nas possible with the x, y, and z axes respectively.  If the\ndeterminant of A is negative, then the three w values will be\nnegative.\n"},
  {(char*)"RGBToHSV", PyvtkMath_RGBToHSV, METH_VARARGS | METH_STATIC,
   (char*)"V.RGBToHSV((float, float, float)) -> (float, float, float)\nC++: static double *RGBToHSV(const double rgb[3])\nV.RGBToHSV(float, float, float) -> (float, float, float)\nC++: static double *RGBToHSV(double r, double g, double b)\nV.RGBToHSV((float, float, float), [float, float, float])\nC++: static void RGBToHSV(const double rgb[3], double hsv[3])\nV.RGBToHSV(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void RGBToHSV(double r, double g, double b, double *h,\n     double *s, double *v)\n\nConvert color in RGB format (Red, Green, Blue) to HSV format\n(Hue, Saturation, Value). The input color is not modified. The\ninput RGB must be float values in the range [0,1]. The output\nranges are hue [0, 1], saturation [0, 1], and value [0, 1].\n"},
  {(char*)"HSVToRGB", PyvtkMath_HSVToRGB, METH_VARARGS | METH_STATIC,
   (char*)"V.HSVToRGB((float, float, float)) -> (float, float, float)\nC++: static double *HSVToRGB(const double hsv[3])\nV.HSVToRGB(float, float, float) -> (float, float, float)\nC++: static double *HSVToRGB(double h, double s, double v)\nV.HSVToRGB((float, float, float), [float, float, float])\nC++: static void HSVToRGB(const double hsv[3], double rgb[3])\nV.HSVToRGB(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void HSVToRGB(double h, double s, double v, double *r,\n     double *g, double *b)\n\nConvert color in HSV format (Hue, Saturation, Value) to RGB\nformat (Red, Green, Blue). The input color is not modified. The\ninput 'hsv' must be float values in the range [0,1]. The elements\nof each component of the output 'rgb' are in the range [0, 1].\n"},
  {(char*)"LabToXYZ", PyvtkMath_LabToXYZ, METH_VARARGS | METH_STATIC,
   (char*)"V.LabToXYZ((float, float, float), [float, float, float])\nC++: static void LabToXYZ(const double lab[3], double xyz[3])\nV.LabToXYZ(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void LabToXYZ(double L, double a, double b, double *x,\n     double *y, double *z)\nV.LabToXYZ((float, float, float)) -> (float, ...)\nC++: static double *LabToXYZ(const double lab[3])\n\nConvert color from the CIE-L*ab system to CIE XYZ.\n"},
  {(char*)"XYZToLab", PyvtkMath_XYZToLab, METH_VARARGS | METH_STATIC,
   (char*)"V.XYZToLab((float, float, float), [float, float, float])\nC++: static void XYZToLab(const double xyz[3], double lab[3])\nV.XYZToLab(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void XYZToLab(double x, double y, double z, double *L,\n     double *a, double *b)\nV.XYZToLab((float, float, float)) -> (float, ...)\nC++: static double *XYZToLab(const double xyz[3])\n\nConvert Color from the CIE XYZ system to CIE-L*ab.\n"},
  {(char*)"XYZToRGB", PyvtkMath_XYZToRGB, METH_VARARGS | METH_STATIC,
   (char*)"V.XYZToRGB((float, float, float), [float, float, float])\nC++: static void XYZToRGB(const double xyz[3], double rgb[3])\nV.XYZToRGB(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void XYZToRGB(double x, double y, double z, double *r,\n     double *g, double *b)\nV.XYZToRGB((float, float, float)) -> (float, ...)\nC++: static double *XYZToRGB(const double xyz[3])\n\nConvert color from the CIE XYZ system to RGB.\n"},
  {(char*)"RGBToXYZ", PyvtkMath_RGBToXYZ, METH_VARARGS | METH_STATIC,
   (char*)"V.RGBToXYZ((float, float, float), [float, float, float])\nC++: static void RGBToXYZ(const double rgb[3], double xyz[3])\nV.RGBToXYZ(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void RGBToXYZ(double r, double g, double b, double *x,\n     double *y, double *z)\nV.RGBToXYZ((float, float, float)) -> (float, ...)\nC++: static double *RGBToXYZ(const double rgb[3])\n\nConvert color from the RGB system to CIE XYZ.\n"},
  {(char*)"RGBToLab", PyvtkMath_RGBToLab, METH_VARARGS | METH_STATIC,
   (char*)"V.RGBToLab((float, float, float), [float, float, float])\nC++: static void RGBToLab(const double rgb[3], double lab[3])\nV.RGBToLab(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void RGBToLab(double red, double green, double blue,\n    double *L, double *a, double *b)\nV.RGBToLab((float, float, float)) -> (float, ...)\nC++: static double *RGBToLab(const double rgb[3])\n\nConvert color from the RGB system to CIE-L*ab. The input RGB must\nbe values in the range [0,1]. The output ranges of 'L' is [0,\n100]. The output range of 'a' and 'b' are approximately [-110,\n110].\n"},
  {(char*)"LabToRGB", PyvtkMath_LabToRGB, METH_VARARGS | METH_STATIC,
   (char*)"V.LabToRGB((float, float, float), [float, float, float])\nC++: static void LabToRGB(const double lab[3], double rgb[3])\nV.LabToRGB(float, float, float, [float, ...], [float, ...],\n    [float, ...])\nC++: static void LabToRGB(double L, double a, double b,\n    double *red, double *green, double *blue)\nV.LabToRGB((float, float, float)) -> (float, ...)\nC++: static double *LabToRGB(const double lab[3])\n\nConvert color from the CIE-L*ab system to RGB.\n"},
  {(char*)"UninitializeBounds", PyvtkMath_UninitializeBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.UninitializeBounds([float, float, float, float, float, float])\nC++: static void UninitializeBounds(double bounds[6])\n\nSet the bounds to an uninitialized state\n"},
  {(char*)"AreBoundsInitialized", PyvtkMath_AreBoundsInitialized, METH_VARARGS | METH_STATIC,
   (char*)"V.AreBoundsInitialized([float, float, float, float, float, float])\n     -> int\nC++: static int AreBoundsInitialized(double bounds[6])\n\nAre the bounds initialized?\n"},
  {(char*)"ClampValue", PyvtkMath_ClampValue, METH_VARARGS | METH_STATIC,
   (char*)"V.ClampValue([float, ...], (float, float))\nC++: static void ClampValue(double *value, const double range[2])\nV.ClampValue(float, (float, float), [float, ...])\nC++: static void ClampValue(double value, const double range[2],\n    double *clamped_value)\n\nClamp some values against a range The method without\n'clamped_values' will perform in-place clamping.\n"},
  {(char*)"ClampValues", PyvtkMath_ClampValues, METH_VARARGS | METH_STATIC,
   (char*)"V.ClampValues([float, ...], int, (float, float))\nC++: static void ClampValues(double *values, int nb_values,\n    const double range[2])\nV.ClampValues((float, ...), int, (float, float), [float, ...])\nC++: static void ClampValues(const double *values, int nb_values,\n    const double range[2], double *clamped_values)\n\nClamp some values against a range The method without\n'clamped_values' will perform in-place clamping.\n"},
  {(char*)"ClampAndNormalizeValue", PyvtkMath_ClampAndNormalizeValue, METH_VARARGS | METH_STATIC,
   (char*)"V.ClampAndNormalizeValue(float, (float, float)) -> float\nC++: static double ClampAndNormalizeValue(double value,\n    const double range[2])\n\nClamp a value against a range and then normalized it between 0\nand 1. If range[0]==range[1], the result is 0.\n\\pre valid_range: range[0]<=range[1]\n\\post valid_result: result>=0.0 && result<=1.0\n"},
  {(char*)"GetScalarTypeFittingRange", PyvtkMath_GetScalarTypeFittingRange, METH_VARARGS | METH_STATIC,
   (char*)"V.GetScalarTypeFittingRange(float, float, float, float) -> int\nC++: static int GetScalarTypeFittingRange(double range_min,\n    double range_max, double scale=1.0, double shift=0.0)\n\nReturn the scalar type that is most likely to have enough\nprecision to store a given range of data once it has been scaled\nand shifted (i.e. [range_min * scale + shift, range_max * scale +\nshift]. If any one of the parameters is not an integer number\n(decimal part != 0), the search will default to float types only\n(float or double) Return -1 on error or no scalar type found.\n"},
  {(char*)"GetAdjustedScalarRange", PyvtkMath_GetAdjustedScalarRange, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAdjustedScalarRange(vtkDataArray, int, [float, float]) -> int\nC++: static int GetAdjustedScalarRange(vtkDataArray *array,\n    int comp, double range[2])\n\nGet a vtkDataArray's scalar range for a given component. If the\nvtkDataArray's data type is unsigned char (VTK_UNSIGNED_CHAR) the\nrange is adjusted to the whole data type range [0, 255.0]. Same\ngoes for unsigned short (VTK_UNSIGNED_SHORT) but the upper bound\nis also adjusted down to 4095.0 if was between ]255, 4095.0].\nReturn 1 on success, 0 otherwise.\n"},
  {(char*)"ExtentIsWithinOtherExtent", PyvtkMath_ExtentIsWithinOtherExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.ExtentIsWithinOtherExtent([int, int, int, int, int, int], [int,\n    int, int, int, int, int]) -> int\nC++: static int ExtentIsWithinOtherExtent(int extent1[6],\n    int extent2[6])\n\nReturn true if first 3D extent is within second 3D extent Extent\nis x-min, x-max, y-min, y-max, z-min, z-max\n"},
  {(char*)"BoundsIsWithinOtherBounds", PyvtkMath_BoundsIsWithinOtherBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.BoundsIsWithinOtherBounds([float, float, float, float, float,\n    float], [float, float, float, float, float, float], [float,\n    float, float]) -> int\nC++: static int BoundsIsWithinOtherBounds(double bounds1[6],\n    double bounds2[6], double delta[3])\n\nReturn true if first 3D bounds is within the second 3D bounds\nBounds is x-min, x-max, y-min, y-max, z-min, z-max Delta is the\nerror margin along each axis (usually a small number)\n"},
  {(char*)"PointIsWithinBounds", PyvtkMath_PointIsWithinBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.PointIsWithinBounds([float, float, float], [float, float, float,\n     float, float, float], [float, float, float]) -> int\nC++: static int PointIsWithinBounds(double point[3],\n    double bounds[6], double delta[3])\n\nReturn true if point is within the given 3D bounds Bounds is\nx-min, x-max, y-min, y-max, z-min, z-max Delta is the error\nmargin along each axis (usually a small number)\n"},
  {(char*)"Solve3PointCircle", PyvtkMath_Solve3PointCircle, METH_VARARGS | METH_STATIC,
   (char*)"V.Solve3PointCircle((float, float, float), (float, float, float),\n    (float, float, float), [float, float, float]) -> float\nC++: static double Solve3PointCircle(const double p1[3],\n    const double p2[3], const double p3[3], double center[3])\n\nIn Euclidean space, there is a unique circle passing through any\ngiven three non-collinear points P1, P2, and P3. Using Cartesian\ncoordinates to represent these points as spatial vectors, it is\npossible to use the dot product and cross product to calculate\nthe radius and center of the circle. See:\nhttp://en.wikipedia.org/wiki/Circumscribed_circle and more\nspecifically the section Barycentric coordinates from cross- and\ndot-products\n"},
  {(char*)"Inf", PyvtkMath_Inf, METH_VARARGS | METH_STATIC,
   (char*)"V.Inf() -> float\nC++: static double Inf()\n\nSpecial IEEE-754 number used to represent positive infinity.\n"},
  {(char*)"NegInf", PyvtkMath_NegInf, METH_VARARGS | METH_STATIC,
   (char*)"V.NegInf() -> float\nC++: static double NegInf()\n\nSpecial IEEE-754 number used to represent negative infinity.\n"},
  {(char*)"Nan", PyvtkMath_Nan, METH_VARARGS | METH_STATIC,
   (char*)"V.Nan() -> float\nC++: static double Nan()\n\nSpecial IEEE-754 number used to represent Not-A-Number (Nan).\n"},
  {(char*)"IsInf", PyvtkMath_IsInf, METH_VARARGS | METH_STATIC,
   (char*)"V.IsInf(float) -> int\nC++: static int IsInf(double x)\n\nTest if a number is equal to the special floating point value\ninfinity.\n"},
  {(char*)"IsNan", PyvtkMath_IsNan, METH_VARARGS | METH_STATIC,
   (char*)"V.IsNan(float) -> int\nC++: static int IsNan(double x)\n\nTest if a number is equal to the special floating point value\nNot-A-Number (Nan).\n"},
  {(char*)"IsFinite", PyvtkMath_IsFinite, METH_VARARGS | METH_STATIC,
   (char*)"V.IsFinite(float) -> bool\nC++: static bool IsFinite(double x)\n\nTest if a number has finite value i.e. it is normal, subnormal or\nzero, but not infinite or Nan.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMath_StaticNew()
{
  return vtkMath::New();
}

PyObject *PyVTKClass_vtkMathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMath_StaticNew,
    PyvtkMath_Methods,
    "vtkMath", modulename,
    NULL, NULL,
    PyvtkMath_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMath_Doc()
{
  static const char *docstring[] = {
    "vtkMath - performs common math operations\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMath provides methods to perform common math operations. These\ninclude providing constants such as Pi; conversion from degrees to\nradians; vector operations such as dot and cross products and vector\nnorm; matrix determinant for 2x2 and 3x3 matrices; univariate\npolynomial solvers; and for random number generation (for backward\ncompatibility only).\n\nSee Also:\n\nvtkMinimalStandardRandomSequence, vt",
    "kBoxMuellerRandomSequence,\nvtkQuaternion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMath", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_DBL_MIN", 2.2250738585072014e-308 },
        { "VTK_DBL_EPSILON", 2.2204460492503131e-16 },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

