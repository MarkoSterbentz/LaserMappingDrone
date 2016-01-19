// python wrapper for vtkGenericInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkGenericInterpolatedVelocityField_Doc();


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericInterpolatedVelocityField::NewInstance());

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
PyvtkGenericInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericInterpolatedVelocityField *tempr = vtkGenericInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkGenericInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddDataSet(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::AddDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_ClearLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCell();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::ClearLastCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetLastCell() :
      op->vtkGenericInterpolatedVelocityField::GetLastCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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
PyvtkGenericInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkGenericInterpolatedVelocityField::GetCaching());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int temp0;
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
      op->vtkGenericInterpolatedVelocityField::SetCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingOn();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CachingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingOff();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CachingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheHit() :
      op->vtkGenericInterpolatedVelocityField::GetCacheHit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkGenericInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkGenericInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkGenericInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->CopyParameters(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CopyParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericInterpolatedVelocityField\nC++: vtkGenericInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericInterpolatedVelocityField\nC++: vtkGenericInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"FunctionValues", PyvtkGenericInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {(char*)"AddDataSet", PyvtkGenericInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   (char*)"V.AddDataSet(vtkGenericDataSet)\nC++: virtual void AddDataSet(vtkGenericDataSet *dataset)\n\nAdd a dataset used for the implicit function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {(char*)"ClearLastCell", PyvtkGenericInterpolatedVelocityField_ClearLastCell, METH_VARARGS,
   (char*)"V.ClearLastCell()\nC++: void ClearLastCell()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"GetLastCell", PyvtkGenericInterpolatedVelocityField_GetLastCell, METH_VARARGS,
   (char*)"V.GetLastCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetLastCell()\n\nReturn the cell cached from last evaluation.\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights cached from last evaluation if\nthe cached cell is valid (returns 1). Otherwise, it does not\nchange w and returns 0.\n"},
  {(char*)"GetCaching", PyvtkGenericInterpolatedVelocityField_GetCaching, METH_VARARGS,
   (char*)"V.GetCaching() -> int\nC++: int GetCaching()\n\nTurn caching on/off.\n"},
  {(char*)"SetCaching", PyvtkGenericInterpolatedVelocityField_SetCaching, METH_VARARGS,
   (char*)"V.SetCaching(int)\nC++: void SetCaching(int a)\n\nTurn caching on/off.\n"},
  {(char*)"CachingOn", PyvtkGenericInterpolatedVelocityField_CachingOn, METH_VARARGS,
   (char*)"V.CachingOn()\nC++: void CachingOn()\n\nTurn caching on/off.\n"},
  {(char*)"CachingOff", PyvtkGenericInterpolatedVelocityField_CachingOff, METH_VARARGS,
   (char*)"V.CachingOff()\nC++: void CachingOff()\n\nTurn caching on/off.\n"},
  {(char*)"GetCacheHit", PyvtkGenericInterpolatedVelocityField_GetCacheHit, METH_VARARGS,
   (char*)"V.GetCacheHit() -> int\nC++: int GetCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetCacheMiss", PyvtkGenericInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nCaching statistics.\n"},
  {(char*)"GetVectorsSelection", PyvtkGenericInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SelectVectors", PyvtkGenericInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"GetLastDataSet", PyvtkGenericInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   (char*)"V.GetLastDataSet() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetLastDataSet()\n\nReturns the last dataset that was visited. Can be used as a first\nguess as to where the next point will be as well as to avoid\nsearching through all datasets to get more information about the\npoint.\n"},
  {(char*)"CopyParameters", PyvtkGenericInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   (char*)"V.CopyParameters(vtkGenericInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkGenericInterpolatedVelocityField *from)\n\nCopy the user set parameters from source. This copies the Caching\nparameters. Sub-classes can add more after chaining.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericInterpolatedVelocityField_StaticNew()
{
  return vtkGenericInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericInterpolatedVelocityField_StaticNew,
    PyvtkGenericInterpolatedVelocityField_Methods,
    "vtkGenericInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkGenericInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkGenericInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkGenericInterpolatedVelocityField - Interface for obtaining\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkGenericInterpolatedVelocityField acts as a continuous velocity\nfield by performing cell interpolation on the underlying vtkDataSet.\nThis is a concrete sub-class of vtkFunctionSet with\nNumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n(u,v,w). Normally, every time an evaluation is performed, the cell\nwhich contains the point (x,y,z) has to be found by calling FindCell.\nThis is",
    " a computationally expansive operation. In certain cases, the\ncell search can be avoided or shortened by providing a guess for the\ncell iterator. For example, in streamline integration, the next\nevaluation is usually in the same or a neighbour cell. For this\nreason, vtkGenericInterpolatedVelocityField stores the last cell\niterator. If caching is turned on, it uses this iterator as the\nstarting poi",
    "nt.\n\nCaveats:\n\nvtkGenericInterpolatedVelocityField is not thread safe. A new\ninstance should be created by each thread.\n\nSee Also:\n\nvtkFunctionSet vtkGenericStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

