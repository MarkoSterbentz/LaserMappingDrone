// python wrapper for vtkPVMetaSliceDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMetaSliceDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMetaSliceDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMetaSliceDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew
extern "C" { PyObject *PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew
#endif

static const char **PyvtkPVMetaSliceDataSet_Doc();


static PyObject *
PyvtkPVMetaSliceDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMetaSliceDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMetaSliceDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMetaSliceDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMetaSliceDataSet::NewInstance());

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
PyvtkPVMetaSliceDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMetaSliceDataSet *tempr = vtkPVMetaSliceDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_PreserveInputCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveInputCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PreserveInputCells(temp0);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::PreserveInputCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->SetActiveFilter(temp0) :
      op->vtkPVMetaSliceDataSet::SetActiveFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaSliceDataSet_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaSliceDataSet *op = static_cast<vtkPVMetaSliceDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTriangles(temp0);
      }
    else
      {
      op->vtkPVMetaSliceDataSet::SetGenerateTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMetaSliceDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMetaSliceDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMetaSliceDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMetaSliceDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMetaSliceDataSet\nC++: vtkPVMetaSliceDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMetaSliceDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMetaSliceDataSet\nC++: vtkPVMetaSliceDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PreserveInputCells", PyvtkPVMetaSliceDataSet_PreserveInputCells, METH_VARARGS,
   (char*)"V.PreserveInputCells(int)\nC++: void PreserveInputCells(int keepCellAsIs)\n\nEnable or disable the Extract Cells By Regions.\n"},
  {(char*)"SetActiveFilter", PyvtkPVMetaSliceDataSet_SetActiveFilter, METH_VARARGS,
   (char*)"V.SetActiveFilter(int) -> vtkAlgorithm\nC++: virtual vtkAlgorithm *SetActiveFilter(int index)\n\nOverride it so we can change the output type of the filter\n"},
  {(char*)"SetImplicitFunction", PyvtkPVMetaSliceDataSet_SetImplicitFunction, METH_VARARGS,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: void SetImplicitFunction(vtkImplicitFunction *func)\n\n"},
  {(char*)"SetCutFunction", PyvtkPVMetaSliceDataSet_SetCutFunction, METH_VARARGS,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: void SetCutFunction(vtkImplicitFunction *func)\n\nExpose method from vtkCutter\n"},
  {(char*)"SetNumberOfContours", PyvtkPVMetaSliceDataSet_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int nbContours)\n\nExpose method from vtkCutter\n"},
  {(char*)"SetValue", PyvtkPVMetaSliceDataSet_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int index, double value)\n\nExpose method from vtkCutter\n"},
  {(char*)"SetGenerateTriangles", PyvtkPVMetaSliceDataSet_SetGenerateTriangles, METH_VARARGS,
   (char*)"V.SetGenerateTriangles(int)\nC++: void SetGenerateTriangles(int status)\n\nExpose method from vtkCutter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMetaSliceDataSet_StaticNew()
{
  return vtkPVMetaSliceDataSet::New();
}

PyObject *PyVTKClass_vtkPVMetaSliceDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMetaSliceDataSet_StaticNew,
    PyvtkPVMetaSliceDataSet_Methods,
    "vtkPVMetaSliceDataSet", modulename,
    NULL, NULL,
    PyvtkPVMetaSliceDataSet_Doc(),
    PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(modulename));
  return cls;
}

const char **PyvtkPVMetaSliceDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkPVMetaSliceDataSet -\n\n",
    "Superclass: vtkPVDataSetAlgorithmSelectorFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMetaSliceDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMetaSliceDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMetaSliceDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

