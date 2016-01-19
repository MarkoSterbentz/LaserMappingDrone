// python wrapper for vtkPReflectionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPReflectionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPReflectionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPReflectionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkReflectionFilterNew
extern "C" { PyObject *PyVTKClass_vtkReflectionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkReflectionFilterNew
#endif

static const char **PyvtkPReflectionFilter_Doc();


static PyObject *
PyvtkPReflectionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPReflectionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPReflectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPReflectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPReflectionFilter::NewInstance());

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
PyvtkPReflectionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPReflectionFilter *tempr = vtkPReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPReflectionFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPReflectionFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPReflectionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPReflectionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPReflectionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPReflectionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPReflectionFilter\nC++: vtkPReflectionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPReflectionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPReflectionFilter\nC++: vtkPReflectionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPReflectionFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the parallel controller.\n"},
  {(char*)"GetController", PyvtkPReflectionFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPReflectionFilter_StaticNew()
{
  return vtkPReflectionFilter::New();
}

PyObject *PyVTKClass_vtkPReflectionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPReflectionFilter_StaticNew,
    PyvtkPReflectionFilter_Methods,
    "vtkPReflectionFilter", modulename,
    NULL, NULL,
    PyvtkPReflectionFilter_Doc(),
    PyVTKClass_vtkReflectionFilterNew(modulename));
  return cls;
}

const char **PyvtkPReflectionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPReflectionFilter - parallel version of vtkReflectionFilter\n\n",
    "Superclass: vtkReflectionFilter\n\n",
    "vtkPReflectionFilter is a parallel version of vtkReflectionFilter\nwhich takes into consideration the full dataset bounds for performing\nthe reflection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPReflectionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPReflectionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPReflectionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

