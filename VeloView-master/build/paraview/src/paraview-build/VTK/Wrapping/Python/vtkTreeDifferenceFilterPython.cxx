// python wrapper for vtkTreeDifferenceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeDifferenceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeDifferenceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeDifferenceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkTreeDifferenceFilter_Doc();


static PyObject *
PyvtkTreeDifferenceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeDifferenceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeDifferenceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeDifferenceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeDifferenceFilter::NewInstance());

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
PyvtkTreeDifferenceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeDifferenceFilter *tempr = vtkTreeDifferenceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdArrayName(temp0);
      }
    else
      {
      op->vtkTreeDifferenceFilter::SetIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetIdArrayName() :
      op->vtkTreeDifferenceFilter::GetIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetComparisonArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComparisonArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComparisonArrayName(temp0);
      }
    else
      {
      op->vtkTreeDifferenceFilter::SetComparisonArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetComparisonArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComparisonArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetComparisonArrayName() :
      op->vtkTreeDifferenceFilter::GetComparisonArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkTreeDifferenceFilter::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkTreeDifferenceFilter::GetOutputArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetComparisonArrayIsVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComparisonArrayIsVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComparisonArrayIsVertexData(temp0);
      }
    else
      {
      op->vtkTreeDifferenceFilter::SetComparisonArrayIsVertexData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetComparisonArrayIsVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComparisonArrayIsVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetComparisonArrayIsVertexData() :
      op->vtkTreeDifferenceFilter::GetComparisonArrayIsVertexData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeDifferenceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeDifferenceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeDifferenceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeDifferenceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeDifferenceFilter\nC++: vtkTreeDifferenceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeDifferenceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeDifferenceFilter\nC++: vtkTreeDifferenceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIdArrayName", PyvtkTreeDifferenceFilter_SetIdArrayName, METH_VARARGS,
   (char*)"V.SetIdArrayName(string)\nC++: void SetIdArrayName(char *)\n\nSet/Get the name of the identifier array in the trees'\nVertexData. This array is used to find corresponding vertices in\nthe two trees. If this array name is not set, then we assume that\nthe vertices in the two trees to compare have corresponding\nvtkIdTypes. Otherwise, the named array must be a vtkStringArray.\nThe identifier array does not necessarily have to specify a name\nfor each vertex in the tree.  If some vertices are unnamed, then\nthis filter will assign correspondence between ancestors of named\nvertices.\n"},
  {(char*)"GetIdArrayName", PyvtkTreeDifferenceFilter_GetIdArrayName, METH_VARARGS,
   (char*)"V.GetIdArrayName() -> string\nC++: char *GetIdArrayName()\n\nSet/Get the name of the identifier array in the trees'\nVertexData. This array is used to find corresponding vertices in\nthe two trees. If this array name is not set, then we assume that\nthe vertices in the two trees to compare have corresponding\nvtkIdTypes. Otherwise, the named array must be a vtkStringArray.\nThe identifier array does not necessarily have to specify a name\nfor each vertex in the tree.  If some vertices are unnamed, then\nthis filter will assign correspondence between ancestors of named\nvertices.\n"},
  {(char*)"SetComparisonArrayName", PyvtkTreeDifferenceFilter_SetComparisonArrayName, METH_VARARGS,
   (char*)"V.SetComparisonArrayName(string)\nC++: void SetComparisonArrayName(char *)\n\nSet/Get the name of the array that we're comparing between the\ntwo trees. The named array must be a vtkDoubleArray.\n"},
  {(char*)"GetComparisonArrayName", PyvtkTreeDifferenceFilter_GetComparisonArrayName, METH_VARARGS,
   (char*)"V.GetComparisonArrayName() -> string\nC++: char *GetComparisonArrayName()\n\nSet/Get the name of the array that we're comparing between the\ntwo trees. The named array must be a vtkDoubleArray.\n"},
  {(char*)"SetOutputArrayName", PyvtkTreeDifferenceFilter_SetOutputArrayName, METH_VARARGS,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nSet/Get the name of a new vtkDoubleArray that will contain the\nresults of the comparison between the two trees.  This new array\nwill be added to the input tree's VertexData or EdgeData, based\non the value of ComparisonArrayIsVertexData.  If this method is\nnot called, the new vtkDoubleArray will be named \"difference\" by\ndefault.\n"},
  {(char*)"GetOutputArrayName", PyvtkTreeDifferenceFilter_GetOutputArrayName, METH_VARARGS,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nSet/Get the name of a new vtkDoubleArray that will contain the\nresults of the comparison between the two trees.  This new array\nwill be added to the input tree's VertexData or EdgeData, based\non the value of ComparisonArrayIsVertexData.  If this method is\nnot called, the new vtkDoubleArray will be named \"difference\" by\ndefault.\n"},
  {(char*)"SetComparisonArrayIsVertexData", PyvtkTreeDifferenceFilter_SetComparisonArrayIsVertexData, METH_VARARGS,
   (char*)"V.SetComparisonArrayIsVertexData(bool)\nC++: void SetComparisonArrayIsVertexData(bool a)\n\nSpecify whether the comparison array is within the trees' vertex\ndata or not.  By default, we assume that the array to compare is\nwithin the trees' EdgeData().\n"},
  {(char*)"GetComparisonArrayIsVertexData", PyvtkTreeDifferenceFilter_GetComparisonArrayIsVertexData, METH_VARARGS,
   (char*)"V.GetComparisonArrayIsVertexData() -> bool\nC++: bool GetComparisonArrayIsVertexData()\n\nSpecify whether the comparison array is within the trees' vertex\ndata or not.  By default, we assume that the array to compare is\nwithin the trees' EdgeData().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeDifferenceFilter_StaticNew()
{
  return vtkTreeDifferenceFilter::New();
}

PyObject *PyVTKClass_vtkTreeDifferenceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeDifferenceFilter_StaticNew,
    PyvtkTreeDifferenceFilter_Methods,
    "vtkTreeDifferenceFilter", modulename,
    NULL, NULL,
    PyvtkTreeDifferenceFilter_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeDifferenceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTreeDifferenceFilter - compare two trees\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkTreeDifferenceFilter compares two trees by analyzing a\nvtkDoubleArray. Each tree must have a copy of this array.  A user of\nthis filter should call SetComparisonArrayName to specify the array\nthat should be used as the basis of coparison.  This array can either\nbe part of the trees' EdgeData or VertexData.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeDifferenceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeDifferenceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeDifferenceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

