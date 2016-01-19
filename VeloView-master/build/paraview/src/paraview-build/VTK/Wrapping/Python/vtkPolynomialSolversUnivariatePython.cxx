// python wrapper for vtkPolynomialSolversUnivariate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolynomialSolversUnivariate.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolynomialSolversUnivariate(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolynomialSolversUnivariateNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPolynomialSolversUnivariate_Doc();


static PyObject *
PyvtkPolynomialSolversUnivariate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolynomialSolversUnivariate::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolynomialSolversUnivariate::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolynomialSolversUnivariate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolynomialSolversUnivariate::NewInstance());

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
PyvtkPolynomialSolversUnivariate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolynomialSolversUnivariate *tempr = vtkPolynomialSolversUnivariate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  int temp5;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HabichtBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  int temp5;
  bool temp6 = false;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::HabichtBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 5:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s1(self, args);
    case 6:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s2(self, args);
    case 7:
      return PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HabichtBisectionSolve");
  return NULL;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  int temp5;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SturmBisectionSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double temp4;
  int temp5;
  bool temp6 = false;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SturmBisectionSolve(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SturmBisectionSolve(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 5:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s1(self, args);
    case 6:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s2(self, args);
    case 7:
      return PyvtkPolynomialSolversUnivariate_SturmBisectionSolve_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SturmBisectionSolve");
  return NULL;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_FilterRoots(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FilterRoots");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int temp3;
  double temp4;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::FilterRoots(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_LinBairstowSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LinBairstowSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::LinBairstowSolve(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_FerrariSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FerrariSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  double temp3;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new double[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::FerrariSolve(temp0, temp1, temp2, temp3);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_TartagliaCardanSolve(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TartagliaCardanSolve");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  double temp3;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new double[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::TartagliaCardanSolve(temp0, temp1, temp2, temp3);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_SolveCubic_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveCubic");

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
    double *tempr = vtkPolynomialSolversUnivariate::SolveCubic(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveCubic_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveCubic");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  double *temp6 = NULL;
  double *save6 = NULL;
  double small6[8];
  int size6 = 0;
  int *temp7 = NULL;
  int *save7 = NULL;
  int small7[8];
  int size7 = 0;
  PyObject *result = NULL;

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
  size6 = ap.GetArgSize(6);
  temp6 = small6;
  if (size6 > 4)
    {
    temp6 = new double[2*size6];
    }
  save6 = &temp6[size6];
  size7 = ap.GetArgSize(7);
  temp7 = small7;
  if (size7 > 4)
    {
    temp7 = new int[2*size7];
    }
  save7 = &temp7[size7];

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);
    ap.SaveArray(temp7, save7, size7);

    int tempr = vtkPolynomialSolversUnivariate::SolveCubic(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

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

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }
  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveCubic(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkPolynomialSolversUnivariate_SolveCubic_s1(self, args);
    case 8:
      return PyvtkPolynomialSolversUnivariate_SolveCubic_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SolveCubic");
  return NULL;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

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
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
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
    temp5 = new int[2*size5];
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

    int tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2, temp3, temp4, temp5);

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
      result = ap.BuildValue(tempr);
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
PyvtkPolynomialSolversUnivariate_SolveQuadratic_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveQuadratic");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new double[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = vtkPolynomialSolversUnivariate::SolveQuadratic(temp0, temp1, temp2);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkPolynomialSolversUnivariate_SolveQuadratic_Methods[] = {
  {NULL, PyvtkPolynomialSolversUnivariate_SolveQuadratic_s1, METH_VARARGS | METH_STATIC,
   (char*)"ddd"},
  {NULL, PyvtkPolynomialSolversUnivariate_SolveQuadratic_s3, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d *d *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveQuadratic(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolynomialSolversUnivariate_SolveQuadratic_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 6:
      return PyvtkPolynomialSolversUnivariate_SolveQuadratic_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SolveQuadratic");
  return NULL;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveLinear");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double *tempr = vtkPolynomialSolversUnivariate::SolveLinear(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveLinear");

  double temp0;
  double temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new int[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkPolynomialSolversUnivariate::SolveLinear(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkPolynomialSolversUnivariate_SolveLinear(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPolynomialSolversUnivariate_SolveLinear_s1(self, args);
    case 4:
      return PyvtkPolynomialSolversUnivariate_SolveLinear_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SolveLinear");
  return NULL;
}



static PyObject *
PyvtkPolynomialSolversUnivariate_SetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDivisionTolerance");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolynomialSolversUnivariate::SetDivisionTolerance(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_GetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDivisionTolerance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkPolynomialSolversUnivariate::GetDivisionTolerance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolynomialSolversUnivariate_Methods[] = {
  {(char*)"GetClassName", PyvtkPolynomialSolversUnivariate_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolynomialSolversUnivariate_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolynomialSolversUnivariate_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolynomialSolversUnivariate\nC++: vtkPolynomialSolversUnivariate *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolynomialSolversUnivariate_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolynomialSolversUnivariate\nC++: vtkPolynomialSolversUnivariate *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"HabichtBisectionSolve", PyvtkPolynomialSolversUnivariate_HabichtBisectionSolve, METH_VARARGS | METH_STATIC,
   (char*)"V.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol)\nV.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol, int intervalType)\nV.HabichtBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int, bool) -> int\nC++: static int HabichtBisectionSolve(double *P, int d, double *a,\n     double *upperBnds, double tol, int intervalType,\n    bool divideGCD)\n\nFinds all REAL roots (within tolerance tol) of the d -th degree\npolynomial\\[\n  P[0] X^d + ... + P[d-1] X + P[d]\\] in ] a[0] ; a[1]] using the\nHabicht sequence (polynomial coefficients are REAL) and returns\nthe count nr. All roots are bracketed in the\n\nr first ] upperBnds[i] - tol ; upperBnds[i]] intervals. Returns\n-1 if anything went wrong (such as: polynomial does not have\ndegree d, the interval provided by the other is absurd, etc.).\n\nintervalType specifies the search interval as follows: 0 = 00 =\n]a,b[ 1 = 10 = [a,b[ 2 = 01 = ]a,b] 3 = 11 = [a,b] This defaults\nto 0.\n\nThe last non-zero item in the Habicht sequence is the gcd of P\nand P'. The parameter divideGCD specifies whether the program\nshould attempt to divide by the gcd and run again. It works\nbetter with polynomials known to have high multiplicities. When\ndivideGCD != 0 then it attempts to divide by the GCD, if\napplicable. This defaults to 0.\n\nCompared to the Sturm solver the Habicht solver is slower,\nalthough both are O(d^2). The Habicht solver has the added\nbenefit that it has a built in mechanism to keep the leading\ncoefficients of the result from polynomial division bounded above\nand below in absolute value. This will tend to keep the\ncoefficients of the polynomials in the sequence from zeroing out\nprematurely or becoming infinite.\n\nConstructing ...\n [Truncated]\n"},
  {(char*)"SturmBisectionSolve", PyvtkPolynomialSolversUnivariate_SturmBisectionSolve, METH_VARARGS | METH_STATIC,
   (char*)"V.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol)\nV.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol, int intervalType)\nV.SturmBisectionSolve([float, ...], int, [float, ...], [float,\n    ...], float, int, bool) -> int\nC++: static int SturmBisectionSolve(double *P, int d, double *a,\n    double *upperBnds, double tol, int intervalType,\n    bool divideGCD)\n\nFinds all REAL roots (within tolerance tol) of the d -th degree\npolynomial\n  P[0] X^d + ... + P[d-1] X + P[d] in ] a[0] ; a[1]] using\nSturm's theorem ( polynomial coefficients are REAL ) and returns\nthe count nr. All roots are bracketed in the\n\nr first ] upperBnds[i] - tol ; upperBnds[i]] intervals. Returns\n-1 if anything went wrong (such as: polynomial does not have\ndegree d, the interval provided by the other is absurd, etc.).\n\nintervalType specifies the search interval as follows: 0 = 00 =\n]a,b[ 1 = 10 = [a,b[ 2 = 01 = ]a,b] 3 = 11 = [a,b] This defaults\nto 0.\n\nThe last non-zero item in the Sturm sequence is the gcd of P and\nP'. The parameter divideGCD specifies whether the program should\nattempt to divide by the gcd and run again. It works better with\npolynomials known to have high multiplicities. When divideGCD !=\n0 then it attempts to divide by the GCD, if applicable. This\ndefaults to 0.\n\nConstructing the Sturm sequence is O(d^2) in both time and space.\n\nWarning: it is the user's responsibility to make sure the\nupperBnds array is large enough to contain the maximal number of\nexpected roots. Note that nr is smaller or equal to the actual\nnumber of roots in ] a[0] ; a[1]] since roots within \\tol are\nlumped in the same bracket. array is large enough to contain the\nmaximal number of expected upper bounds.\n"},
  {(char*)"FilterRoots", PyvtkPolynomialSolversUnivariate_FilterRoots, METH_VARARGS | METH_STATIC,
   (char*)"V.FilterRoots([float, ...], int, [float, ...], int, float) -> int\nC++: static int FilterRoots(double *P, int d, double *upperBnds,\n    int rootcount, double diameter)\n\nThis uses the derivative sequence to filter possible roots of a\npolynomial. First it sorts the roots and removes any duplicates.\nIf the number of sign changes of the derivative sequence at a\nroot at upperBnds[i] == that at upperBnds[i]  - diameter then the\ni^th value is removed from upperBnds. It returns the new number\nof roots.\n"},
  {(char*)"LinBairstowSolve", PyvtkPolynomialSolversUnivariate_LinBairstowSolve, METH_VARARGS | METH_STATIC,
   (char*)"V.LinBairstowSolve([float, ...], int, [float, ...], float) -> int\nC++: static int LinBairstowSolve(double *c, int d, double *r,\n    double &tolerance)\n\nSeeks all REAL roots of the d -th degree polynomial\n  c[0] X^d + ... + c[d-1] X + c[d] = 0 equation Lin-Bairstow's\nmethod ( polynomial coefficients are REAL ) and stores the nr\nroots found ( multiple roots are multiply stored ) in r.tolerance\nis the user-defined solver tolerance; this variable may be\nrelaxed by the iterative solver if needed. Returns nr. Warning:\nit is the user's responsibility to make sure the r array is large\nenough to contain the maximal number of expected roots.\n"},
  {(char*)"FerrariSolve", PyvtkPolynomialSolversUnivariate_FerrariSolve, METH_VARARGS | METH_STATIC,
   (char*)"V.FerrariSolve([float, ...], [float, ...], [int, ...], float)\n    -> int\nC++: static int FerrariSolve(double *c, double *r, int *m,\n    double tol)\n\nAlgebraically extracts REAL roots of the quartic polynomial with\nREAL coefficients X^4 + c[0] X^3 + c[1] X^2 + c[2] X + c[3] and\nstores them (when they exist) and their respective multiplicities\nin the r and m arrays, based on Ferrari's method. Some numerical\nnoise can be filtered by the use of a tolerance tol instead of\nequality with 0 (one can use, e.g., VTK_DBL_EPSILON). Returns the\nnumber of roots. Warning: it is the user's responsibility to pass\na non-negative tol.\n"},
  {(char*)"TartagliaCardanSolve", PyvtkPolynomialSolversUnivariate_TartagliaCardanSolve, METH_VARARGS | METH_STATIC,
   (char*)"V.TartagliaCardanSolve([float, ...], [float, ...], [int, ...],\n    float) -> int\nC++: static int TartagliaCardanSolve(double *c, double *r, int *m,\n     double tol)\n\nAlgebraically extracts REAL roots of the cubic polynomial with\nREAL coefficients X^3 + c[0] X^2 + c[1] X + c[2] and stores them\n(when they exist) and their respective multiplicities in the r\nand m arrays. Some numerical noise can be filtered by the use of\na tolerance tol instead of equality with 0 (one can use, e.g.,\nVTK_DBL_EPSILON). The main differences with SolveCubic are that\n(1) the polynomial must have unit leading coefficient, (2)\ncomplex roots are discarded upfront, (3) non-simple roots are\nstored only once, along with their respective multiplicities, and\n(4) some numerical noise is filtered by the use of relative\ntolerance instead of equality with 0. Returns the number of\nroots. In memoriam Niccolo Tartaglia (1500 - 1559), unfairly\nforgotten.\n"},
  {(char*)"SolveCubic", PyvtkPolynomialSolversUnivariate_SolveCubic, METH_VARARGS | METH_STATIC,
   (char*)"V.SolveCubic(float, float, float, float) -> (float, ...)\nC++: static double *SolveCubic(double c0, double c1, double c2,\n    double c3)\nV.SolveCubic(float, float, float, float, [float, ...], [float,\n    ...], [float, ...], [int, ...]) -> int\nC++: static int SolveCubic(double c0, double c1, double c2,\n    double c3, double *r1, double *r2, double *r3, int *num_roots)\n\nSolves a cubic equation c0*t^3 + c1*t^2 + c2*t + c3 = 0 when c0,\nc1, c2, and c3 are REAL.  Solution is motivated by Numerical\nRecipes In C 2nd Ed.  Return array contains number of (real)\nroots (counting multiple roots as one) followed by roots\nthemselves. The value in roots[4] is a integer giving further\ninformation about the roots (see return codes for int\nSolveCubic() ).\n"},
  {(char*)"SolveQuadratic", PyvtkPolynomialSolversUnivariate_SolveQuadratic, METH_VARARGS | METH_STATIC,
   (char*)"V.SolveQuadratic(float, float, float) -> (float, ...)\nC++: static double *SolveQuadratic(double c0, double c1,\n    double c2)\nV.SolveQuadratic(float, float, float, [float, ...], [float, ...],\n    [int, ...]) -> int\nC++: static int SolveQuadratic(double c0, double c1, double c2,\n    double *r1, double *r2, int *num_roots)\nV.SolveQuadratic([float, ...], [float, ...], [int, ...]) -> int\nC++: static int SolveQuadratic(double *c, double *r, int *m)\n\nSolves a quadratic equation c1*t^2 + c2*t + c3 = 0 when c1, c2,\nand c3 are REAL.  Solution is motivated by Numerical Recipes In C\n2nd Ed. Return array contains number of (real) roots (counting\nmultiple roots as one) followed by roots themselves. Note that\nroots[3] contains a return code further describing solution - see\ndocumentation for SolveCubic() for meaning of return codes.\n"},
  {(char*)"SolveLinear", PyvtkPolynomialSolversUnivariate_SolveLinear, METH_VARARGS | METH_STATIC,
   (char*)"V.SolveLinear(float, float) -> (float, ...)\nC++: static double *SolveLinear(double c0, double c1)\nV.SolveLinear(float, float, [float, ...], [int, ...]) -> int\nC++: static int SolveLinear(double c0, double c1, double *r1,\n    int *num_roots)\n\nSolves a linear equation c2*t  + c3 = 0 when c2 and c3 are REAL.\nSolution is motivated by Numerical Recipes In C 2nd Ed. Return\narray contains number of roots followed by roots themselves.\n"},
  {(char*)"SetDivisionTolerance", PyvtkPolynomialSolversUnivariate_SetDivisionTolerance, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDivisionTolerance(float)\nC++: static void SetDivisionTolerance(double tol)\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {(char*)"GetDivisionTolerance", PyvtkPolynomialSolversUnivariate_GetDivisionTolerance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDivisionTolerance() -> float\nC++: static double GetDivisionTolerance()\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolynomialSolversUnivariate_StaticNew()
{
  return vtkPolynomialSolversUnivariate::New();
}

PyObject *PyVTKClass_vtkPolynomialSolversUnivariateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolynomialSolversUnivariate_StaticNew,
    PyvtkPolynomialSolversUnivariate_Methods,
    "vtkPolynomialSolversUnivariate", modulename,
    NULL, NULL,
    PyvtkPolynomialSolversUnivariate_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPolynomialSolversUnivariate_Doc()
{
  static const char *docstring[] = {
    "vtkPolynomialSolversUnivariate - polynomial solvers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPolynomialSolversUnivariate provides solvers for univariate\npolynomial equations with real coefficients. The Tartaglia-Cardan and\nFerrari solvers work on polynomials of fixed degree 3 and 4,\nrespectively. The Lin-Bairstow and Sturm solvers work on polynomials\nof arbitrary degree. The Sturm solver is the most robust solver but\nonly reports roots within an interval and does not report\nmultiplicit",
    "ies. The Lin-Bairstow solver reports multiplicities.\n\nFor difficult polynomials, you may wish to use FilterRoots to\neliminate some of the roots reported by the Sturm solver. FilterRoots\nevaluates the derivatives near each root to eliminate cases where a\nlocal minimum or maximum is close to zero.\n\nThanks:\n\nThanks to Philippe Pebay, Korben Rusek, David Thompson, and Maurice\nRojas for implementing th",
    "ese solvers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolynomialSolversUnivariate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolynomialSolversUnivariateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolynomialSolversUnivariate", o) != 0)
    {
    Py_DECREF(o);
    }

}

