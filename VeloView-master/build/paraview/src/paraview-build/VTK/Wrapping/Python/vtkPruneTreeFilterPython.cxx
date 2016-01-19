// python wrapper for vtkPruneTreeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPruneTreeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPruneTreeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPruneTreeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkPruneTreeFilter_Doc();


static PyObject *
PyvtkPruneTreeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPruneTreeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPruneTreeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPruneTreeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPruneTreeFilter::NewInstance());

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
PyvtkPruneTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPruneTreeFilter *tempr = vtkPruneTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_GetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParentVertex() :
      op->vtkPruneTreeFilter::GetParentVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentVertex(temp0);
      }
    else
      {
      op->vtkPruneTreeFilter::SetParentVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_GetShouldPruneParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShouldPruneParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShouldPruneParentVertex() :
      op->vtkPruneTreeFilter::GetShouldPruneParentVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SetShouldPruneParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShouldPruneParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShouldPruneParentVertex(temp0);
      }
    else
      {
      op->vtkPruneTreeFilter::SetShouldPruneParentVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPruneTreeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPruneTreeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPruneTreeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPruneTreeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPruneTreeFilter\nC++: vtkPruneTreeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPruneTreeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPruneTreeFilter\nC++: vtkPruneTreeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetParentVertex", PyvtkPruneTreeFilter_GetParentVertex, METH_VARARGS,
   (char*)"V.GetParentVertex() -> int\nC++: vtkIdType GetParentVertex()\n\nSet the parent vertex of the subtree to remove.\n"},
  {(char*)"SetParentVertex", PyvtkPruneTreeFilter_SetParentVertex, METH_VARARGS,
   (char*)"V.SetParentVertex(int)\nC++: void SetParentVertex(vtkIdType a)\n\nSet the parent vertex of the subtree to remove.\n"},
  {(char*)"GetShouldPruneParentVertex", PyvtkPruneTreeFilter_GetShouldPruneParentVertex, METH_VARARGS,
   (char*)"V.GetShouldPruneParentVertex() -> bool\nC++: bool GetShouldPruneParentVertex()\n\nShould we remove the parent vertex, or just its descendants?\nDefault behavior is to remove the parent vertex.\n"},
  {(char*)"SetShouldPruneParentVertex", PyvtkPruneTreeFilter_SetShouldPruneParentVertex, METH_VARARGS,
   (char*)"V.SetShouldPruneParentVertex(bool)\nC++: void SetShouldPruneParentVertex(bool a)\n\nShould we remove the parent vertex, or just its descendants?\nDefault behavior is to remove the parent vertex.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPruneTreeFilter_StaticNew()
{
  return vtkPruneTreeFilter::New();
}

PyObject *PyVTKClass_vtkPruneTreeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPruneTreeFilter_StaticNew,
    PyvtkPruneTreeFilter_Methods,
    "vtkPruneTreeFilter", modulename,
    NULL, NULL,
    PyvtkPruneTreeFilter_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPruneTreeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPruneTreeFilter - prune a subtree out of a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "Removes a subtree rooted at a particular vertex in a vtkTree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPruneTreeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPruneTreeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPruneTreeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

