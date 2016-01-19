// python wrapper for vtkParticleTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParticleTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParticleTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParticleTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkParticleTracerBaseNew
#endif

static const char **PyvtkParticleTracer_Doc();


static PyObject *
PyvtkParticleTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracer *op = static_cast<vtkParticleTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParticleTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracer *op = static_cast<vtkParticleTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticleTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracer *op = static_cast<vtkParticleTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParticleTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticleTracer::NewInstance());

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
PyvtkParticleTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParticleTracer *tempr = vtkParticleTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParticleTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkParticleTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParticleTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParticleTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParticleTracer\nC++: vtkParticleTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParticleTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParticleTracer\nC++: vtkParticleTracer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParticleTracer_StaticNew()
{
  return vtkParticleTracer::New();
}

PyObject *PyVTKClass_vtkParticleTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParticleTracer_StaticNew,
    PyvtkParticleTracer_Methods,
    "vtkParticleTracer", modulename,
    NULL, NULL,
    PyvtkParticleTracer_Doc(),
    PyVTKClass_vtkParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkParticleTracer_Doc()
{
  static const char *docstring[] = {
    "vtkParticleTracer - A Parallel Particle tracer for unsteady vector\nfields\n\n",
    "Superclass: vtkParticleTracerBase\n\n",
    "vtkParticleTracer is a filter that integrates a vector field to\nadvect particles\n\nSee Also:\n\nvtkParticleTracerBase has the details of the algorithms\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParticleTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParticleTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParticleTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

