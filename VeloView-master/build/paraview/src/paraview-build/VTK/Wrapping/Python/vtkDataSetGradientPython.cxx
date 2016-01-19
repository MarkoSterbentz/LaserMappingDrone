// python wrapper for vtkDataSetGradient
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetGradient.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetGradient(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetGradientNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDataSetGradient_Doc();


static PyObject *
PyvtkDataSetGradient_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradient *op = static_cast<vtkDataSetGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetGradient::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradient *op = static_cast<vtkDataSetGradient *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetGradient::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradient *op = static_cast<vtkDataSetGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetGradient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetGradient::NewInstance());

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
PyvtkDataSetGradient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetGradient *tempr = vtkDataSetGradient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradient_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradient *op = static_cast<vtkDataSetGradient *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResultArrayName(temp0);
      }
    else
      {
      op->vtkDataSetGradient::SetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradient_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradient *op = static_cast<vtkDataSetGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkDataSetGradient::GetResultArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetGradient_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetGradient_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetGradient_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetGradient_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetGradient\nC++: vtkDataSetGradient *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetGradient_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetGradient\nC++: vtkDataSetGradient *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetResultArrayName", PyvtkDataSetGradient_SetResultArrayName, METH_VARARGS,
   (char*)"V.SetResultArrayName(string)\nC++: void SetResultArrayName(char *)\n\nSet/Get the name of computed vector array.\n"},
  {(char*)"GetResultArrayName", PyvtkDataSetGradient_GetResultArrayName, METH_VARARGS,
   (char*)"V.GetResultArrayName() -> string\nC++: char *GetResultArrayName()\n\nSet/Get the name of computed vector array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetGradient_StaticNew()
{
  return vtkDataSetGradient::New();
}

PyObject *PyVTKClass_vtkDataSetGradientNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetGradient_StaticNew,
    PyvtkDataSetGradient_Methods,
    "vtkDataSetGradient", modulename,
    NULL, NULL,
    PyvtkDataSetGradient_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetGradient_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetGradient - computes scalar field gradient\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkDataSetGradient Computes per cell gradient of point scalar field\nor per point gradient of cell scalar field.\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by CEA/DIF - Commissariat a\nl'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard (CEA)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetGradient(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetGradientNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetGradient", o) != 0)
    {
    Py_DECREF(o);
    }

}

