// python wrapper for vtkSpherePuzzle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpherePuzzle.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpherePuzzle(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpherePuzzleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSpherePuzzle_Doc();


static PyObject *
PyvtkSpherePuzzle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpherePuzzle::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpherePuzzle::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpherePuzzle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpherePuzzle::NewInstance());

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
PyvtkSpherePuzzle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpherePuzzle *tempr = vtkSpherePuzzle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkSpherePuzzle::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MoveHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->MoveHorizontal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSpherePuzzle::MoveHorizontal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MoveVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->MoveVertical(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSpherePuzzle::MoveVertical(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetPoint(temp0, temp1, temp2) :
      op->vtkSpherePuzzle::SetPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MovePoint(temp0);
      }
    else
      {
      op->vtkSpherePuzzle::MovePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkSpherePuzzle::GetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSpherePuzzle_Methods[] = {
  {(char*)"GetClassName", PyvtkSpherePuzzle_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpherePuzzle_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpherePuzzle_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpherePuzzle\nC++: vtkSpherePuzzle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpherePuzzle_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpherePuzzle\nC++: vtkSpherePuzzle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Reset", PyvtkSpherePuzzle_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the state of this puzzle back to its original state.\n"},
  {(char*)"MoveHorizontal", PyvtkSpherePuzzle_MoveHorizontal, METH_VARARGS,
   (char*)"V.MoveHorizontal(int, int, int)\nC++: void MoveHorizontal(int section, int percentage,\n    int rightFlag)\n\nMove the top/bottom half one segment either direction.\n"},
  {(char*)"MoveVertical", PyvtkSpherePuzzle_MoveVertical, METH_VARARGS,
   (char*)"V.MoveVertical(int, int, int)\nC++: void MoveVertical(int section, int percentage, int rightFlag)\n\nRotate vertical half of sphere along one of the longitude lines.\n"},
  {(char*)"SetPoint", PyvtkSpherePuzzle_SetPoint, METH_VARARGS,
   (char*)"V.SetPoint(float, float, float) -> int\nC++: int SetPoint(double x, double y, double z)\n\nSetPoint will be called as the mouse moves over the screen. The\noutput will change to indicate the pending move. SetPoint returns\nzero if move is not activated by point. Otherwise it encodes the\nmove into a unique integer so that the caller can determine if\nthe move state has changed. This will answer the question, \"Should I\nrender.\"\n"},
  {(char*)"MovePoint", PyvtkSpherePuzzle_MovePoint, METH_VARARGS,
   (char*)"V.MovePoint(int)\nC++: void MovePoint(int percentage)\n\nMove actually implements the pending move. When percentage is\n100, the pending move becomes inactive, and SetPoint will have to\nbe called again to setup another move.\n"},
  {(char*)"GetState", PyvtkSpherePuzzle_GetState, METH_VARARGS,
   (char*)"V.GetState() -> (int, ...)\nC++: int *GetState()\n\nFor drawing state as arrows.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpherePuzzle_StaticNew()
{
  return vtkSpherePuzzle::New();
}

PyObject *PyVTKClass_vtkSpherePuzzleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpherePuzzle_StaticNew,
    PyvtkSpherePuzzle_Methods,
    "vtkSpherePuzzle", modulename,
    NULL, NULL,
    PyvtkSpherePuzzle_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpherePuzzle_Doc()
{
  static const char *docstring[] = {
    "vtkSpherePuzzle - create a polygonal sphere centered at the origin\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSpherePuzzle creates\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpherePuzzle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpherePuzzleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpherePuzzle", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_MAX_SPHERE_RESOLUTION", o);
    Py_DECREF(o);
    }
}

