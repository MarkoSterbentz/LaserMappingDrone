// python wrapper for vtkParticlePathFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParticlePathFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParticlePathFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParticlePathFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkParticleTracerBaseNew
#endif

static const char **PyvtkParticlePathFilter_Doc();


static PyObject *
PyvtkParticlePathFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticlePathFilter *op = static_cast<vtkParticlePathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParticlePathFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticlePathFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticlePathFilter *op = static_cast<vtkParticlePathFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticlePathFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticlePathFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticlePathFilter *op = static_cast<vtkParticlePathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParticlePathFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticlePathFilter::NewInstance());

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
PyvtkParticlePathFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParticlePathFilter *tempr = vtkParticlePathFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParticlePathFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkParticlePathFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParticlePathFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParticlePathFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParticlePathFilter\nC++: vtkParticlePathFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParticlePathFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParticlePathFilter\nC++: vtkParticlePathFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParticlePathFilter_StaticNew()
{
  return vtkParticlePathFilter::New();
}

PyObject *PyVTKClass_vtkParticlePathFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParticlePathFilter_StaticNew,
    PyvtkParticlePathFilter_Methods,
    "vtkParticlePathFilter", modulename,
    NULL, NULL,
    PyvtkParticlePathFilter_Doc(),
    PyVTKClass_vtkParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkParticlePathFilter_Doc()
{
  static const char *docstring[] = {
    "vtkParticlePathFilter - A Parallel Particle tracer for unsteady\nvector fields\n\n",
    "Superclass: vtkParticleTracerBase\n\n",
    "vtkParticlePathFilter is a filter that integrates a vector field to\ngenerate particle paths\n\nSee Also:\n\nvtkParticlePathFilterBase has the details of the algorithms\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParticlePathFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParticlePathFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParticlePathFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

