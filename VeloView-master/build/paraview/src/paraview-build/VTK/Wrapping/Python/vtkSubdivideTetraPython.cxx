// python wrapper for vtkSubdivideTetra
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSubdivideTetra.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSubdivideTetra(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSubdivideTetraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkSubdivideTetra_Doc();


static PyObject *
PyvtkSubdivideTetra_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivideTetra *op = static_cast<vtkSubdivideTetra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSubdivideTetra::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubdivideTetra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivideTetra *op = static_cast<vtkSubdivideTetra *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubdivideTetra::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubdivideTetra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubdivideTetra *op = static_cast<vtkSubdivideTetra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSubdivideTetra *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubdivideTetra::NewInstance());

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
PyvtkSubdivideTetra_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSubdivideTetra *tempr = vtkSubdivideTetra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSubdivideTetra_Methods[] = {
  {(char*)"GetClassName", PyvtkSubdivideTetra_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSubdivideTetra_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSubdivideTetra_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSubdivideTetra\nC++: vtkSubdivideTetra *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSubdivideTetra_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSubdivideTetra\nC++: vtkSubdivideTetra *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSubdivideTetra_StaticNew()
{
  return vtkSubdivideTetra::New();
}

PyObject *PyVTKClass_vtkSubdivideTetraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSubdivideTetra_StaticNew,
    PyvtkSubdivideTetra_Methods,
    "vtkSubdivideTetra", modulename,
    NULL, NULL,
    PyvtkSubdivideTetra_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSubdivideTetra_Doc()
{
  static const char *docstring[] = {
    "vtkSubdivideTetra - subdivide one tetrahedron into twelve for every\ntetra\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This filter subdivides tetrahedra in an unstructured grid into twelve\ntetrahedra.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSubdivideTetra(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSubdivideTetraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSubdivideTetra", o) != 0)
    {
    Py_DECREF(o);
    }

}

