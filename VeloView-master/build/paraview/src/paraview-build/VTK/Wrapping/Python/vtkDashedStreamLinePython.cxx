// python wrapper for vtkDashedStreamLine
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDashedStreamLine.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDashedStreamLine(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDashedStreamLineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamLineNew
extern "C" { PyObject *PyVTKClass_vtkStreamLineNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamLineNew
#endif

static const char **PyvtkDashedStreamLine_Doc();


static PyObject *
PyvtkDashedStreamLine_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDashedStreamLine::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDashedStreamLine::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDashedStreamLine *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDashedStreamLine::NewInstance());

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
PyvtkDashedStreamLine_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDashedStreamLine *tempr = vtkDashedStreamLine::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_SetDashFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDashFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDashFactor(temp0);
      }
    else
      {
      op->vtkDashedStreamLine::SetDashFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_GetDashFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDashFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDashFactorMinValue() :
      op->vtkDashedStreamLine::GetDashFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_GetDashFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDashFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDashFactorMaxValue() :
      op->vtkDashedStreamLine::GetDashFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDashedStreamLine_GetDashFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDashFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDashedStreamLine *op = static_cast<vtkDashedStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDashFactor() :
      op->vtkDashedStreamLine::GetDashFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDashedStreamLine_Methods[] = {
  {(char*)"GetClassName", PyvtkDashedStreamLine_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDashedStreamLine_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDashedStreamLine_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDashedStreamLine\nC++: vtkDashedStreamLine *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDashedStreamLine_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDashedStreamLine\nC++: vtkDashedStreamLine *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDashFactor", PyvtkDashedStreamLine_SetDashFactor, METH_VARARGS,
   (char*)"V.SetDashFactor(float)\nC++: void SetDashFactor(double)\n\nFor each dash, specify the fraction of the dash that is \"on\". A\nfactor of 1.0 will result in a continuous line, a factor of 0.5\nwill result in dashed that are half on and half off.\n"},
  {(char*)"GetDashFactorMinValue", PyvtkDashedStreamLine_GetDashFactorMinValue, METH_VARARGS,
   (char*)"V.GetDashFactorMinValue() -> float\nC++: double GetDashFactorMinValue()\n\nFor each dash, specify the fraction of the dash that is \"on\". A\nfactor of 1.0 will result in a continuous line, a factor of 0.5\nwill result in dashed that are half on and half off.\n"},
  {(char*)"GetDashFactorMaxValue", PyvtkDashedStreamLine_GetDashFactorMaxValue, METH_VARARGS,
   (char*)"V.GetDashFactorMaxValue() -> float\nC++: double GetDashFactorMaxValue()\n\nFor each dash, specify the fraction of the dash that is \"on\". A\nfactor of 1.0 will result in a continuous line, a factor of 0.5\nwill result in dashed that are half on and half off.\n"},
  {(char*)"GetDashFactor", PyvtkDashedStreamLine_GetDashFactor, METH_VARARGS,
   (char*)"V.GetDashFactor() -> float\nC++: double GetDashFactor()\n\nFor each dash, specify the fraction of the dash that is \"on\". A\nfactor of 1.0 will result in a continuous line, a factor of 0.5\nwill result in dashed that are half on and half off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDashedStreamLine_StaticNew()
{
  return vtkDashedStreamLine::New();
}

PyObject *PyVTKClass_vtkDashedStreamLineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDashedStreamLine_StaticNew,
    PyvtkDashedStreamLine_Methods,
    "vtkDashedStreamLine", modulename,
    NULL, NULL,
    PyvtkDashedStreamLine_Doc(),
    PyVTKClass_vtkStreamLineNew(modulename));
  return cls;
}

const char **PyvtkDashedStreamLine_Doc()
{
  static const char *docstring[] = {
    "vtkDashedStreamLine - generate constant-time dashed streamline in\narbitrary dataset\n\n",
    "Superclass: vtkStreamLine\n\n",
    "vtkDashedStreamLine is a filter that generates a \"dashed\" streamline\nfor an arbitrary dataset. The streamline consists of a series of\ndashes, each of which represents (approximately) a constant time\nincrement. Thus, in the resulting visual representation, relatively\nlong dashes represent areas of high velocity, and small dashes\nrepresent areas of low velocity.\n\nvtkDashedStreamLine introduces the i",
    "nstance variable DashFactor.\nDashFactor interacts with its superclass' instance variable\nStepLength to create the dashes. DashFactor is the percentage of the\nStepLength line segment that is visible. Thus, if the\nDashFactor=0.75, the dashes will be \"three-quarters on\" and \"one-quarter\noff\".\n\nSee Also:\n\nvtkStreamer vtkStreamLine vtkStreamPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDashedStreamLine(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDashedStreamLineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDashedStreamLine", o) != 0)
    {
    Py_DECREF(o);
    }

}

