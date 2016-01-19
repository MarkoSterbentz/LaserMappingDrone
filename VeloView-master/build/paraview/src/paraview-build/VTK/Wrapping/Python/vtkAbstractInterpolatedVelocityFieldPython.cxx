// python wrapper for vtkAbstractInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkAbstractInterpolatedVelocityField_Doc();


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractInterpolatedVelocityField::NewInstance());

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
PyvtkAbstractInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractInterpolatedVelocityField *tempr = vtkAbstractInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaching(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkAbstractInterpolatedVelocityField::GetCaching());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheHit() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheHit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkAbstractInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLastCellId() :
      op->vtkAbstractInterpolatedVelocityField::GetLastCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLastCellId(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetLastCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetLastCellId(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 2:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return NULL;
}



static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorsType() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SelectVectors(temp0, temp1);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SelectVectors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeVector(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetNormalizeVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNormalizeVector() :
      op->vtkAbstractInterpolatedVelocityField::GetNormalizeVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->CopyParameters(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::CopyParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
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
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = op->FunctionValues(temp0, temp1);

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
PyvtkAbstractInterpolatedVelocityField_ClearLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCellId();
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::ClearLastCellId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastWeights(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastWeights(temp0));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastLocalCoordinates(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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

static PyMethodDef PyvtkAbstractInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractInterpolatedVelocityField\nC++: vtkAbstractInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractInterpolatedVelocityField\nC++: vtkAbstractInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetCaching", PyvtkAbstractInterpolatedVelocityField_SetCaching, METH_VARARGS,
   (char*)"V.SetCaching(bool)\nC++: void SetCaching(bool a)\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {(char*)"GetCaching", PyvtkAbstractInterpolatedVelocityField_GetCaching, METH_VARARGS,
   (char*)"V.GetCaching() -> bool\nC++: bool GetCaching()\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {(char*)"GetCacheHit", PyvtkAbstractInterpolatedVelocityField_GetCacheHit, METH_VARARGS,
   (char*)"V.GetCacheHit() -> int\nC++: int GetCacheHit()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {(char*)"GetCacheMiss", PyvtkAbstractInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {(char*)"GetLastDataSet", PyvtkAbstractInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   (char*)"V.GetLastDataSet() -> vtkDataSet\nC++: vtkDataSet *GetLastDataSet()\n\n"},
  {(char*)"GetLastCellId", PyvtkAbstractInterpolatedVelocityField_GetLastCellId, METH_VARARGS,
   (char*)"V.GetLastCellId() -> int\nC++: vtkIdType GetLastCellId()\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {(char*)"SetLastCellId", PyvtkAbstractInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   (char*)"V.SetLastCellId(int)\nC++: virtual void SetLastCellId(vtkIdType c)\nV.SetLastCellId(int, int)\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {(char*)"GetVectorsSelection", PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nGet/Set the name of a spcified vector array. By default it is\nNULL, with the active vector array for use.\n"},
  {(char*)"GetVectorsType", PyvtkAbstractInterpolatedVelocityField_GetVectorsType, METH_VARARGS,
   (char*)"V.GetVectorsType() -> int\nC++: int GetVectorsType()\n\nGet/Set the name of a spcified vector array. By default it is\nNULL, with the active vector array for use.\n"},
  {(char*)"SelectVectors", PyvtkAbstractInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   (char*)"V.SelectVectors(int, string)\nC++: void SelectVectors(int fieldAssociation,\n    const char *fieldName)\n\nthe association type (see vtkDataObject::FieldAssociations) and\nthe name of the velocity data field\n"},
  {(char*)"SetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector, METH_VARARGS,
   (char*)"V.SetNormalizeVector(bool)\nC++: void SetNormalizeVector(bool a)\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {(char*)"GetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector, METH_VARARGS,
   (char*)"V.GetNormalizeVector() -> bool\nC++: bool GetNormalizeVector()\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {(char*)"CopyParameters", PyvtkAbstractInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   (char*)"V.CopyParameters(vtkAbstractInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from)\n\nImport parameters. Sub-classes can add more after chaining.\n"},
  {(char*)"FunctionValues", PyvtkAbstractInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {(char*)"ClearLastCellId", PyvtkAbstractInterpolatedVelocityField_ClearLastCellId, METH_VARARGS,
   (char*)"V.ClearLastCellId()\nC++: void ClearLastCellId()\n\nSet the last cell id to -1 to incur a global cell search for the\nnext point.\n"},
  {(char*)"GetLastWeights", PyvtkAbstractInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   (char*)"V.GetLastWeights([float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractInterpolatedVelocityField_Methods,
    "vtkAbstractInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkAbstractInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkAbstractInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractInterpolatedVelocityField - An abstract class for\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkAbstractInterpolatedVelocityField acts as a continuous velocity\nfield\n by performing cell interpolation on the underlying vtkDataSet. This\nis an\n abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n4\n (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\nscheme,\n every time an evaluation is performed, the target cell containing\npoint\n (x,y,z) needs to be found by call",
    "ing FindCell(), via either\nvtkDataSet or\n vtkAbstractCelllocator's sub-classes (vtkCellLocator &\nvtkModifiedBSPTree).\n As it incurs a large cost, one (for\nvtkCellLocatorInterpolatedVelocityField\n via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\nvia\n vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\nlevels\n of cell caching may be exploited to increase the perfo",
    "rmance.\n\n\n For vtkInterpolatedVelocityField, level #0 begins with intra-cell\ncaching.\n Specifically if the previous cell is valid and the next point is\nstill in\n it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\ncreated\n parametric coordinates & weights ), the function values can be\ninterpolated\n and only vtkCell::EvaluatePosition() is invoked. If this fails, then\nlevel #1\n foll",
    "ows by inter-cell search for the target cell that contains the\nnext point.\n By an inter-cell search, the previous cell provides an important\nclue or serves\n as an immediate neighbor to aid in locating the target cell via\nvtkPointSet::\n FindCell(). If this still fails, a global cell location / search is\ninvoked via\n vtkPointSet::FindCell(). Here regardless of either inter-cell or\nglobal search,\n vt",
    "kPointLocator is in fact employed (for datasets of type\nvtkPointSet only, note\n vtkImageData and vtkRectilinearGrid are able to provide rapid and\nrobust cell\n location due to the simple mesh topology) as a crucial tool\nunderlying the cell\n locator. However, the use of vtkPointLocator makes\nvtkInterpolatedVelocityField\n non-robust in cell location for vtkPointSet.\n\n\n For vtkCellLocatorInterpolatedV",
    "elocityField, the only caching (level\n#0) works\n by intra-cell trial. In case of failure, a global search for the\ntarget cell is\n invoked via vtkAbstractCellLocator::FindCell() and the actual work\nis done by\n either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\nvtkPointSet\n only, while vtkImageData and vtkRectilinearGrid themselves are able\nto provide\n fast robust cell location). With",
    "out the involvement of\nvtkPointLocator, robust\n cell location is achieved for vtkPointSet.\n\nCaveats:\n\n\n vtkAbstractInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVelocityF",
    "ield vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

