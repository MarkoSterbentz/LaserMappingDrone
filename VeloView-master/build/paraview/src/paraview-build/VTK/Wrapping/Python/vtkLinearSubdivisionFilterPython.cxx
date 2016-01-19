// python wrapper for vtkLinearSubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkLinearSubdivisionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLinearSubdivisionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLinearSubdivisionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
extern "C" { PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
#endif

static const char **PyvtkLinearSubdivisionFilter_Doc();


static PyObject *
PyvtkLinearSubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSubdivisionFilter *op = static_cast<vtkLinearSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLinearSubdivisionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSubdivisionFilter *op = static_cast<vtkLinearSubdivisionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSubdivisionFilter *op = static_cast<vtkLinearSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLinearSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearSubdivisionFilter::NewInstance());

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
PyvtkLinearSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLinearSubdivisionFilter *tempr = vtkLinearSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLinearSubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkLinearSubdivisionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"IsA", PyvtkLinearSubdivisionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"NewInstance", PyvtkLinearSubdivisionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLinearSubdivisionFilter\nC++: vtkLinearSubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"SafeDownCast", PyvtkLinearSubdivisionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinearSubdivisionFilter\nC++: vtkLinearSubdivisionFilter *SafeDownCast(vtkObject* o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLinearSubdivisionFilter_StaticNew()
{
  return vtkLinearSubdivisionFilter::New();
}

PyObject *PyVTKClass_vtkLinearSubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLinearSubdivisionFilter_StaticNew,
    PyvtkLinearSubdivisionFilter_Methods,
    "vtkLinearSubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkLinearSubdivisionFilter_Doc(),
    PyVTKClass_vtkInterpolatingSubdivisionFilterNew(modulename));
  return cls;
}

const char **PyvtkLinearSubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkLinearSubdivisionFilter - generate a subdivision surface using the\nLinear Scheme\n\n",
    "Superclass: vtkInterpolatingSubdivisionFilter\n\n",
    "vtkLinearSubdivisionFilter is a filter that generates output by\nsubdividing its input polydata. Each subdivision iteration create 4\nnew triangles for each triangle in the polydata.\n\nSee Also:\n\nvtkInterpolatingSubdivisionFilter vtkButterflySubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinearSubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinearSubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinearSubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

