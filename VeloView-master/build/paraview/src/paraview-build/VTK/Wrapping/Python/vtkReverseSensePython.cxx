// python wrapper for vtkReverseSense
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReverseSense.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReverseSense(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReverseSenseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkReverseSense_Doc();


static PyObject *
PyvtkReverseSense_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReverseSense::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReverseSense::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReverseSense *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReverseSense::NewInstance());

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
PyvtkReverseSense_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReverseSense *tempr = vtkReverseSense::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_SetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseCells(temp0);
      }
    else
      {
      op->vtkReverseSense::SetReverseCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseCells() :
      op->vtkReverseSense::GetReverseCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseCellsOn();
      }
    else
      {
      op->vtkReverseSense::ReverseCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseCellsOff();
      }
    else
      {
      op->vtkReverseSense::ReverseCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_SetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseNormals(temp0);
      }
    else
      {
      op->vtkReverseSense::SetReverseNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseNormals() :
      op->vtkReverseSense::GetReverseNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseNormalsOn();
      }
    else
      {
      op->vtkReverseSense::ReverseNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseNormalsOff();
      }
    else
      {
      op->vtkReverseSense::ReverseNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReverseSense_Methods[] = {
  {(char*)"GetClassName", PyvtkReverseSense_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReverseSense_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReverseSense_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReverseSense\nC++: vtkReverseSense *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReverseSense_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReverseSense\nC++: vtkReverseSense *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetReverseCells", PyvtkReverseSense_SetReverseCells, METH_VARARGS,
   (char*)"V.SetReverseCells(int)\nC++: void SetReverseCells(int a)\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"GetReverseCells", PyvtkReverseSense_GetReverseCells, METH_VARARGS,
   (char*)"V.GetReverseCells() -> int\nC++: int GetReverseCells()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"ReverseCellsOn", PyvtkReverseSense_ReverseCellsOn, METH_VARARGS,
   (char*)"V.ReverseCellsOn()\nC++: void ReverseCellsOn()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"ReverseCellsOff", PyvtkReverseSense_ReverseCellsOff, METH_VARARGS,
   (char*)"V.ReverseCellsOff()\nC++: void ReverseCellsOff()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"SetReverseNormals", PyvtkReverseSense_SetReverseNormals, METH_VARARGS,
   (char*)"V.SetReverseNormals(int)\nC++: void SetReverseNormals(int a)\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"GetReverseNormals", PyvtkReverseSense_GetReverseNormals, METH_VARARGS,
   (char*)"V.GetReverseNormals() -> int\nC++: int GetReverseNormals()\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"ReverseNormalsOn", PyvtkReverseSense_ReverseNormalsOn, METH_VARARGS,
   (char*)"V.ReverseNormalsOn()\nC++: void ReverseNormalsOn()\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"ReverseNormalsOff", PyvtkReverseSense_ReverseNormalsOff, METH_VARARGS,
   (char*)"V.ReverseNormalsOff()\nC++: void ReverseNormalsOff()\n\nFlag controls whether to reverse normal orientation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReverseSense_StaticNew()
{
  return vtkReverseSense::New();
}

PyObject *PyVTKClass_vtkReverseSenseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReverseSense_StaticNew,
    PyvtkReverseSense_Methods,
    "vtkReverseSense", modulename,
    NULL, NULL,
    PyvtkReverseSense_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkReverseSense_Doc()
{
  static const char *docstring[] = {
    "vtkReverseSense - reverse the ordering of polygonal cells and/or\nvertex normals\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkReverseSense is a filter that reverses the order of polygonal\ncells and/or reverses the direction of point and cell normals. Two\nflags are used to control these operations. Cell reversal means\nreversing the order of indices in the cell connectivity list. Normal\nreversal means multiplying the normal vector by -1 (both point and\ncell normals, if present).\n\nCaveats:\n\nNormals can be operated on onl",
    "y if they are present in the data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReverseSense(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReverseSenseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReverseSense", o) != 0)
    {
    Py_DECREF(o);
    }

}

