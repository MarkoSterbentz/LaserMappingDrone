// python wrapper for vtkPBivariateLinearTableThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPBivariateLinearTableThreshold.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPBivariateLinearTableThreshold(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPBivariateLinearTableThresholdNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBivariateLinearTableThresholdNew
extern "C" { PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *); }
#define DECLARED_PyVTKClass_vtkBivariateLinearTableThresholdNew
#endif

static const char **PyvtkPBivariateLinearTableThreshold_Doc();


static PyObject *
PyvtkPBivariateLinearTableThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBivariateLinearTableThreshold *op = static_cast<vtkPBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPBivariateLinearTableThreshold::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPBivariateLinearTableThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBivariateLinearTableThreshold *op = static_cast<vtkPBivariateLinearTableThreshold *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPBivariateLinearTableThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPBivariateLinearTableThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBivariateLinearTableThreshold *op = static_cast<vtkPBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPBivariateLinearTableThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPBivariateLinearTableThreshold::NewInstance());

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
PyvtkPBivariateLinearTableThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPBivariateLinearTableThreshold *tempr = vtkPBivariateLinearTableThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPBivariateLinearTableThreshold_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBivariateLinearTableThreshold *op = static_cast<vtkPBivariateLinearTableThreshold *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPBivariateLinearTableThreshold::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPBivariateLinearTableThreshold_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBivariateLinearTableThreshold *op = static_cast<vtkPBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPBivariateLinearTableThreshold::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPBivariateLinearTableThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkPBivariateLinearTableThreshold_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPBivariateLinearTableThreshold_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPBivariateLinearTableThreshold_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPBivariateLinearTableThreshold\nC++: vtkPBivariateLinearTableThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPBivariateLinearTableThreshold_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPBivariateLinearTableThreshold\nC++: vtkPBivariateLinearTableThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPBivariateLinearTableThreshold_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet the vtkMultiProcessController to be used for combining filter\nresults from the individual nodes.\n"},
  {(char*)"GetController", PyvtkPBivariateLinearTableThreshold_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet the vtkMultiProcessController to be used for combining filter\nresults from the individual nodes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPBivariateLinearTableThreshold_StaticNew()
{
  return vtkPBivariateLinearTableThreshold::New();
}

PyObject *PyVTKClass_vtkPBivariateLinearTableThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPBivariateLinearTableThreshold_StaticNew,
    PyvtkPBivariateLinearTableThreshold_Methods,
    "vtkPBivariateLinearTableThreshold", modulename,
    NULL, NULL,
    PyvtkPBivariateLinearTableThreshold_Doc(),
    PyVTKClass_vtkBivariateLinearTableThresholdNew(modulename));
  return cls;
}

const char **PyvtkPBivariateLinearTableThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkPBivariateLinearTableThreshold - performs line-based thresholding\n\n",
    "Superclass: vtkBivariateLinearTableThreshold\n\n",
    "Perform the table filtering operations provided by\nvtkBivariateLinearTableThreshold in parallel.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPBivariateLinearTableThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPBivariateLinearTableThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPBivariateLinearTableThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

}

