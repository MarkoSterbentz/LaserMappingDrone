// python wrapper for vtkStructuredPointsGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStructuredPointsGeometryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredPointsGeometryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredPointsGeometryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDataGeometryFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDataGeometryFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataGeometryFilterNew
#endif

static const char **PyvtkStructuredPointsGeometryFilter_Doc();


static PyObject *
PyvtkStructuredPointsGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredPointsGeometryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredPointsGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPointsGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredPointsGeometryFilter::NewInstance());

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
PyvtkStructuredPointsGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredPointsGeometryFilter *tempr = vtkStructuredPointsGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsGeometryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsGeometryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsGeometryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredPointsGeometryFilter\nC++: vtkStructuredPointsGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsGeometryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsGeometryFilter\nC++: vtkStructuredPointsGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsGeometryFilter_StaticNew()
{
  return vtkStructuredPointsGeometryFilter::New();
}

PyObject *PyVTKClass_vtkStructuredPointsGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsGeometryFilter_StaticNew,
    PyvtkStructuredPointsGeometryFilter_Methods,
    "vtkStructuredPointsGeometryFilter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsGeometryFilter_Doc(),
    PyVTKClass_vtkImageDataGeometryFilterNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsGeometryFilter - obsolete class\n\n",
    "Superclass: vtkImageDataGeometryFilter\n\n",
    "vtkStructuredPointsGeometryFilter has been renamed to\nvtkImageDataGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

