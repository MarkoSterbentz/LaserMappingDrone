// python wrapper for vtkImplicitSelectionLoop
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitSelectionLoop.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitSelectionLoop(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitSelectionLoopNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitSelectionLoop_Doc();


static PyObject *
PyvtkImplicitSelectionLoop_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitSelectionLoop::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitSelectionLoop::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitSelectionLoop *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitSelectionLoop::NewInstance());

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
PyvtkImplicitSelectionLoop_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitSelectionLoop *tempr = vtkImplicitSelectionLoop::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitSelectionLoop_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitSelectionLoop::EvaluateGradient(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetLoop(temp0);
      }
    else
      {
      op->vtkImplicitSelectionLoop::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkImplicitSelectionLoop::GetLoop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticNormalGeneration(temp0);
      }
    else
      {
      op->vtkImplicitSelectionLoop::SetAutomaticNormalGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticNormalGeneration() :
      op->vtkImplicitSelectionLoop::GetAutomaticNormalGeneration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticNormalGenerationOn();
      }
    else
      {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticNormalGenerationOff();
      }
    else
      {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitSelectionLoop::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkImplicitSelectionLoop::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitSelectionLoop_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitSelectionLoop_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkImplicitSelectionLoop_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitSelectionLoop::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitSelectionLoop::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitSelectionLoop_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitSelectionLoop_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods for printing and type information.\n"},
  {(char*)"IsA", PyvtkImplicitSelectionLoop_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods for printing and type information.\n"},
  {(char*)"NewInstance", PyvtkImplicitSelectionLoop_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitSelectionLoop\nC++: vtkImplicitSelectionLoop *NewInstance()\n\nStandard VTK methods for printing and type information.\n"},
  {(char*)"SafeDownCast", PyvtkImplicitSelectionLoop_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitSelectionLoop\nC++: vtkImplicitSelectionLoop *SafeDownCast(vtkObject* o)\n\nStandard VTK methods for printing and type information.\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitSelectionLoop_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate selection loop returning a signed distance.\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitSelectionLoop_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\nEvaluate selection loop returning the gradient.\n"},
  {(char*)"SetLoop", PyvtkImplicitSelectionLoop_SetLoop, METH_VARARGS,
   (char*)"V.SetLoop(vtkPoints)\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {(char*)"GetLoop", PyvtkImplicitSelectionLoop_GetLoop, METH_VARARGS,
   (char*)"V.GetLoop() -> vtkPoints\nC++: vtkPoints *GetLoop()\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {(char*)"SetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration, METH_VARARGS,
   (char*)"V.SetAutomaticNormalGeneration(int)\nC++: void SetAutomaticNormalGeneration(int a)\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {(char*)"GetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration, METH_VARARGS,
   (char*)"V.GetAutomaticNormalGeneration() -> int\nC++: int GetAutomaticNormalGeneration()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {(char*)"AutomaticNormalGenerationOn", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn, METH_VARARGS,
   (char*)"V.AutomaticNormalGenerationOn()\nC++: void AutomaticNormalGenerationOn()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {(char*)"AutomaticNormalGenerationOff", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff, METH_VARARGS,
   (char*)"V.AutomaticNormalGenerationOff()\nC++: void AutomaticNormalGenerationOff()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {(char*)"SetNormal", PyvtkImplicitSelectionLoop_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkImplicitSelectionLoop_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet / get the normal used to determine whether a point is inside\nor outside the selection loop.\n"},
  {(char*)"GetMTime", PyvtkImplicitSelectionLoop_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload GetMTime() because we depend on the Loop\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitSelectionLoop_StaticNew()
{
  return vtkImplicitSelectionLoop::New();
}

PyObject *PyVTKClass_vtkImplicitSelectionLoopNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitSelectionLoop_StaticNew,
    PyvtkImplicitSelectionLoop_Methods,
    "vtkImplicitSelectionLoop", modulename,
    NULL, NULL,
    PyvtkImplicitSelectionLoop_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitSelectionLoop_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitSelectionLoop - implicit function for a selection loop\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitSelectionLoop computes the implicit function value and\nfunction gradient for a irregular, cylinder-like object whose cross\nsection is defined by a set of points forming a loop. The loop need\nnot be convex nor its points coplanar. However, the loop must be\nnon-self-intersecting when projected onto the plane defined by the\naccumulated cross product around the loop (i.e., the axis of the\nl",
    "oop). (Alternatively, you can specify the normal to use.)\n\nThe following procedure is used to compute the implicit function\nvalue for a point x. Each point of the loop is first projected onto\nthe plane defined by the loop normal. This forms a polygon. Then, to\nevaluate the implicit function value, inside/outside tests are used\nto determine if x is inside the polygon, and the distance to the loop\nb",
    "oundary is computed (negative values are inside the loop).\n\nOne example application of this implicit function class is to draw a\nloop on the surface of a mesh, and use the loop to clip or extract\ncells from within the loop. Remember, the selection loop is\n\"infinite\" in length, you can use a plane (in boolean combination) to\ncap the extent of the selection loop. Another trick is to use a\nconnectivi",
    "ty filter to extract the closest region to a given point\n(i.e., one of the points used to define the selection loop).\n\nSee Also:\n\nvtkImplicitFunction vtkImplicitBoolean vtkExtractGeometry\nvtkClipPolyData vtkConnectivityFilter vtkPolyDataConnectivityFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitSelectionLoop(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitSelectionLoopNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitSelectionLoop", o) != 0)
    {
    Py_DECREF(o);
    }

}

