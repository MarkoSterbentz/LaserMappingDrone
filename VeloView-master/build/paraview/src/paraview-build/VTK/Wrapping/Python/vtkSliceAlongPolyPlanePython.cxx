// python wrapper for vtkSliceAlongPolyPlane
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSliceAlongPolyPlane.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSliceAlongPolyPlane(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSliceAlongPolyPlaneNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkSliceAlongPolyPlane_Doc();


static PyObject *
PyvtkSliceAlongPolyPlane_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAlongPolyPlane *op = static_cast<vtkSliceAlongPolyPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSliceAlongPolyPlane::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAlongPolyPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAlongPolyPlane *op = static_cast<vtkSliceAlongPolyPlane *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliceAlongPolyPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAlongPolyPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAlongPolyPlane *op = static_cast<vtkSliceAlongPolyPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliceAlongPolyPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliceAlongPolyPlane::NewInstance());

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
PyvtkSliceAlongPolyPlane_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSliceAlongPolyPlane *tempr = vtkSliceAlongPolyPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAlongPolyPlane_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAlongPolyPlane *op = static_cast<vtkSliceAlongPolyPlane *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSliceAlongPolyPlane::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAlongPolyPlane_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAlongPolyPlane *op = static_cast<vtkSliceAlongPolyPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSliceAlongPolyPlane::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSliceAlongPolyPlane_Methods[] = {
  {(char*)"GetClassName", PyvtkSliceAlongPolyPlane_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSliceAlongPolyPlane_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSliceAlongPolyPlane_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSliceAlongPolyPlane\nC++: vtkSliceAlongPolyPlane *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSliceAlongPolyPlane_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliceAlongPolyPlane\nC++: vtkSliceAlongPolyPlane *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTolerance", PyvtkSliceAlongPolyPlane_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\n"},
  {(char*)"GetTolerance", PyvtkSliceAlongPolyPlane_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliceAlongPolyPlane_StaticNew()
{
  return vtkSliceAlongPolyPlane::New();
}

PyObject *PyVTKClass_vtkSliceAlongPolyPlaneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliceAlongPolyPlane_StaticNew,
    PyvtkSliceAlongPolyPlane_Methods,
    "vtkSliceAlongPolyPlane", modulename,
    NULL, NULL,
    PyvtkSliceAlongPolyPlane_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSliceAlongPolyPlane_Doc()
{
  static const char *docstring[] = {
    "vtkSliceAlongPolyPlane - slice a dataset along a polyplane\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "See Also:\n\nvtkCutter vtkPolyPlane\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliceAlongPolyPlane(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliceAlongPolyPlaneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliceAlongPolyPlane", o) != 0)
    {
    Py_DECREF(o);
    }

}

