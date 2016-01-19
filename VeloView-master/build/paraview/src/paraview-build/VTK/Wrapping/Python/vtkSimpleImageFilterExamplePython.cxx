// python wrapper for vtkSimpleImageFilterExample
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkSimpleImageFilterExample.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimpleImageFilterExample(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimpleImageFilterExampleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSimpleImageToImageFilterNew
extern "C" { PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSimpleImageToImageFilterNew
#endif

static const char **PyvtkSimpleImageFilterExample_Doc();


static PyObject *
PyvtkSimpleImageFilterExample_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimpleImageFilterExample::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageFilterExample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleImageFilterExample::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageFilterExample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimpleImageFilterExample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleImageFilterExample::NewInstance());

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
PyvtkSimpleImageFilterExample_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimpleImageFilterExample *tempr = vtkSimpleImageFilterExample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleImageFilterExample_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleImageFilterExample_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleImageFilterExample_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleImageFilterExample_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimpleImageFilterExample\nC++: vtkSimpleImageFilterExample *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleImageFilterExample_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleImageFilterExample\nC++: vtkSimpleImageFilterExample *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleImageFilterExample_StaticNew()
{
  return vtkSimpleImageFilterExample::New();
}

PyObject *PyVTKClass_vtkSimpleImageFilterExampleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleImageFilterExample_StaticNew,
    PyvtkSimpleImageFilterExample_Methods,
    "vtkSimpleImageFilterExample", modulename,
    NULL, NULL,
    PyvtkSimpleImageFilterExample_Doc(),
    PyVTKClass_vtkSimpleImageToImageFilterNew(modulename));
  return cls;
}

const char **PyvtkSimpleImageFilterExample_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleImageFilterExample - Simple example of an image-image filter.\n\n",
    "Superclass: vtkSimpleImageToImageFilter\n\n",
    "This is an example of a simple image-image filter. It copies it's\ninput to it's output (point by point). It shows how templates can be\nused to support various data types.\n\nSee also:\n\nvtkSimpleImageToImageFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleImageFilterExample(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleImageFilterExampleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleImageFilterExample", o) != 0)
    {
    Py_DECREF(o);
    }

}

