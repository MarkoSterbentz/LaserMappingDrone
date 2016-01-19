// python wrapper for vtkWrappedTupleInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkWrappedTupleInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWrappedTupleInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWrappedTupleInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTupleInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkTupleInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkTupleInterpolatorNew
#endif

static const char **PyvtkWrappedTupleInterpolator_Doc();


static PyObject *
PyvtkWrappedTupleInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWrappedTupleInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWrappedTupleInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWrappedTupleInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWrappedTupleInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWrappedTupleInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWrappedTupleInterpolator::NewInstance());

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
PyvtkWrappedTupleInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWrappedTupleInterpolator *tempr = vtkWrappedTupleInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWrappedTupleInterpolator_InterpolateTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[1];
  double save1[1];
  const int size1 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple1(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple1(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple2(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple2(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple3(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple3(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple4(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple4(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[5];
  double save1[5];
  const int size1 = 5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple5(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple5(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple9(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple9(temp0, temp1);
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
PyvtkWrappedTupleInterpolator_InterpolateTuple16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple16");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWrappedTupleInterpolator *op = static_cast<vtkWrappedTupleInterpolator *>(vp);

  double temp0;
  double temp1[16];
  double save1[16];
  const int size1 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateTuple16(temp0, temp1);
      }
    else
      {
      op->vtkWrappedTupleInterpolator::InterpolateTuple16(temp0, temp1);
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

static PyMethodDef PyvtkWrappedTupleInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkWrappedTupleInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWrappedTupleInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWrappedTupleInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWrappedTupleInterpolator\nC++: vtkWrappedTupleInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWrappedTupleInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWrappedTupleInterpolator\nC++: vtkWrappedTupleInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InterpolateTuple1", PyvtkWrappedTupleInterpolator_InterpolateTuple1, METH_VARARGS,
   (char*)"V.InterpolateTuple1(float, [float])\nC++: void InterpolateTuple1(double t, double tuple[1])\n\n"},
  {(char*)"InterpolateTuple2", PyvtkWrappedTupleInterpolator_InterpolateTuple2, METH_VARARGS,
   (char*)"V.InterpolateTuple2(float, [float, float])\nC++: void InterpolateTuple2(double t, double tuple[2])\n\n"},
  {(char*)"InterpolateTuple3", PyvtkWrappedTupleInterpolator_InterpolateTuple3, METH_VARARGS,
   (char*)"V.InterpolateTuple3(float, [float, float, float])\nC++: void InterpolateTuple3(double t, double tuple[3])\n\n"},
  {(char*)"InterpolateTuple4", PyvtkWrappedTupleInterpolator_InterpolateTuple4, METH_VARARGS,
   (char*)"V.InterpolateTuple4(float, [float, float, float, float])\nC++: void InterpolateTuple4(double t, double tuple[4])\n\n"},
  {(char*)"InterpolateTuple5", PyvtkWrappedTupleInterpolator_InterpolateTuple5, METH_VARARGS,
   (char*)"V.InterpolateTuple5(float, [float, float, float, float, float])\nC++: void InterpolateTuple5(double t, double tuple[5])\n\n"},
  {(char*)"InterpolateTuple9", PyvtkWrappedTupleInterpolator_InterpolateTuple9, METH_VARARGS,
   (char*)"V.InterpolateTuple9(float, [float, float, float, float, float,\n    float, float, float, float])\nC++: void InterpolateTuple9(double t, double tuple[9])\n\n"},
  {(char*)"InterpolateTuple16", PyvtkWrappedTupleInterpolator_InterpolateTuple16, METH_VARARGS,
   (char*)"V.InterpolateTuple16(float, [float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float])\nC++: void InterpolateTuple16(double t, double tuple[16])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWrappedTupleInterpolator_StaticNew()
{
  return vtkWrappedTupleInterpolator::New();
}

PyObject *PyVTKClass_vtkWrappedTupleInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWrappedTupleInterpolator_StaticNew,
    PyvtkWrappedTupleInterpolator_Methods,
    "vtkWrappedTupleInterpolator", modulename,
    NULL, NULL,
    PyvtkWrappedTupleInterpolator_Doc(),
    PyVTKClass_vtkTupleInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkWrappedTupleInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkWrappedTupleInterpolator -\n\n",
    "Superclass: vtkTupleInterpolator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWrappedTupleInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWrappedTupleInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWrappedTupleInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

