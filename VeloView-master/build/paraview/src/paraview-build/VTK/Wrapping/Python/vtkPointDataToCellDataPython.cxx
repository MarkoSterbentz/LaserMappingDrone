// python wrapper for vtkPointDataToCellData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointDataToCellData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointDataToCellData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointDataToCellDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkPointDataToCellData_Doc();


static PyObject *
PyvtkPointDataToCellData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointDataToCellData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointDataToCellData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointDataToCellData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointDataToCellData::NewInstance());

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
PyvtkPointDataToCellData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointDataToCellData *tempr = vtkPointDataToCellData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassPointData(temp0);
      }
    else
      {
      op->vtkPointDataToCellData::SetPassPointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkPointDataToCellData::GetPassPointData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointDataOn();
      }
    else
      {
      op->vtkPointDataToCellData::PassPointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointDataOff();
      }
    else
      {
      op->vtkPointDataToCellData::PassPointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointDataToCellData_Methods[] = {
  {(char*)"GetClassName", PyvtkPointDataToCellData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointDataToCellData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointDataToCellData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointDataToCellData\nC++: vtkPointDataToCellData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointDataToCellData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointDataToCellData\nC++: vtkPointDataToCellData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassPointData", PyvtkPointDataToCellData_SetPassPointData, METH_VARARGS,
   (char*)"V.SetPassPointData(int)\nC++: void SetPassPointData(int a)\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"GetPassPointData", PyvtkPointDataToCellData_GetPassPointData, METH_VARARGS,
   (char*)"V.GetPassPointData() -> int\nC++: int GetPassPointData()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"PassPointDataOn", PyvtkPointDataToCellData_PassPointDataOn, METH_VARARGS,
   (char*)"V.PassPointDataOn()\nC++: void PassPointDataOn()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"PassPointDataOff", PyvtkPointDataToCellData_PassPointDataOff, METH_VARARGS,
   (char*)"V.PassPointDataOff()\nC++: void PassPointDataOff()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointDataToCellData_StaticNew()
{
  return vtkPointDataToCellData::New();
}

PyObject *PyVTKClass_vtkPointDataToCellDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointDataToCellData_StaticNew,
    PyvtkPointDataToCellData_Methods,
    "vtkPointDataToCellData", modulename,
    NULL, NULL,
    PyvtkPointDataToCellData_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointDataToCellData_Doc()
{
  static const char *docstring[] = {
    "vtkPointDataToCellData - map point data to cell data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkPointDataToCellData is a filter that transforms point data (i.e.,\ndata specified per point) into cell data (i.e., data specified per\ncell). The method of transformation is based on averaging the data\nvalues of all points defining a particular cell. Optionally, the\ninput point data can be passed through to the output as well.\n\nCaveats:\n\nThis filter is an abstract filter, that is, the output is a",
    "n abstract\ntype (i.e., vtkDataSet). Use the convenience methods (e.g.,\nGetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\ntype of output you want.\n\nSee Also:\n\nvtkPointData vtkCellData vtkCellDataToPointData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointDataToCellData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointDataToCellDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointDataToCellData", o) != 0)
    {
    Py_DECREF(o);
    }

}

