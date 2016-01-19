// python wrapper for vtkMultiBlockDataGroupFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiBlockDataGroupFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiBlockDataGroupFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiBlockDataGroupFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkMultiBlockDataGroupFilter_Doc();


static PyObject *
PyvtkMultiBlockDataGroupFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataGroupFilter *op = static_cast<vtkMultiBlockDataGroupFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiBlockDataGroupFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataGroupFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataGroupFilter *op = static_cast<vtkMultiBlockDataGroupFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockDataGroupFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataGroupFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataGroupFilter *op = static_cast<vtkMultiBlockDataGroupFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiBlockDataGroupFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockDataGroupFilter::NewInstance());

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
PyvtkMultiBlockDataGroupFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiBlockDataGroupFilter *tempr = vtkMultiBlockDataGroupFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataGroupFilter_AddInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataGroupFilter *op = static_cast<vtkMultiBlockDataGroupFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputData(temp0);
      }
    else
      {
      op->vtkMultiBlockDataGroupFilter::AddInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataGroupFilter_AddInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataGroupFilter *op = static_cast<vtkMultiBlockDataGroupFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputData(temp0, temp1);
      }
    else
      {
      op->vtkMultiBlockDataGroupFilter::AddInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataGroupFilter_AddInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMultiBlockDataGroupFilter_AddInputData_s1(self, args);
    case 2:
      return PyvtkMultiBlockDataGroupFilter_AddInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputData");
  return NULL;
}


static PyMethodDef PyvtkMultiBlockDataGroupFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockDataGroupFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockDataGroupFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockDataGroupFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiBlockDataGroupFilter\nC++: vtkMultiBlockDataGroupFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockDataGroupFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockDataGroupFilter\nC++: vtkMultiBlockDataGroupFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputData", PyvtkMultiBlockDataGroupFilter_AddInputData, METH_VARARGS,
   (char*)"V.AddInputData(vtkDataObject)\nC++: void AddInputData(vtkDataObject *)\nV.AddInputData(int, vtkDataObject)\nC++: void AddInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use AddInputConnection() to\nsetup a pipeline connection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockDataGroupFilter_StaticNew()
{
  return vtkMultiBlockDataGroupFilter::New();
}

PyObject *PyVTKClass_vtkMultiBlockDataGroupFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockDataGroupFilter_StaticNew,
    PyvtkMultiBlockDataGroupFilter_Methods,
    "vtkMultiBlockDataGroupFilter", modulename,
    NULL, NULL,
    PyvtkMultiBlockDataGroupFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiBlockDataGroupFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockDataGroupFilter - collects multiple inputs into one\nmulti-group dataset\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkMultiBlockDataGroupFilter is an M to 1 filter that merges multiple\ninput into one multi-group dataset. It will assign each input to one\ngroup of the multi-group dataset and will assign each update piece as\na sub-block. For example, if there are two inputs and four update\npieces, the output contains two groups with four datasets each.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockDataGroupFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockDataGroupFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockDataGroupFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

