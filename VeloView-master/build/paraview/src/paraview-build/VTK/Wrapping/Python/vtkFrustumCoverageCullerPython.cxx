// python wrapper for vtkFrustumCoverageCuller
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkFrustumCoverageCuller.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFrustumCoverageCuller(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFrustumCoverageCullerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCullerNew
extern "C" { PyObject *PyVTKClass_vtkCullerNew(const char *); }
#define DECLARED_PyVTKClass_vtkCullerNew
#endif

static const char **PyvtkFrustumCoverageCuller_Doc();


static PyObject *
PyvtkFrustumCoverageCuller_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFrustumCoverageCuller::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrustumCoverageCuller::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFrustumCoverageCuller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrustumCoverageCuller::NewInstance());

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
PyvtkFrustumCoverageCuller_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFrustumCoverageCuller *tempr = vtkFrustumCoverageCuller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetMinimumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumCoverage(temp0);
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetMinimumCoverage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetMinimumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumCoverage() :
      op->vtkFrustumCoverageCuller::GetMinimumCoverage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetMaximumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumCoverage(temp0);
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetMaximumCoverage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetMaximumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCoverage() :
      op->vtkFrustumCoverageCuller::GetMaximumCoverage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortingStyle(temp0);
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetSortingStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyleMinValue() :
      op->vtkFrustumCoverageCuller::GetSortingStyleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyleMaxValue() :
      op->vtkFrustumCoverageCuller::GetSortingStyleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyle() :
      op->vtkFrustumCoverageCuller::GetSortingStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortingStyleToNone();
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetSortingStyleToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortingStyleToBackToFront();
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetSortingStyleToBackToFront();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortingStyleToFrontToBack();
      }
    else
      {
      op->vtkFrustumCoverageCuller::SetSortingStyleToFrontToBack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSortingStyleAsString() :
      op->vtkFrustumCoverageCuller::GetSortingStyleAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFrustumCoverageCuller_Methods[] = {
  {(char*)"GetClassName", PyvtkFrustumCoverageCuller_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFrustumCoverageCuller_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFrustumCoverageCuller_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFrustumCoverageCuller\nC++: vtkFrustumCoverageCuller *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFrustumCoverageCuller_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFrustumCoverageCuller\nC++: vtkFrustumCoverageCuller *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinimumCoverage", PyvtkFrustumCoverageCuller_SetMinimumCoverage, METH_VARARGS,
   (char*)"V.SetMinimumCoverage(float)\nC++: void SetMinimumCoverage(double a)\n\nSet/Get the minimum coverage - props with less coverage than this\nare given no time to render (they are culled)\n"},
  {(char*)"GetMinimumCoverage", PyvtkFrustumCoverageCuller_GetMinimumCoverage, METH_VARARGS,
   (char*)"V.GetMinimumCoverage() -> float\nC++: double GetMinimumCoverage()\n\nSet/Get the minimum coverage - props with less coverage than this\nare given no time to render (they are culled)\n"},
  {(char*)"SetMaximumCoverage", PyvtkFrustumCoverageCuller_SetMaximumCoverage, METH_VARARGS,
   (char*)"V.SetMaximumCoverage(float)\nC++: void SetMaximumCoverage(double a)\n\nSet/Get the maximum coverage - props with more coverage than this\nare given an allocated render time of 1.0 (the maximum)\n"},
  {(char*)"GetMaximumCoverage", PyvtkFrustumCoverageCuller_GetMaximumCoverage, METH_VARARGS,
   (char*)"V.GetMaximumCoverage() -> float\nC++: double GetMaximumCoverage()\n\nSet/Get the maximum coverage - props with more coverage than this\nare given an allocated render time of 1.0 (the maximum)\n"},
  {(char*)"SetSortingStyle", PyvtkFrustumCoverageCuller_SetSortingStyle, METH_VARARGS,
   (char*)"V.SetSortingStyle(int)\nC++: void SetSortingStyle(int)\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"GetSortingStyleMinValue", PyvtkFrustumCoverageCuller_GetSortingStyleMinValue, METH_VARARGS,
   (char*)"V.GetSortingStyleMinValue() -> int\nC++: int GetSortingStyleMinValue()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"GetSortingStyleMaxValue", PyvtkFrustumCoverageCuller_GetSortingStyleMaxValue, METH_VARARGS,
   (char*)"V.GetSortingStyleMaxValue() -> int\nC++: int GetSortingStyleMaxValue()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"GetSortingStyle", PyvtkFrustumCoverageCuller_GetSortingStyle, METH_VARARGS,
   (char*)"V.GetSortingStyle() -> int\nC++: int GetSortingStyle()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"SetSortingStyleToNone", PyvtkFrustumCoverageCuller_SetSortingStyleToNone, METH_VARARGS,
   (char*)"V.SetSortingStyleToNone()\nC++: void SetSortingStyleToNone()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"SetSortingStyleToBackToFront", PyvtkFrustumCoverageCuller_SetSortingStyleToBackToFront, METH_VARARGS,
   (char*)"V.SetSortingStyleToBackToFront()\nC++: void SetSortingStyleToBackToFront()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"SetSortingStyleToFrontToBack", PyvtkFrustumCoverageCuller_SetSortingStyleToFrontToBack, METH_VARARGS,
   (char*)"V.SetSortingStyleToFrontToBack()\nC++: void SetSortingStyleToFrontToBack()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {(char*)"GetSortingStyleAsString", PyvtkFrustumCoverageCuller_GetSortingStyleAsString, METH_VARARGS,
   (char*)"V.GetSortingStyleAsString() -> string\nC++: const char *GetSortingStyleAsString(void)\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFrustumCoverageCuller_StaticNew()
{
  return vtkFrustumCoverageCuller::New();
}

PyObject *PyVTKClass_vtkFrustumCoverageCullerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFrustumCoverageCuller_StaticNew,
    PyvtkFrustumCoverageCuller_Methods,
    "vtkFrustumCoverageCuller", modulename,
    NULL, NULL,
    PyvtkFrustumCoverageCuller_Doc(),
    PyVTKClass_vtkCullerNew(modulename));
  return cls;
}

const char **PyvtkFrustumCoverageCuller_Doc()
{
  static const char *docstring[] = {
    "vtkFrustumCoverageCuller - cull props based on frustum coverage\n\n",
    "Superclass: vtkCuller\n\n",
    "vtkFrustumCoverageCuller will cull props based on the coverage in the\nview frustum. The coverage is computed by enclosing the prop in a\nbounding sphere, projecting that to the viewing coordinate system,\nthen taking a slice through the view frustum at the center of the\nsphere. This results in a circle on the plane slice through the view\nfrustum. This circle is enclosed in a squared, and the fractio",
    "n of\nthe plane slice that this square covers is the coverage. This is a\nnumber between 0 and 1. If the number is less than the\nMinumumCoverage, the allocated render time for that prop is set to\nzero. If it is greater than the MaximumCoverage, the allocated render\ntime is set to 1.0. In between, a linear ramp is used to convert\ncoverage into allocated render time.\n\nSee Also:\n\nvtkCuller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFrustumCoverageCuller(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFrustumCoverageCullerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFrustumCoverageCuller", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_CULLER_SORT_NONE", 0 },
        { "VTK_CULLER_SORT_FRONT_TO_BACK", 1 },
        { "VTK_CULLER_SORT_BACK_TO_FRONT", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

