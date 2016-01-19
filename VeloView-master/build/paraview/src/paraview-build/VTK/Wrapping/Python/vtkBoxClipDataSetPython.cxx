// python wrapper for vtkBoxClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkBoxClipDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoxClipDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxClipDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkBoxClipDataSet_Doc();


static PyObject *
PyvtkBoxClipDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoxClipDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoxClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxClipDataSet::NewInstance());

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
PyvtkBoxClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoxClipDataSet *tempr = vtkBoxClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetBoxClip_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  double *temp2 = NULL;
  double small2[4];
  int size2 = 0;
  double *temp3 = NULL;
  double small3[4];
  int size3 = 0;
  double *temp4 = NULL;
  double small4[4];
  int size4 = 0;
  double *temp5 = NULL;
  double small5[4];
  int size5 = 0;
  double *temp6 = NULL;
  double small6[4];
  int size6 = 0;
  double *temp7 = NULL;
  double small7[4];
  int size7 = 0;
  double *temp8 = NULL;
  double small8[4];
  int size8 = 0;
  double *temp9 = NULL;
  double small9[4];
  int size9 = 0;
  double *temp10 = NULL;
  double small10[4];
  int size10 = 0;
  double *temp11 = NULL;
  double small11[4];
  int size11 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[size2];
      }
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[size3];
      }
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[size4];
      }
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new double[size5];
      }
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new double[size6];
      }
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new double[size7];
      }
    size8 = ap.GetArgSize(8);
    temp8 = small8;
    if (size8 > 4)
      {
      temp8 = new double[size8];
      }
    size9 = ap.GetArgSize(9);
    temp9 = small9;
    if (size9 > 4)
      {
      temp9 = new double[size9];
      }
    size10 = ap.GetArgSize(10);
    temp10 = small10;
    if (size10 > 4)
      {
      temp10 = new double[size10];
      }
    size11 = ap.GetArgSize(11);
    temp11 = small11;
    if (size11 > 4)
      {
      temp11 = new double[size11];
      }
    }

  if (op && ap.CheckArgCount(12) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8) &&
      ap.GetArray(temp9, size9) &&
      ap.GetArray(temp10, size10) &&
      ap.GetArray(temp11, size11))
    {
    if (ap.IsBound())
      {
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
      }
    else
      {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
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
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
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
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }
  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }
  if (temp8 && temp8 != small8)
    {
    delete [] temp8;
    }
  if (temp9 && temp9 != small9)
    {
    delete [] temp9;
    }
  if (temp10 && temp10 != small10)
    {
    delete [] temp10;
    }
  if (temp11 && temp11 != small11)
    {
    delete [] temp11;
    }

  return result;
}

static PyObject *
PyvtkBoxClipDataSet_SetBoxClip(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkBoxClipDataSet_SetBoxClip_s1(self, args);
    case 12:
      return PyvtkBoxClipDataSet_SetBoxClip_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBoxClip");
  return NULL;
}



static PyObject *
PyvtkBoxClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkBoxClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkBoxClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkBoxClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputs() :
      op->vtkBoxClipDataSet::GetNumberOfOutputs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkBoxClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkBoxClipDataSet::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBoxClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkBoxClipDataSet::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_InterpolateEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolateEdge");

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    vtkBoxClipDataSet::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_MinEdgeF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinEdgeF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  unsigned int *temp0 = NULL;
  unsigned int small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  unsigned int *temp2 = NULL;
  unsigned int *save2 = NULL;
  unsigned int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->MinEdgeF(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBoxClipDataSet::MinEdgeF(temp0, temp1, temp2);
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
PyvtkBoxClipDataSet_PyramidToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PyramidToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->PyramidToTetra(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBoxClipDataSet::PyramidToTetra(temp0, temp1, temp2);
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
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_WedgeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->WedgeToTetra(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBoxClipDataSet::WedgeToTetra(temp0, temp1, temp2);
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
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType small2[4];
  int size2 = 0;
  vtkCellArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[size2];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->CellGrid(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBoxClipDataSet::CellGrid(temp0, temp1, temp2, temp3);
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
PyvtkBoxClipDataSet_CreateTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->CreateTetra(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBoxClipDataSet::CreateTetra(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = NULL;
  vtkIncrementalPointLocator *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkIdType temp6;
  vtkCellData *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = NULL;
  vtkIncrementalPointLocator *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkIdType temp6;
  vtkCellData *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxClipDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxClipDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBoxClipDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBoxClipDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBoxClipDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBoxClip", PyvtkBoxClipDataSet_SetBoxClip, METH_VARARGS,
   (char*)"V.SetBoxClip(float, float, float, float, float, float)\nC++: void SetBoxClip(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nV.SetBoxClip((float, ...), (float, ...), (float, ...), (float,\n    ...), (float, ...), (float, ...), (float, ...), (float, ...),\n    (float, ...), (float, ...), (float, ...), (float, ...))\nC++: void SetBoxClip(const double *n0, const double *o0,\n    const double *n1, const double *o1, const double *n2,\n    const double *o2, const double *n3, const double *o3,\n    const double *n4, const double *o4, const double *n5,\n    const double *o5)\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkBoxClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkBoxClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkBoxClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkBoxClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkBoxClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkBoxClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkBoxClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkBoxClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetClippedOutput", PyvtkBoxClipDataSet_GetClippedOutput, METH_VARARGS,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {(char*)"GetNumberOfOutputs", PyvtkBoxClipDataSet_GetNumberOfOutputs, METH_VARARGS,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: virtual int GetNumberOfOutputs()\n\nReturn the Clipped output.\n"},
  {(char*)"SetLocator", PyvtkBoxClipDataSet_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkBoxClipDataSet_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkBoxClipDataSet_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkBoxClipDataSet_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator.\n"},
  {(char*)"GetOrientation", PyvtkBoxClipDataSet_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: unsigned int GetOrientation()\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {(char*)"SetOrientation", PyvtkBoxClipDataSet_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(unsigned int a)\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {(char*)"InterpolateEdge", PyvtkBoxClipDataSet_InterpolateEdge, METH_VARARGS | METH_STATIC,
   (char*)"V.InterpolateEdge(vtkDataSetAttributes, int, int, int, float)\nC++: static void InterpolateEdge(vtkDataSetAttributes *attributes,\n     vtkIdType toId, vtkIdType fromId1, vtkIdType fromId2,\n    double t)\n\n"},
  {(char*)"MinEdgeF", PyvtkBoxClipDataSet_MinEdgeF, METH_VARARGS,
   (char*)"V.MinEdgeF((int, ...), (int, ...), [int, ...])\nC++: void MinEdgeF(const unsigned int *id_v,\n    const vtkIdType *cellIds, unsigned int *edgF)\n\n"},
  {(char*)"PyramidToTetra", PyvtkBoxClipDataSet_PyramidToTetra, METH_VARARGS,
   (char*)"V.PyramidToTetra((int, ...), (int, ...), vtkCellArray)\nC++: void PyramidToTetra(const vtkIdType *pyramId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {(char*)"WedgeToTetra", PyvtkBoxClipDataSet_WedgeToTetra, METH_VARARGS,
   (char*)"V.WedgeToTetra((int, ...), (int, ...), vtkCellArray)\nC++: void WedgeToTetra(const vtkIdType *wedgeId,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {(char*)"CellGrid", PyvtkBoxClipDataSet_CellGrid, METH_VARARGS,
   (char*)"V.CellGrid(int, int, (int, ...), vtkCellArray)\nC++: void CellGrid(vtkIdType typeobj, vtkIdType npts,\n    const vtkIdType *cellIds, vtkCellArray *newCellArray)\n\n"},
  {(char*)"CreateTetra", PyvtkBoxClipDataSet_CreateTetra, METH_VARARGS,
   (char*)"V.CreateTetra(int, (int, ...), vtkCellArray)\nC++: void CreateTetra(vtkIdType npts, const vtkIdType *cellIds,\n    vtkCellArray *newCellArray)\n\n"},
  {(char*)"ClipBox", PyvtkBoxClipDataSet_ClipBox, METH_VARARGS,
   (char*)"V.ClipBox(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron", PyvtkBoxClipDataSet_ClipHexahedron, METH_VARARGS,
   (char*)"V.ClipHexahedron(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox2D", PyvtkBoxClipDataSet_ClipBox2D, METH_VARARGS,
   (char*)"V.ClipBox2D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox2D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron2D", PyvtkBoxClipDataSet_ClipHexahedron2D, METH_VARARGS,
   (char*)"V.ClipHexahedron2D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron2D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox1D", PyvtkBoxClipDataSet_ClipBox1D, METH_VARARGS,
   (char*)"V.ClipBox1D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox1D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *lines,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron1D", PyvtkBoxClipDataSet_ClipHexahedron1D, METH_VARARGS,
   (char*)"V.ClipHexahedron1D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron1D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox0D", PyvtkBoxClipDataSet_ClipBox0D, METH_VARARGS,
   (char*)"V.ClipBox0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron0D", PyvtkBoxClipDataSet_ClipHexahedron0D, METH_VARARGS,
   (char*)"V.ClipHexahedron0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipHexahedron0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxClipDataSet_StaticNew()
{
  return vtkBoxClipDataSet::New();
}

PyObject *PyVTKClass_vtkBoxClipDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxClipDataSet_StaticNew,
    PyvtkBoxClipDataSet_Methods,
    "vtkBoxClipDataSet", modulename,
    NULL, NULL,
    PyvtkBoxClipDataSet_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBoxClipDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkBoxClipDataSet - clip an unstructured grid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Clipping means that is actually 'cuts' through the cells of the\ndataset, returning tetrahedral cells inside of the box. The output of\nthis filter is an unstructured grid.\n\nThis filter can be configured to compute a second output. The second\noutput is the part of the cell that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nThe vtkBoxClipDataSet will",
    " triangulate all types of 3D cells (i.e,\ncreate tetrahedra). This is necessary to preserve compatibility\nacross face neighbors.\n\nTo use this filter,you can decide if you will be clipping with a box\nor a hexahedral box.\n1) Set orientation if(SetOrientation(0)): box (parallel with\n   coordinate axis) SetBoxClip(xmin,xmax,ymin,ymax,zmin,zmax)\n   if(SetOrientation(1)): hexahedral box (Default)\n   SetB",
    "oxClip(n[0],o[0],n[1],o[1],n[2],o[2],n[3],o[3],n[4],o[4],n[5],o\n   [5]) PlaneNormal[] normal of each plane PlanePoint[] point on the\n   plane\n2) Apply the GenerateClipScalarsOn()\n3) Execute clipping  Update();\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxClipDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxClipDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxClipDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

