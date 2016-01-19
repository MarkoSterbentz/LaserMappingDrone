// python wrapper for vtkExtractSelectedThresholds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractSelectedThresholds.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractSelectedThresholdsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedThresholds_Doc();


static PyObject *
PyvtkExtractSelectedThresholds_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractSelectedThresholds::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedThresholds::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelectedThresholds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedThresholds::NewInstance());

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
PyvtkExtractSelectedThresholds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractSelectedThresholds *tempr = vtkExtractSelectedThresholds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  vtkIdType temp1;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  int temp1;
  vtkIdType temp2;
  vtkDataArray *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
    {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  vtkIdType temp1;
  vtkDataArray *temp2 = NULL;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
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
    temp3 = new int[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new int[2*size4];
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
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkExtractSelectedThresholds_EvaluateValue_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  int temp1;
  vtkIdType temp2;
  vtkDataArray *temp3 = NULL;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  int *temp6 = NULL;
  int *save6 = NULL;
  int small6[8];
  int size6 = 0;
  PyObject *result = NULL;

  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new int[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new int[2*size5];
    }
  save5 = &temp5[size5];
  size6 = ap.GetArgSize(6);
  temp6 = small6;
  if (size6 > 4)
    {
    temp6 = new int[2*size6];
    }
  save6 = &temp6[size6];

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s1(self, args);
    case 4:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s2(self, args);
    case 6:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s3(self, args);
    case 7:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateValue");
  return NULL;
}


static PyMethodDef PyvtkExtractSelectedThresholds_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedThresholds_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedThresholds_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedThresholds_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedThresholds_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateValue", PyvtkExtractSelectedThresholds_EvaluateValue, METH_VARARGS | METH_STATIC,
   (char*)"V.EvaluateValue(vtkDataArray, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims)\nV.EvaluateValue(vtkDataArray, int, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *array,\n    int array_component_no, vtkIdType id, vtkDataArray *lims)\nV.EvaluateValue(vtkDataArray, int, vtkDataArray, [int, ...], [int,\n     ...], [int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims, int *AboveCount, int *BelowCount,\n    int *InsideCount)\nV.EvaluateValue(vtkDataArray, int, int, vtkDataArray, [int, ...],\n    [int, ...], [int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars,\n    int array_component_no, vtkIdType id, vtkDataArray *lims,\n    int *AboveCount, int *BelowCount, int *InsideCount)\n\nFunction for determining whether a value in a data array passes\nthe threshold test(s) provided in lims.  Returns 1 if the value\npasses at least one of the threshold tests. If scalars is NULL,\nthen the id itself is used as the scalar value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedThresholds_StaticNew()
{
  return vtkExtractSelectedThresholds::New();
}

PyObject *PyVTKClass_vtkExtractSelectedThresholdsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedThresholds_StaticNew,
    PyvtkExtractSelectedThresholds_Methods,
    "vtkExtractSelectedThresholds", modulename,
    NULL, NULL,
    PyvtkExtractSelectedThresholds_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedThresholds_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedThresholds - extract a cells or points from a\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelectedThresholds extracts all cells and points with\nattribute values that lie within a vtkSelection's THRESHOLD contents.\nThe selecion can specify to threshold a particular array within\neither the point or cell attribute data of the input. This is similar\nto vtkThreshold but allows mutliple thresholds ranges. This filter\nadds a scalar array called vtkOriginalCellIds that says what inpu",
    "t\ncell produced each output cell. This is an example of a Pedigree ID\nwhich helps to trace back results.\n\nSee Also:\n\nvtkSelection vtkExtractSelection vtkThreshold\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedThresholds(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedThresholdsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedThresholds", o) != 0)
    {
    Py_DECREF(o);
    }

}

