// python wrapper for vtkCachingInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCachingInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkCachingInterpolatedVelocityField_Doc();


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCachingInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCachingInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCachingInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCachingInterpolatedVelocityField::NewInstance());

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
PyvtkCachingInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCachingInterpolatedVelocityField *tempr = vtkCachingInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkCachingInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkCachingInterpolatedVelocityField_InsideTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->InsideTest(temp0) :
      op->vtkCachingInterpolatedVelocityField::InsideTest(temp0));

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
PyvtkCachingInterpolatedVelocityField_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int temp0;
  vtkDataSet *temp1 = NULL;
  bool temp2 = false;
  vtkAbstractCellLocator *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractCellLocator"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SetDataSet(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkCachingInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectVectors(temp0);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastCellInfo(temp0, temp1);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SetLastCellInfo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCellInfo();
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::ClearLastCellInfo();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->vtkCachingInterpolatedVelocityField::GetLastWeights(temp0));

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
PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->vtkCachingInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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
PyvtkCachingInterpolatedVelocityField_GetCellCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetCellCacheHit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataSetCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetDataSetCacheHit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkCachingInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCachingInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkCachingInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCachingInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCachingInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCachingInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"FunctionValues", PyvtkCachingInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate the velocity field, f={u,v,w}, at {x, y, z}. returns 1\nif valid, 0 if test failed\n"},
  {(char*)"InsideTest", PyvtkCachingInterpolatedVelocityField_InsideTest, METH_VARARGS,
   (char*)"V.InsideTest([float, ...]) -> int\nC++: virtual int InsideTest(double *x)\n\nEvaluate the velocity field, f={u,v,w}, at {x, y, z}. returns 1\nif valid, 0 if test failed\n"},
  {(char*)"SetDataSet", PyvtkCachingInterpolatedVelocityField_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(int, vtkDataSet, bool, vtkAbstractCellLocator)\nC++: virtual void SetDataSet(int I, vtkDataSet *dataset,\n    bool staticdataset, vtkAbstractCellLocator *locator)\n\nAdd a dataset used by the interpolation function evaluation.\n"},
  {(char*)"GetVectorsSelection", PyvtkCachingInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SelectVectors", PyvtkCachingInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SetLastCellInfo", PyvtkCachingInterpolatedVelocityField_SetLastCellInfo, METH_VARARGS,
   (char*)"V.SetLastCellInfo(int, int)\nC++: void SetLastCellInfo(vtkIdType c, int datasetindex)\n\nReturn the cell id cached from last evaluation.\n"},
  {(char*)"ClearLastCellInfo", PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo, METH_VARARGS,
   (char*)"V.ClearLastCellInfo()\nC++: void ClearLastCellInfo()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"GetLastWeights", PyvtkCachingInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   (char*)"V.GetLastWeights([float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {(char*)"GetCellCacheHit", PyvtkCachingInterpolatedVelocityField_GetCellCacheHit, METH_VARARGS,
   (char*)"V.GetCellCacheHit() -> int\nC++: int GetCellCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetDataSetCacheHit", PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit, METH_VARARGS,
   (char*)"V.GetDataSetCacheHit() -> int\nC++: int GetDataSetCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetCacheMiss", PyvtkCachingInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nCaching statistics.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCachingInterpolatedVelocityField_StaticNew()
{
  return vtkCachingInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCachingInterpolatedVelocityField_StaticNew,
    PyvtkCachingInterpolatedVelocityField_Methods,
    "vtkCachingInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkCachingInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkCachingInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkCachingInterpolatedVelocityField - Interface for obtaining\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkCachingInterpolatedVelocityField acts as a continuous velocity\nfield by performing cell interpolation on the underlying vtkDataSet.\nThis is a concrete sub-class of vtkFunctionSet with\nNumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n(u,v,w). Normally, every time an evaluation is performed, the cell\nwhich contains the point (x,y,z) has to be found by calling FindCell.\nThis is",
    " a computationally expensive operation. In certain cases, the\ncell search can be avoided or shortened by providing a guess for the\ncell id. For example, in streamline integration, the next evaluation\nis usually in the same or a neighbour cell. For this reason,\nvtkCachingInterpolatedVelocityField stores the last cell id. If\ncaching is turned on, it uses this id as the starting point.\n\nCaveats:\n\nvtk",
    "CachingInterpolatedVelocityField is not thread safe. A new\ninstance should be created by each thread.\n\nSee Also:\n\nvtkFunctionSet vtkStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCachingInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCachingInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

