// python wrapper for vtkPVContourFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVContourFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVContourFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVContourFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourFilterNew
extern "C" { PyObject *PyVTKClass_vtkContourFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourFilterNew
#endif

static const char **PyvtkPVContourFilter_Doc();


static PyObject *
PyvtkPVContourFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContourFilter *op = static_cast<vtkPVContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVContourFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContourFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContourFilter *op = static_cast<vtkPVContourFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVContourFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContourFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContourFilter *op = static_cast<vtkPVContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVContourFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVContourFilter::NewInstance());

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
PyvtkPVContourFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVContourFilter *tempr = vtkPVContourFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVContourFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVContourFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVContourFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVContourFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVContourFilter\nC++: vtkPVContourFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVContourFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVContourFilter\nC++: vtkPVContourFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVContourFilter_StaticNew()
{
  return vtkPVContourFilter::New();
}

PyObject *PyVTKClass_vtkPVContourFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVContourFilter_StaticNew,
    PyvtkPVContourFilter_Methods,
    "vtkPVContourFilter", modulename,
    NULL, NULL,
    PyvtkPVContourFilter_Doc(),
    PyVTKClass_vtkContourFilterNew(modulename));
  return cls;
}

const char **PyvtkPVContourFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVContourFilter - generate isosurfaces/isolines from scalar values\n\n",
    "Superclass: vtkContourFilter\n\n",
    "vtkPVContourFilter is an extension to vtkContourFilter. It adds the\nability to generate isosurfaces / isolines for AMR dataset.\n\nCaveats:\n\nCertain flags in vtkAMRDualContour are assumed to be ON.\n\nSee Also:\n\nvtkContourFilter vtkAMRDualContour\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVContourFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVContourFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVContourFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

