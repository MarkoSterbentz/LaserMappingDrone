// python wrapper for vtkPolyLineToRectilinearGridFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyLineToRectilinearGridFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyLineToRectilinearGridFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyLineToRectilinearGridFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
#endif

static const char **PyvtkPolyLineToRectilinearGridFilter_Doc();


static PyObject *
PyvtkPolyLineToRectilinearGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineToRectilinearGridFilter *op = static_cast<vtkPolyLineToRectilinearGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyLineToRectilinearGridFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineToRectilinearGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineToRectilinearGridFilter *op = static_cast<vtkPolyLineToRectilinearGridFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyLineToRectilinearGridFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineToRectilinearGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineToRectilinearGridFilter *op = static_cast<vtkPolyLineToRectilinearGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyLineToRectilinearGridFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyLineToRectilinearGridFilter::NewInstance());

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
PyvtkPolyLineToRectilinearGridFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyLineToRectilinearGridFilter *tempr = vtkPolyLineToRectilinearGridFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyLineToRectilinearGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyLineToRectilinearGridFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyLineToRectilinearGridFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyLineToRectilinearGridFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyLineToRectilinearGridFilter\nC++: vtkPolyLineToRectilinearGridFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyLineToRectilinearGridFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyLineToRectilinearGridFilter\nC++: vtkPolyLineToRectilinearGridFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyLineToRectilinearGridFilter_StaticNew()
{
  return vtkPolyLineToRectilinearGridFilter::New();
}

PyObject *PyVTKClass_vtkPolyLineToRectilinearGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyLineToRectilinearGridFilter_StaticNew,
    PyvtkPolyLineToRectilinearGridFilter_Methods,
    "vtkPolyLineToRectilinearGridFilter", modulename,
    NULL, NULL,
    PyvtkPolyLineToRectilinearGridFilter_Doc(),
    PyVTKClass_vtkRectilinearGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyLineToRectilinearGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPolyLineToRectilinearGridFilter - filter that converts an input\n\n",
    "Superclass: vtkRectilinearGridAlgorithm\n\n",
    "vtkPolyLineToRectilinearGridFilter converts an input polydata with\nsingle polyline to a 1-D regular rectilinear grid. The output has\nadditional point data indicating the arc-length for each point. Note\nthat the Xcoordinates of the output are not related to those of the\ninput. The input point coordinates themselves are added as point data\nin the output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyLineToRectilinearGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyLineToRectilinearGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyLineToRectilinearGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

