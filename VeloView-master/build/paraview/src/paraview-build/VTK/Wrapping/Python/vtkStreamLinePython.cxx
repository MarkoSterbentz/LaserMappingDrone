// python wrapper for vtkStreamLine
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamLine.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamLine(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamLineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamerNew
extern "C" { PyObject *PyVTKClass_vtkStreamerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamerNew
#endif

static const char **PyvtkStreamLine_Doc();


static PyObject *
PyvtkStreamLine_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamLine::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamLine::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamLine *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamLine::NewInstance());

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
PyvtkStreamLine_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamLine *tempr = vtkStreamLine::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_SetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepLength(temp0);
      }
    else
      {
      op->vtkStreamLine::SetStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_GetStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepLengthMinValue() :
      op->vtkStreamLine::GetStepLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_GetStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepLengthMaxValue() :
      op->vtkStreamLine::GetStepLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamLine_GetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamLine *op = static_cast<vtkStreamLine *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepLength() :
      op->vtkStreamLine::GetStepLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamLine_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamLine_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamLine_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamLine_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamLine\nC++: vtkStreamLine *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamLine_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamLine\nC++: vtkStreamLine *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStepLength", PyvtkStreamLine_SetStepLength, METH_VARARGS,
   (char*)"V.SetStepLength(float)\nC++: void SetStepLength(double)\n\nSpecify the length of a line segment. The length is expressed in\nterms of elapsed time. Smaller values result in smoother\nappearing streamlines, but greater numbers of line primitives.\n"},
  {(char*)"GetStepLengthMinValue", PyvtkStreamLine_GetStepLengthMinValue, METH_VARARGS,
   (char*)"V.GetStepLengthMinValue() -> float\nC++: double GetStepLengthMinValue()\n\nSpecify the length of a line segment. The length is expressed in\nterms of elapsed time. Smaller values result in smoother\nappearing streamlines, but greater numbers of line primitives.\n"},
  {(char*)"GetStepLengthMaxValue", PyvtkStreamLine_GetStepLengthMaxValue, METH_VARARGS,
   (char*)"V.GetStepLengthMaxValue() -> float\nC++: double GetStepLengthMaxValue()\n\nSpecify the length of a line segment. The length is expressed in\nterms of elapsed time. Smaller values result in smoother\nappearing streamlines, but greater numbers of line primitives.\n"},
  {(char*)"GetStepLength", PyvtkStreamLine_GetStepLength, METH_VARARGS,
   (char*)"V.GetStepLength() -> float\nC++: double GetStepLength()\n\nSpecify the length of a line segment. The length is expressed in\nterms of elapsed time. Smaller values result in smoother\nappearing streamlines, but greater numbers of line primitives.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamLine_StaticNew()
{
  return vtkStreamLine::New();
}

PyObject *PyVTKClass_vtkStreamLineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamLine_StaticNew,
    PyvtkStreamLine_Methods,
    "vtkStreamLine", modulename,
    NULL, NULL,
    PyvtkStreamLine_Doc(),
    PyVTKClass_vtkStreamerNew(modulename));
  return cls;
}

const char **PyvtkStreamLine_Doc()
{
  static const char *docstring[] = {
    "vtkStreamLine - generate streamline in arbitrary dataset\n\n",
    "Superclass: vtkStreamer\n\n",
    "vtkStreamLine is a filter that generates a streamline for an\narbitrary dataset. A streamline is a line that is everywhere tangent\nto the vector field. Scalar values also are calculated along the\nstreamline and can be used to color the line. Streamlines are\ncalculated by integrating from a starting point through the vector\nfield. Integration can be performed forward in time (see where the\nline goes",
    "), backward in time (see where the line came from), or in\nboth directions. It also is possible to compute vorticity along the\nstreamline. Vorticity is the projection (i.e., dot product) of the\nflow rotation on the velocity vector, i.e., the rotation of flow\naround the streamline.\n\nvtkStreamLine defines the instance variable StepLength. This\nparameter controls the time increment used to generate in",
    "dividual\npoints along the streamline(s). Smaller values result in more line\nprimitives but smoother streamlines. The StepLength instance variable\nis defined in terms of time (i.e., the distance that the particle\ntravels in the specified time period). Thus, the line segments will\nbe smaller in areas of low velocity and larger in regions of high\nvelocity. (NOTE: This is different than the Integratio",
    "nStepLength\ndefined by the superclass vtkStreamer. IntegrationStepLength is used\nto control integration step size and is expressed as a fraction of\nthe cell length.) The StepLength instance variable is important\nbecause subclasses of vtkStreamLine (e.g., vtkDashedStreamLine)\ndepend on this value to build their representation.\n\nSee Also:\n\nvtkStreamer vtkDashedStreamLine vtkStreamPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamLine(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamLineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamLine", o) != 0)
    {
    Py_DECREF(o);
    }

}

