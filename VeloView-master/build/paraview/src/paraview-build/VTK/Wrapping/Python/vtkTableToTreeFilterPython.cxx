// python wrapper for vtkTableToTreeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableToTreeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToTreeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToTreeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkTableToTreeFilter_Doc();


static PyObject *
PyvtkTableToTreeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToTreeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToTreeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToTreeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToTreeFilter::NewInstance());

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
PyvtkTableToTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToTreeFilter *tempr = vtkTableToTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToTreeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToTreeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToTreeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToTreeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToTreeFilter\nC++: vtkTableToTreeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToTreeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToTreeFilter\nC++: vtkTableToTreeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToTreeFilter_StaticNew()
{
  return vtkTableToTreeFilter::New();
}

PyObject *PyVTKClass_vtkTableToTreeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToTreeFilter_StaticNew,
    PyvtkTableToTreeFilter_Methods,
    "vtkTableToTreeFilter", modulename,
    NULL, NULL,
    PyvtkTableToTreeFilter_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToTreeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTableToTreeFilter - Filter that converts a vtkTable to a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkTableToTreeFilter is a filter for converting a vtkTable data\nstructure into a vtkTree datastructure.  Currently, this will convert\nthe table into a star, with each row of the table as a child of a new\nroot node. The columns of the table are passed as node fields of the\ntree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToTreeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToTreeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToTreeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

