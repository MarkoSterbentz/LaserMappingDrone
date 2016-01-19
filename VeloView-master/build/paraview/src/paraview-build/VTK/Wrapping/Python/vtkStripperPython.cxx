// python wrapper for vtkStripper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStripper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStripper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStripperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStripper_Doc();


static PyObject *
PyvtkStripper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStripper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStripper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStripper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStripper::NewInstance());

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
PyvtkStripper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStripper *tempr = vtkStripper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLength(temp0);
      }
    else
      {
      op->vtkStripper::SetMaximumLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLengthMinValue() :
      op->vtkStripper::GetMaximumLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLengthMaxValue() :
      op->vtkStripper::GetMaximumLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLength() :
      op->vtkStripper::GetMaximumLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataAsFieldDataOn();
      }
    else
      {
      op->vtkStripper::PassCellDataAsFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataAsFieldDataOff();
      }
    else
      {
      op->vtkStripper::PassCellDataAsFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassCellDataAsFieldData(temp0);
      }
    else
      {
      op->vtkStripper::SetPassCellDataAsFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassCellDataAsFieldData() :
      op->vtkStripper::GetPassCellDataAsFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkStripper::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkStripper::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkStripper::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkStripper::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughPointIds(temp0);
      }
    else
      {
      op->vtkStripper::SetPassThroughPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkStripper::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOn();
      }
    else
      {
      op->vtkStripper::PassThroughPointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOff();
      }
    else
      {
      op->vtkStripper::PassThroughPointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStripper_Methods[] = {
  {(char*)"GetClassName", PyvtkStripper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStripper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStripper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStripper\nC++: vtkStripper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStripper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStripper\nC++: vtkStripper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumLength", PyvtkStripper_SetMaximumLength, METH_VARARGS,
   (char*)"V.SetMaximumLength(int)\nC++: void SetMaximumLength(int)\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLengthMinValue", PyvtkStripper_GetMaximumLengthMinValue, METH_VARARGS,
   (char*)"V.GetMaximumLengthMinValue() -> int\nC++: int GetMaximumLengthMinValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLengthMaxValue", PyvtkStripper_GetMaximumLengthMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumLengthMaxValue() -> int\nC++: int GetMaximumLengthMaxValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLength", PyvtkStripper_GetMaximumLength, METH_VARARGS,
   (char*)"V.GetMaximumLength() -> int\nC++: int GetMaximumLength()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"PassCellDataAsFieldDataOn", PyvtkStripper_PassCellDataAsFieldDataOn, METH_VARARGS,
   (char*)"V.PassCellDataAsFieldDataOn()\nC++: void PassCellDataAsFieldDataOn()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {(char*)"PassCellDataAsFieldDataOff", PyvtkStripper_PassCellDataAsFieldDataOff, METH_VARARGS,
   (char*)"V.PassCellDataAsFieldDataOff()\nC++: void PassCellDataAsFieldDataOff()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {(char*)"SetPassCellDataAsFieldData", PyvtkStripper_SetPassCellDataAsFieldData, METH_VARARGS,
   (char*)"V.SetPassCellDataAsFieldData(int)\nC++: void SetPassCellDataAsFieldData(int a)\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {(char*)"GetPassCellDataAsFieldData", PyvtkStripper_GetPassCellDataAsFieldData, METH_VARARGS,
   (char*)"V.GetPassCellDataAsFieldData() -> int\nC++: int GetPassCellDataAsFieldData()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkStripper_SetPassThroughCellIds, METH_VARARGS,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkStripper_GetPassThroughCellIds, METH_VARARGS,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkStripper_PassThroughCellIdsOn, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkStripper_PassThroughCellIdsOff, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"SetPassThroughPointIds", PyvtkStripper_SetPassThroughPointIds, METH_VARARGS,
   (char*)"V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int a)\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"GetPassThroughPointIds", PyvtkStripper_GetPassThroughPointIds, METH_VARARGS,
   (char*)"V.GetPassThroughPointIds() -> int\nC++: int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughPointIdsOn", PyvtkStripper_PassThroughPointIdsOn, METH_VARARGS,
   (char*)"V.PassThroughPointIdsOn()\nC++: void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughPointIdsOff", PyvtkStripper_PassThroughPointIdsOff, METH_VARARGS,
   (char*)"V.PassThroughPointIdsOff()\nC++: void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStripper_StaticNew()
{
  return vtkStripper::New();
}

PyObject *PyVTKClass_vtkStripperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStripper_StaticNew,
    PyvtkStripper_Methods,
    "vtkStripper", modulename,
    NULL, NULL,
    PyvtkStripper_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStripper_Doc()
{
  static const char *docstring[] = {
    "vtkStripper - create triangle strips and/or poly-lines\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Caveats:\n\nIf triangle strips or poly-lines exist in the input data they will be\npassed through to the output data. This filter will only construct\ntriangle strips if triangle polygons are available; and will only\nconstruct poly-lines if lines are available.\n\nSee Also:\n\nvtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStripper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStripperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStripper", o) != 0)
    {
    Py_DECREF(o);
    }

}

