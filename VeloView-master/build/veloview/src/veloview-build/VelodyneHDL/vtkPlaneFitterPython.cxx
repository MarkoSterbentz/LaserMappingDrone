// python wrapper for vtkPlaneFitter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkPlaneFitter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlaneFitter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlaneFitterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPlaneFitter_Doc();


static PyObject *
PyvtkPlaneFitter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneFitter *op = static_cast<vtkPlaneFitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlaneFitter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneFitter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneFitter *op = static_cast<vtkPlaneFitter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneFitter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneFitter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneFitter *op = static_cast<vtkPlaneFitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneFitter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneFitter::NewInstance());

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
PyvtkPlaneFitter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlaneFitter *tempr = vtkPlaneFitter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneFitter_PlaneFit(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PlaneFit");

  vtkPointSet *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3;
  double temp4;
  double temp5;
  double temp6[32];
  double save6[32];
  const int size6 = 32;
  double temp7[32];
  double save7[32];
  const int size7 = 32;
  vtkIdType temp8[32];
  vtkIdType save8[32];
  const int size8 = 32;
  PyObject *result = NULL;

  if (ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp6, save6, size6);
    ap.SaveArray(temp7, save7, size7);
    ap.SaveArray(temp8, save8, size8);

    vtkPlaneFitter::PlaneFit(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (ap.ArrayHasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(8, temp8, size8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaneFitter_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaneFitter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlaneFitter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlaneFitter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlaneFitter\nC++: vtkPlaneFitter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlaneFitter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaneFitter\nC++: vtkPlaneFitter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PlaneFit", PyvtkPlaneFitter_PlaneFit, METH_VARARGS | METH_STATIC,
   (char*)"V.PlaneFit(vtkPointSet, [float, float, float], [float, float,\n    float], float, float, float, [float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float], [float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float], [int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int])\nC++: static void PlaneFit(vtkPointSet *pts, double origin[3],\n    double normal[3], double &minDist, double &maxDist,\n    double &stdDev, double channelMean[32],\n    double channelStdDev[32], vtkIdType channelNpts[32])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaneFitter_StaticNew()
{
  return vtkPlaneFitter::New();
}

PyObject *PyVTKClass_vtkPlaneFitterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaneFitter_StaticNew,
    PyvtkPlaneFitter_Methods,
    "vtkPlaneFitter", modulename,
    NULL, NULL,
    PyvtkPlaneFitter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPlaneFitter_Doc()
{
  static const char *docstring[] = {
    "vtkPlaneFitter - class for finding a plane fit to polydata\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaneFitter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaneFitterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaneFitter", o) != 0)
    {
    Py_DECREF(o);
    }

}

