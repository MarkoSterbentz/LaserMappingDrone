// python wrapper for vtkSimpleBondPerceiver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSimpleBondPerceiver.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimpleBondPerceiver(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimpleBondPerceiverNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMoleculeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeAlgorithmNew
#endif

static const char **PyvtkSimpleBondPerceiver_Doc();


static PyObject *
PyvtkSimpleBondPerceiver_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimpleBondPerceiver::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleBondPerceiver::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimpleBondPerceiver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleBondPerceiver::NewInstance());

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
PyvtkSimpleBondPerceiver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimpleBondPerceiver *tempr = vtkSimpleBondPerceiver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSimpleBondPerceiver::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSimpleBondPerceiver::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleBondPerceiver_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleBondPerceiver_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleBondPerceiver_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleBondPerceiver_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimpleBondPerceiver\nC++: vtkSimpleBondPerceiver *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleBondPerceiver_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleBondPerceiver\nC++: vtkSimpleBondPerceiver *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTolerance", PyvtkSimpleBondPerceiver_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(float a)\n\nSet/Get the tolerance used in the comparisons. (Default: 0.45)\n"},
  {(char*)"GetTolerance", PyvtkSimpleBondPerceiver_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: float GetTolerance()\n\nSet/Get the tolerance used in the comparisons. (Default: 0.45)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleBondPerceiver_StaticNew()
{
  return vtkSimpleBondPerceiver::New();
}

PyObject *PyVTKClass_vtkSimpleBondPerceiverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleBondPerceiver_StaticNew,
    PyvtkSimpleBondPerceiver_Methods,
    "vtkSimpleBondPerceiver", modulename,
    NULL, NULL,
    PyvtkSimpleBondPerceiver_Doc(),
    PyVTKClass_vtkMoleculeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSimpleBondPerceiver_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleBondPerceiver - Create a simple guess of a molecule's\n\n",
    "Superclass: vtkMoleculeAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleBondPerceiver(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleBondPerceiverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleBondPerceiver", o) != 0)
    {
    Py_DECREF(o);
    }

}

