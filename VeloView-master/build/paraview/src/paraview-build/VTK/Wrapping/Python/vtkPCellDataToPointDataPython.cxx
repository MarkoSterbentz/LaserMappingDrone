// python wrapper for vtkPCellDataToPointData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPCellDataToPointData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPCellDataToPointData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPCellDataToPointDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCellDataToPointDataNew
extern "C" { PyObject *PyVTKClass_vtkCellDataToPointDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellDataToPointDataNew
#endif

static const char **PyvtkPCellDataToPointData_Doc();


static PyObject *
PyvtkPCellDataToPointData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPCellDataToPointData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCellDataToPointData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPCellDataToPointData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCellDataToPointData::NewInstance());

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
PyvtkPCellDataToPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPCellDataToPointData *tempr = vtkPCellDataToPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkPCellDataToPointData::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPCellDataToPointData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkPCellDataToPointData::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkPCellDataToPointData::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPCellDataToPointData_Methods[] = {
  {(char*)"GetClassName", PyvtkPCellDataToPointData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCellDataToPointData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCellDataToPointData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPCellDataToPointData\nC++: vtkPCellDataToPointData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCellDataToPointData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCellDataToPointData\nC++: vtkPCellDataToPointData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPieceInvariant", PyvtkPCellDataToPointData_SetPieceInvariant, METH_VARARGS,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"GetPieceInvariant", PyvtkPCellDataToPointData_GetPieceInvariant, METH_VARARGS,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"PieceInvariantOn", PyvtkPCellDataToPointData_PieceInvariantOn, METH_VARARGS,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"PieceInvariantOff", PyvtkPCellDataToPointData_PieceInvariantOff, METH_VARARGS,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCellDataToPointData_StaticNew()
{
  return vtkPCellDataToPointData::New();
}

PyObject *PyVTKClass_vtkPCellDataToPointDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCellDataToPointData_StaticNew,
    PyvtkPCellDataToPointData_Methods,
    "vtkPCellDataToPointData", modulename,
    NULL, NULL,
    PyvtkPCellDataToPointData_Doc(),
    PyVTKClass_vtkCellDataToPointDataNew(modulename));
  return cls;
}

const char **PyvtkPCellDataToPointData_Doc()
{
  static const char *docstring[] = {
    "vtkPCellDataToPointData - Compute point arrays from cell arrays.\n\n",
    "Superclass: vtkCellDataToPointData\n\n",
    "Like it super class, this filter averages the cell data around a\npoint to get new point data.  This subclass requests a layer of ghost\ncells to make the results invariant to pieces.  There is a\n\"PieceInvariant\" flag that lets the user change the behavior of the\nfilter to that of its superclass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCellDataToPointData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCellDataToPointDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCellDataToPointData", o) != 0)
    {
    Py_DECREF(o);
    }

}

