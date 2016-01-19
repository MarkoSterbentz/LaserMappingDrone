// python wrapper for vtkIntersectFragments
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIntersectFragments.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIntersectFragments(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIntersectFragmentsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkIntersectFragments_Doc();


static PyObject *
PyvtkIntersectFragments_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIntersectFragments::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntersectFragments::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIntersectFragments *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntersectFragments::NewInstance());

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
PyvtkIntersectFragments_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIntersectFragments *tempr = vtkIntersectFragments::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkIntersectFragments::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkIntersectFragments::GetCutFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SetGeometryInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGeometryInputConnection(temp0);
      }
    else
      {
      op->vtkIntersectFragments::SetGeometryInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_SetStatisticsInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatisticsInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetStatisticsInputConnection(temp0);
      }
    else
      {
      op->vtkIntersectFragments::SetStatisticsInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectFragments_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectFragments *op = static_cast<vtkIntersectFragments *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkIntersectFragments::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIntersectFragments_Methods[] = {
  {(char*)"GetClassName", PyvtkIntersectFragments_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIntersectFragments_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIntersectFragments_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIntersectFragments\nC++: vtkIntersectFragments *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIntersectFragments_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIntersectFragments\nC++: vtkIntersectFragments *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutFunction", PyvtkIntersectFragments_SetCutFunction, METH_VARARGS,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkIntersectFragments_GetCutFunction, METH_VARARGS,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetGeometryInputConnection", PyvtkIntersectFragments_SetGeometryInputConnection, METH_VARARGS,
   (char*)"V.SetGeometryInputConnection(vtkAlgorithmOutput)\nC++: void SetGeometryInputConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSpecify the geometry Input.\n"},
  {(char*)"SetStatisticsInputConnection", PyvtkIntersectFragments_SetStatisticsInputConnection, METH_VARARGS,
   (char*)"V.SetStatisticsInputConnection(vtkAlgorithmOutput)\nC++: void SetStatisticsInputConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSpecify the geometry Input.\n"},
  {(char*)"GetMTime", PyvtkIntersectFragments_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we refer to vtkImplicitFunction.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIntersectFragments_StaticNew()
{
  return vtkIntersectFragments::New();
}

PyObject *PyVTKClass_vtkIntersectFragmentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIntersectFragments_StaticNew,
    PyvtkIntersectFragments_Methods,
    "vtkIntersectFragments", modulename,
    NULL, NULL,
    PyvtkIntersectFragments_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIntersectFragments_Doc()
{
  static const char *docstring[] = {
    "vtkIntersectFragments - Geometry intersection operations.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "TODO\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIntersectFragments(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIntersectFragmentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIntersectFragments", o) != 0)
    {
    Py_DECREF(o);
    }

}

