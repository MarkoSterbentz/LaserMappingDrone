// python wrapper for vtkNormalizeMatrixVectors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNormalizeMatrixVectors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNormalizeMatrixVectors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNormalizeMatrixVectorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkNormalizeMatrixVectors_Doc();


static PyObject *
PyvtkNormalizeMatrixVectors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNormalizeMatrixVectors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNormalizeMatrixVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNormalizeMatrixVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNormalizeMatrixVectors::NewInstance());

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
PyvtkNormalizeMatrixVectors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNormalizeMatrixVectors *tempr = vtkNormalizeMatrixVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorDimension() :
      op->vtkNormalizeMatrixVectors::GetVectorDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorDimension(temp0);
      }
    else
      {
      op->vtkNormalizeMatrixVectors::SetVectorDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPValue() :
      op->vtkNormalizeMatrixVectors::GetPValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPValue(temp0);
      }
    else
      {
      op->vtkNormalizeMatrixVectors::SetPValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNormalizeMatrixVectors_Methods[] = {
  {(char*)"GetClassName", PyvtkNormalizeMatrixVectors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNormalizeMatrixVectors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNormalizeMatrixVectors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNormalizeMatrixVectors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVectorDimension", PyvtkNormalizeMatrixVectors_GetVectorDimension, METH_VARARGS,
   (char*)"V.GetVectorDimension() -> int\nC++: int GetVectorDimension()\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {(char*)"SetVectorDimension", PyvtkNormalizeMatrixVectors_SetVectorDimension, METH_VARARGS,
   (char*)"V.SetVectorDimension(int)\nC++: void SetVectorDimension(int a)\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {(char*)"GetPValue", PyvtkNormalizeMatrixVectors_GetPValue, METH_VARARGS,
   (char*)"V.GetPValue() -> float\nC++: double GetPValue()\n\nValue of p in p-norm normalization, subject to p >= 1.  Default\nis p=2 (Euclidean norm).\n"},
  {(char*)"SetPValue", PyvtkNormalizeMatrixVectors_SetPValue, METH_VARARGS,
   (char*)"V.SetPValue(float)\nC++: void SetPValue(double a)\n\nValue of p in p-norm normalization, subject to p >= 1.  Default\nis p=2 (Euclidean norm).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNormalizeMatrixVectors_StaticNew()
{
  return vtkNormalizeMatrixVectors::New();
}

PyObject *PyVTKClass_vtkNormalizeMatrixVectorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNormalizeMatrixVectors_StaticNew,
    PyvtkNormalizeMatrixVectors_Methods,
    "vtkNormalizeMatrixVectors", modulename,
    NULL, NULL,
    PyvtkNormalizeMatrixVectors_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNormalizeMatrixVectors_Doc()
{
  static const char *docstring[] = {
    "vtkNormalizeMatrixVectors - given a sparse input matrix, produces\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNormalizeMatrixVectors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNormalizeMatrixVectorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNormalizeMatrixVectors", o) != 0)
    {
    Py_DECREF(o);
    }

}

