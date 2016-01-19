// python wrapper for vtkHyperTreeGridAxisCut
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperTreeGridAxisCut.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeGridAxisCut(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeGridAxisCutNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHyperTreeGridAxisCut_Doc();


static PyObject *
PyvtkHyperTreeGridAxisCut_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeGridAxisCut::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAxisCut::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeGridAxisCut *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAxisCut::NewInstance());

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
PyvtkHyperTreeGridAxisCut_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeGridAxisCut *tempr = vtkHyperTreeGridAxisCut::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_SetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneNormalAxis(temp0);
      }
    else
      {
      op->vtkHyperTreeGridAxisCut::SetPlaneNormalAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_GetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxis() :
      op->vtkHyperTreeGridAxisCut::GetPlaneNormalAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_SetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlanePosition(temp0);
      }
    else
      {
      op->vtkHyperTreeGridAxisCut::SetPlanePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisCut_GetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisCut *op = static_cast<vtkHyperTreeGridAxisCut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPlanePosition() :
      op->vtkHyperTreeGridAxisCut::GetPlanePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridAxisCut_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTreeGridAxisCut_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeGridAxisCut_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeGridAxisCut_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeGridAxisCut\nC++: vtkHyperTreeGridAxisCut *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeGridAxisCut_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeGridAxisCut\nC++: vtkHyperTreeGridAxisCut *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlaneNormalAxis", PyvtkHyperTreeGridAxisCut_SetPlaneNormalAxis, METH_VARARGS,
   (char*)"V.SetPlaneNormalAxis(int)\nC++: void SetPlaneNormalAxis(int a)\n\nNormal axis: 0=X, 1=Y, 2=Z. Default is 0\n"},
  {(char*)"GetPlaneNormalAxis", PyvtkHyperTreeGridAxisCut_GetPlaneNormalAxis, METH_VARARGS,
   (char*)"V.GetPlaneNormalAxis() -> int\nC++: int GetPlaneNormalAxis()\n\nNormal axis: 0=X, 1=Y, 2=Z. Default is 0\n"},
  {(char*)"SetPlanePosition", PyvtkHyperTreeGridAxisCut_SetPlanePosition, METH_VARARGS,
   (char*)"V.SetPlanePosition(float)\nC++: void SetPlanePosition(double a)\n\nPosition of plane: Axis constant. Default is 0.0\n"},
  {(char*)"GetPlanePosition", PyvtkHyperTreeGridAxisCut_GetPlanePosition, METH_VARARGS,
   (char*)"V.GetPlanePosition() -> float\nC++: double GetPlanePosition()\n\nPosition of plane: Axis constant. Default is 0.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperTreeGridAxisCut_StaticNew()
{
  return vtkHyperTreeGridAxisCut::New();
}

PyObject *PyVTKClass_vtkHyperTreeGridAxisCutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperTreeGridAxisCut_StaticNew,
    PyvtkHyperTreeGridAxisCut_Methods,
    "vtkHyperTreeGridAxisCut", modulename,
    NULL, NULL,
    PyvtkHyperTreeGridAxisCut_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeGridAxisCut_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeGridAxisCut - Axis aligned hyper tree grid cut\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Cut along an axis aligned plane. Only works for 3D grids. Produces\ndisjoint (no point sharing) quads for now. NB: If cut plane contains\ninter-cell boundaries, the output will contain superimposed faces as\na result.\n\nSee Also:\n\nvtkHyperTreeGrid\n\nThanks:\n\nThis class was written by Philippe Pebay and Charles Law, Kitware\n2012 This work was supported in part by Commissariat a l'Energie\nAtomique (CEA/D",
    "IF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeGridAxisCut(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeGridAxisCutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeGridAxisCut", o) != 0)
    {
    Py_DECREF(o);
    }

}

