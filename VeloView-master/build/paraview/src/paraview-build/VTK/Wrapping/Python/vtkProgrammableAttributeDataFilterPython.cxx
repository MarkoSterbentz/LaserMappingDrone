// python wrapper for vtkProgrammableAttributeDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProgrammableAttributeDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProgrammableAttributeDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProgrammableAttributeDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProgrammableAttributeDataFilter_Doc();


static PyObject *
PyvtkProgrammableAttributeDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProgrammableAttributeDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProgrammableAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableAttributeDataFilter::NewInstance());

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
PyvtkProgrammableAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProgrammableAttributeDataFilter *tempr = vtkProgrammableAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkProgrammableAttributeDataFilter::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkProgrammableAttributeDataFilter::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkProgrammableAttributeDataFilter::GetInputList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkProgrammableAttributeDataFilter::SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkProgrammableAttributeDataFilter::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableAttributeDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableAttributeDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableAttributeDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableAttributeDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProgrammableAttributeDataFilter\nC++: vtkProgrammableAttributeDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableAttributeDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableAttributeDataFilter\nC++: vtkProgrammableAttributeDataFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"AddInput", PyvtkProgrammableAttributeDataFilter_AddInput, METH_VARARGS,
   (char*)"V.AddInput(vtkDataSet)\nC++: void AddInput(vtkDataSet *in)\n\nAdd a dataset to the list of data to process.\n"},
  {(char*)"RemoveInput", PyvtkProgrammableAttributeDataFilter_RemoveInput, METH_VARARGS,
   (char*)"V.RemoveInput(vtkDataSet)\nC++: void RemoveInput(vtkDataSet *in)\n\nRemove a dataset from the list of data to process.\n"},
  {(char*)"GetInputList", PyvtkProgrammableAttributeDataFilter_GetInputList, METH_VARARGS,
   (char*)"V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs.\n"},
  {(char*)"SetExecuteMethod", PyvtkProgrammableAttributeDataFilter_SetExecuteMethod, METH_VARARGS,
   (char*)"V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to operate on the point attribute\ndata. Note that the function takes a single (void *) argument.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableAttributeDataFilter_StaticNew()
{
  return vtkProgrammableAttributeDataFilter::New();
}

PyObject *PyVTKClass_vtkProgrammableAttributeDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableAttributeDataFilter_StaticNew,
    PyvtkProgrammableAttributeDataFilter_Methods,
    "vtkProgrammableAttributeDataFilter", modulename,
    NULL, NULL,
    PyvtkProgrammableAttributeDataFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProgrammableAttributeDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableAttributeDataFilter - manipulate attribute (cell and\npoint) data via a user-specified function\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProgrammableAttributeDataFilter is a filter that allows you to\nwrite a custom procedure to manipulate attribute data - either point\nor cell data. For example, you could generate scalars based on a\ncomplex formula; convert vectors to normals; compute scalar values as\na function of vectors, texture coords, and/or any other point data\nattribute; and so on. The filter takes multiple inputs (input p",
    "lus an\nauxiliary input list), so you can write procedures that combine\nseveral dataset point attributes. Note that the output of the filter\nis the same type (topology/geometry) as the input.\n\nThe filter works as follows. It operates like any other filter (i.e.,\nchecking and managing modified and execution times, processing\nUpdate() and Execute() methods, managing release of data, etc.), but\nthe di",
    "fference is that the Execute() method simply invokes a\nuser-specified function with an optional (void *) argument (typically\nthe \"this\" pointer in C++). It is also possible to specify a function\nto delete the argument via ExecuteMethodArgDelete().\n\nTo use the filter, you write a procedure to process the input\ndatasets, process the data, and generate output data. Typically, this\nmeans grabbing the ",
    "input point or cell data (using GetInput() and\nmaybe GetInputList()), operating on it (creating new point and cell\nattributes such as scalars, vectors, etc.), and then setting the\npoint and/or cell attributes in the output dataset (you'll need to\nuse GetOutput() to access the output). (Note: besides C++, it is\npossible to do the same thing in Tcl, Java, or other languages that\nwrap the C++ core.) ",
    "Remember, proper filter protocol requires that\nyou don't modify the input data - you create new output data from the\ninput.\n\nCaveats:\n\nThis filter operates on any combination of the filter input plus a\nlist of additional inputs (at a minimum you must set the filter input\nvia SetInput()).  It is up to you check whether the input is valid,\nand to insure that the output is valid. Also, you have to wr",
    "ite the\ncontrol structure for the traversal and operation on the point and\ncell attribute data.\n\nBy default the output point and cell data will be copied through from\nthe input point data (using reference counting).  You can control\nthis using the output's CopyAllOff() flag, or by using individual\nflags for each point data field (i.e., scalars, vectors, etc.)\n\nThe output of this filter is the abst",
    "ract type vtkDataSet, even if\nyour input is a concrete type like vtkPolyData. Thus you may need to\nuse vtkCastToConcrete to obtain the output as a particular concrete\ntype, or one of the special methods of the superclass (e.g.,\nvtkDataSetAlgorithm::GetPolyDataOutput) to retrieve output of the\ncorrect type.\n\nThe filter correctly manages modified time and network execution in\nmost cases. However, if",
    " you change the definition of the filter\nfunction, you'll want to send a manual Modified() method to the\nfilter to force it to reexecute.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableAttributeDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableAttributeDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableAttributeDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

