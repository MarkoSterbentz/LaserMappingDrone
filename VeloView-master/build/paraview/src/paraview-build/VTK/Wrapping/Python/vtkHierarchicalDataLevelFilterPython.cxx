// python wrapper for vtkHierarchicalDataLevelFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalDataLevelFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalDataLevelFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalDataLevelFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLevelIdScalarsNew
extern "C" { PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *); }
#define DECLARED_PyVTKClass_vtkLevelIdScalarsNew
#endif

static const char **PyvtkHierarchicalDataLevelFilter_Doc();


static PyObject *
PyvtkHierarchicalDataLevelFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataLevelFilter *op = static_cast<vtkHierarchicalDataLevelFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalDataLevelFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataLevelFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataLevelFilter *op = static_cast<vtkHierarchicalDataLevelFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalDataLevelFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataLevelFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataLevelFilter *op = static_cast<vtkHierarchicalDataLevelFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalDataLevelFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalDataLevelFilter::NewInstance());

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
PyvtkHierarchicalDataLevelFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalDataLevelFilter *tempr = vtkHierarchicalDataLevelFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataLevelFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataLevelFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataLevelFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataLevelFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalDataLevelFilter\nC++: vtkHierarchicalDataLevelFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataLevelFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataLevelFilter\nC++: vtkHierarchicalDataLevelFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataLevelFilter_StaticNew()
{
  return vtkHierarchicalDataLevelFilter::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataLevelFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataLevelFilter_StaticNew,
    PyvtkHierarchicalDataLevelFilter_Methods,
    "vtkHierarchicalDataLevelFilter", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataLevelFilter_Doc(),
    PyVTKClass_vtkLevelIdScalarsNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataLevelFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataLevelFilter - generate scalars from levels\n\n",
    "Superclass: vtkLevelIdScalars\n\n",
    "Legacy class. Use vtkLevelIdScalars instead.\n\nSee Also:\n\nvtkLevelIdScalars\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataLevelFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataLevelFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataLevelFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

