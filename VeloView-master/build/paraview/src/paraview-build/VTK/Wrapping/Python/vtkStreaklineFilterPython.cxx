// python wrapper for vtkStreaklineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreaklineFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreaklineFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreaklineFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkParticleTracerBaseNew
#endif

static const char **PyvtkStreaklineFilter_Doc();


static PyObject *
PyvtkStreaklineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreaklineFilter *op = static_cast<vtkStreaklineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreaklineFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreaklineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreaklineFilter *op = static_cast<vtkStreaklineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreaklineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreaklineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreaklineFilter *op = static_cast<vtkStreaklineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreaklineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreaklineFilter::NewInstance());

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
PyvtkStreaklineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreaklineFilter *tempr = vtkStreaklineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreaklineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStreaklineFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreaklineFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreaklineFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreaklineFilter\nC++: vtkStreaklineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreaklineFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreaklineFilter\nC++: vtkStreaklineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreaklineFilter_StaticNew()
{
  return vtkStreaklineFilter::New();
}

PyObject *PyVTKClass_vtkStreaklineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreaklineFilter_StaticNew,
    PyvtkStreaklineFilter_Methods,
    "vtkStreaklineFilter", modulename,
    NULL, NULL,
    PyvtkStreaklineFilter_Doc(),
    PyVTKClass_vtkParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkStreaklineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStreaklineFilter - A Parallel Particle tracer for unsteady vector\nfields\n\n",
    "Superclass: vtkParticleTracerBase\n\n",
    "vtkStreaklineFilter is a filter that integrates a vector field to\ngenerate streak lines\n\nSee Also:\n\nvtkParticleTracerBase has the details of the algorithms\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreaklineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreaklineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreaklineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

