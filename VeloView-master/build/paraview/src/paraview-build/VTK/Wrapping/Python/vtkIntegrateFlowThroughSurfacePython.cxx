// python wrapper for vtkIntegrateFlowThroughSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIntegrateFlowThroughSurface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIntegrateFlowThroughSurface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIntegrateFlowThroughSurfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkIntegrateFlowThroughSurface_Doc();


static PyObject *
PyvtkIntegrateFlowThroughSurface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateFlowThroughSurface *op = static_cast<vtkIntegrateFlowThroughSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIntegrateFlowThroughSurface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntegrateFlowThroughSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateFlowThroughSurface *op = static_cast<vtkIntegrateFlowThroughSurface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntegrateFlowThroughSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntegrateFlowThroughSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateFlowThroughSurface *op = static_cast<vtkIntegrateFlowThroughSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIntegrateFlowThroughSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntegrateFlowThroughSurface::NewInstance());

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
PyvtkIntegrateFlowThroughSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIntegrateFlowThroughSurface *tempr = vtkIntegrateFlowThroughSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIntegrateFlowThroughSurface_Methods[] = {
  {(char*)"GetClassName", PyvtkIntegrateFlowThroughSurface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIntegrateFlowThroughSurface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIntegrateFlowThroughSurface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIntegrateFlowThroughSurface\nC++: vtkIntegrateFlowThroughSurface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIntegrateFlowThroughSurface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIntegrateFlowThroughSurface\nC++: vtkIntegrateFlowThroughSurface *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIntegrateFlowThroughSurface_StaticNew()
{
  return vtkIntegrateFlowThroughSurface::New();
}

PyObject *PyVTKClass_vtkIntegrateFlowThroughSurfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIntegrateFlowThroughSurface_StaticNew,
    PyvtkIntegrateFlowThroughSurface_Methods,
    "vtkIntegrateFlowThroughSurface", modulename,
    NULL, NULL,
    PyvtkIntegrateFlowThroughSurface_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIntegrateFlowThroughSurface_Doc()
{
  static const char *docstring[] = {
    "vtkIntegrateFlowThroughSurface - Integrates vector dot normal.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "First this filter finds point normals for a surface.  It Takes a\npoint vector field from the input and computes the dot product with\nthe normal.  It then integrates this dot value to get net flow\nthrough the surface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIntegrateFlowThroughSurface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIntegrateFlowThroughSurfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIntegrateFlowThroughSurface", o) != 0)
    {
    Py_DECREF(o);
    }

}

