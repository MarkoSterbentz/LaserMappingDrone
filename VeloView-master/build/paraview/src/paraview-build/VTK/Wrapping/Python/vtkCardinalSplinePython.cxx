// python wrapper for vtkCardinalSpline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCardinalSpline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCardinalSpline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCardinalSplineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSplineNew
extern "C" { PyObject *PyVTKClass_vtkSplineNew(const char *); }
#define DECLARED_PyVTKClass_vtkSplineNew
#endif

static const char **PyvtkCardinalSpline_Doc();


static PyObject *
PyvtkCardinalSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCardinalSpline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCardinalSpline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCardinalSpline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCardinalSpline::NewInstance());

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
PyvtkCardinalSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCardinalSpline *tempr = vtkCardinalSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Compute();
      }
    else
      {
      op->vtkCardinalSpline::Compute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0) :
      op->vtkCardinalSpline::Evaluate(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCardinalSpline::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCardinalSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkCardinalSpline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCardinalSpline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCardinalSpline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCardinalSpline\nC++: vtkCardinalSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCardinalSpline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCardinalSpline\nC++: vtkCardinalSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compute", PyvtkCardinalSpline_Compute, METH_VARARGS,
   (char*)"V.Compute()\nC++: void Compute()\n\n"},
  {(char*)"Evaluate", PyvtkCardinalSpline_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate(float) -> float\nC++: virtual double Evaluate(double t)\n\nEvaluate a 1D cardinal spline.\n"},
  {(char*)"DeepCopy", PyvtkCardinalSpline_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of cardinal spline data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCardinalSpline_StaticNew()
{
  return vtkCardinalSpline::New();
}

PyObject *PyVTKClass_vtkCardinalSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCardinalSpline_StaticNew,
    PyvtkCardinalSpline_Methods,
    "vtkCardinalSpline", modulename,
    NULL, NULL,
    PyvtkCardinalSpline_Doc(),
    PyVTKClass_vtkSplineNew(modulename));
  return cls;
}

const char **PyvtkCardinalSpline_Doc()
{
  static const char *docstring[] = {
    "vtkCardinalSpline - computes an interpolating spline using a\n\n",
    "Superclass: vtkSpline\n\n",
    "vtkCardinalSpline is a concrete implementation of vtkSpline using a\nCardinal basis.\n\nSee Also:\n\nvtkSpline vtkKochanekSpline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCardinalSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCardinalSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCardinalSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}

