// python wrapper for vtkAMRInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
extern "C" { PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
#endif

static const char **PyvtkAMRInterpolatedVelocityField_Doc();


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRInterpolatedVelocityField::NewInstance());

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
PyvtkAMRInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRInterpolatedVelocityField *tempr = vtkAMRInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetAmrDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmrDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetAmrDataSet() :
      op->vtkAMRInterpolatedVelocityField::GetAmrDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetAMRData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  vtkOverlappingAMR *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
    {
    if (ap.IsBound())
      {
      op->SetAMRData(temp0);
      }
    else
      {
      op->vtkAMRInterpolatedVelocityField::SetAMRData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLastDataSetLocation(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::GetLastDataSetLocation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetLastDataSet(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::SetLastDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastCellId(temp0, temp1);
      }
    else
      {
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return NULL;
}



static PyObject *
PyvtkAMRInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkAMRInterpolatedVelocityField_FindGrid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindGrid");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkOverlappingAMR *temp1 = NULL;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = vtkAMRInterpolatedVelocityField::FindGrid(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
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

  return result;
}

static PyMethodDef PyvtkAMRInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRInterpolatedVelocityField\nC++: vtkAMRInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRInterpolatedVelocityField\nC++: vtkAMRInterpolatedVelocityField *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAmrDataSet", PyvtkAMRInterpolatedVelocityField_GetAmrDataSet, METH_VARARGS,
   (char*)"V.GetAmrDataSet() -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *GetAmrDataSet()\n\n"},
  {(char*)"SetAMRData", PyvtkAMRInterpolatedVelocityField_SetAMRData, METH_VARARGS,
   (char*)"V.SetAMRData(vtkOverlappingAMR)\nC++: void SetAMRData(vtkOverlappingAMR *amr)\n\n"},
  {(char*)"GetLastDataSetLocation", PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation, METH_VARARGS,
   (char*)"V.GetLastDataSetLocation(int, int) -> bool\nC++: bool GetLastDataSetLocation(unsigned int &level,\n    unsigned int &id)\n\n"},
  {(char*)"SetLastDataSet", PyvtkAMRInterpolatedVelocityField_SetLastDataSet, METH_VARARGS,
   (char*)"V.SetLastDataSet(int, int) -> bool\nC++: bool SetLastDataSet(int level, int id)\n\n"},
  {(char*)"SetLastCellId", PyvtkAMRInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   (char*)"V.SetLastCellId(int, int)\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\nV.SetLastCellId(int)\nC++: virtual void SetLastCellId(vtkIdType c)\n\n"},
  {(char*)"FunctionValues", PyvtkAMRInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\n"},
  {(char*)"FindGrid", PyvtkAMRInterpolatedVelocityField_FindGrid, METH_VARARGS | METH_STATIC,
   (char*)"V.FindGrid([float, float, float], vtkOverlappingAMR, int, int)\n    -> bool\nC++: static bool FindGrid(double q[3], vtkOverlappingAMR *amrds,\n    unsigned int &level, unsigned int &gridId)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRInterpolatedVelocityField_StaticNew()
{
  return vtkAMRInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkAMRInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRInterpolatedVelocityField_StaticNew,
    PyvtkAMRInterpolatedVelocityField_Methods,
    "vtkAMRInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkAMRInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(modulename));
  return cls;
}

const char **PyvtkAMRInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkAMRInterpolatedVelocityField - A concrete class for obtaining\n\n",
    "Superclass: vtkAbstractInterpolatedVelocityField\n\n",
    "The main functionality supported here is the point location inside\nvtkOverlappingAMR data set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

