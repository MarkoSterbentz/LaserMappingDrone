// python wrapper for vtkPProjectSphereFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPProjectSphereFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPProjectSphereFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPProjectSphereFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProjectSphereFilterNew
extern "C" { PyObject *PyVTKClass_vtkProjectSphereFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkProjectSphereFilterNew
#endif

static const char **PyvtkPProjectSphereFilter_Doc();


static PyObject *
PyvtkPProjectSphereFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProjectSphereFilter *op = static_cast<vtkPProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPProjectSphereFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPProjectSphereFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProjectSphereFilter *op = static_cast<vtkPProjectSphereFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPProjectSphereFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPProjectSphereFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProjectSphereFilter *op = static_cast<vtkPProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPProjectSphereFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPProjectSphereFilter::NewInstance());

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
PyvtkPProjectSphereFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPProjectSphereFilter *tempr = vtkPProjectSphereFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPProjectSphereFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPProjectSphereFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPProjectSphereFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPProjectSphereFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPProjectSphereFilter\nC++: vtkPProjectSphereFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPProjectSphereFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPProjectSphereFilter\nC++: vtkPProjectSphereFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPProjectSphereFilter_StaticNew()
{
  return vtkPProjectSphereFilter::New();
}

PyObject *PyVTKClass_vtkPProjectSphereFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPProjectSphereFilter_StaticNew,
    PyvtkPProjectSphereFilter_Methods,
    "vtkPProjectSphereFilter", modulename,
    NULL, NULL,
    PyvtkPProjectSphereFilter_Doc(),
    PyVTKClass_vtkProjectSphereFilterNew(modulename));
  return cls;
}

const char **PyvtkPProjectSphereFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPProjectSphereFilter - A filter to 'unroll' a sphere.  The\n\n",
    "Superclass: vtkProjectSphereFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPProjectSphereFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPProjectSphereFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPProjectSphereFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

