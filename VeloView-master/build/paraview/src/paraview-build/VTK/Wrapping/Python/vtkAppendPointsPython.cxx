// python wrapper for vtkAppendPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAppendPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkAppendPoints_Doc();


static PyObject *
PyvtkAppendPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendPoints::NewInstance());

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
PyvtkAppendPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendPoints *tempr = vtkAppendPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_SetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputIdArrayName(temp0);
      }
    else
      {
      op->vtkAppendPoints::SetInputIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_GetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputIdArrayName() :
      op->vtkAppendPoints::GetInputIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkAppendPoints::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendPoints::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendPoints\nC++: vtkAppendPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendPoints\nC++: vtkAppendPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputIdArrayName", PyvtkAppendPoints_SetInputIdArrayName, METH_VARARGS,
   (char*)"V.SetInputIdArrayName(string)\nC++: void SetInputIdArrayName(char *)\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is NULL (the default), the array\nis not generated.\n"},
  {(char*)"GetInputIdArrayName", PyvtkAppendPoints_GetInputIdArrayName, METH_VARARGS,
   (char*)"V.GetInputIdArrayName() -> string\nC++: char *GetInputIdArrayName()\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is NULL (the default), the array\nis not generated.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkAppendPoints_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the output precision will be double\nprecision. Otherwise, if the desired precision is\nDEFAULT_PRECISION and all the inputs are single precision, then\nthe output will be single precision.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkAppendPoints_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the output precision will be double\nprecision. Otherwise, if the desired precision is\nDEFAULT_PRECISION and all the inputs are single precision, then\nthe output will be single precision.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendPoints_StaticNew()
{
  return vtkAppendPoints::New();
}

PyObject *PyVTKClass_vtkAppendPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendPoints_StaticNew,
    PyvtkAppendPoints_Methods,
    "vtkAppendPoints", modulename,
    NULL, NULL,
    PyvtkAppendPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendPoints_Doc()
{
  static const char *docstring[] = {
    "vtkAppendPoints - appends points of one or more vtkPolyData data sets\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkAppendPoints is a filter that appends the points and associated\ndata of one or more polygonal (vtkPolyData) datasets. This filter can\noptionally add a new array marking the input index that the point\ncame from.\n\nSee Also:\n\nvtkAppendFilter vtkAppendPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

