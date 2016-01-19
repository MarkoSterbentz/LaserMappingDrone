// python wrapper for vtkHierarchicalDataSetGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalDataSetGeometryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataGeometryFilterNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataGeometryFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataGeometryFilterNew
#endif

static const char **PyvtkHierarchicalDataSetGeometryFilter_Doc();


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalDataSetGeometryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalDataSetGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalDataSetGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalDataSetGeometryFilter::NewInstance());

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
PyvtkHierarchicalDataSetGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalDataSetGeometryFilter *tempr = vtkHierarchicalDataSetGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataSetGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataSetGeometryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataSetGeometryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataSetGeometryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalDataSetGeometryFilter\nC++: vtkHierarchicalDataSetGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataSetGeometryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataSetGeometryFilter\nC++: vtkHierarchicalDataSetGeometryFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataSetGeometryFilter_StaticNew()
{
  return vtkHierarchicalDataSetGeometryFilter::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataSetGeometryFilter_StaticNew,
    PyvtkHierarchicalDataSetGeometryFilter_Methods,
    "vtkHierarchicalDataSetGeometryFilter", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataSetGeometryFilter_Doc(),
    PyVTKClass_vtkCompositeDataGeometryFilterNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataSetGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataSetGeometryFilter - extract geometry from\nhierarchical data\n\n",
    "Superclass: vtkCompositeDataGeometryFilter\n\n",
    "Legacy class. Use vtkCompositeDataGeometryFilter instead.\n\nSee Also:\n\nvtkCompositeDataGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataSetGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

