// python wrapper for vtkHyperOctreeToUniformGridFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeToUniformGridFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeToUniformGridFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkHyperOctreeToUniformGridFilter_Doc();


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeToUniformGridFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeToUniformGridFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeToUniformGridFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeToUniformGridFilter::NewInstance());

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
PyvtkHyperOctreeToUniformGridFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeToUniformGridFilter *tempr = vtkHyperOctreeToUniformGridFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeToUniformGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeToUniformGridFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeToUniformGridFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeToUniformGridFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeToUniformGridFilter\nC++: vtkHyperOctreeToUniformGridFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeToUniformGridFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeToUniformGridFilter\nC++: vtkHyperOctreeToUniformGridFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeToUniformGridFilter_StaticNew()
{
  return vtkHyperOctreeToUniformGridFilter::New();
}

PyObject *PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeToUniformGridFilter_StaticNew,
    PyvtkHyperOctreeToUniformGridFilter_Methods,
    "vtkHyperOctreeToUniformGridFilter", modulename,
    NULL, NULL,
    PyvtkHyperOctreeToUniformGridFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeToUniformGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeToUniformGridFilter - Flat the octree into a uniform\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkHyperOctreeToUniformGridFilter creates a uniform grid with a\nresolution based on the number of levels of the hyperoctree. Then, it\ncopies celldata in each cell of the uniform grid that belongs to an\nactual leaf of the hyperoctree.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeToUniformGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeToUniformGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

