// python wrapper for vtkPMaskPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPMaskPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPMaskPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPMaskPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMaskPointsNew
extern "C" { PyObject *PyVTKClass_vtkMaskPointsNew(const char *); }
#define DECLARED_PyVTKClass_vtkMaskPointsNew
#endif

static const char **PyvtkPMaskPoints_Doc();


static PyObject *
PyvtkPMaskPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMaskPoints *op = static_cast<vtkPMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPMaskPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMaskPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMaskPoints *op = static_cast<vtkPMaskPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPMaskPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMaskPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMaskPoints *op = static_cast<vtkPMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPMaskPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPMaskPoints::NewInstance());

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
PyvtkPMaskPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPMaskPoints *tempr = vtkPMaskPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMaskPoints_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMaskPoints *op = static_cast<vtkPMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPMaskPoints::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMaskPoints_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMaskPoints *op = static_cast<vtkPMaskPoints *>(vp);

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
      op->vtkPMaskPoints::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPMaskPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkPMaskPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPMaskPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPMaskPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPMaskPoints\nC++: vtkPMaskPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPMaskPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPMaskPoints\nC++: vtkPMaskPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPMaskPoints_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet the communicator object for interprocess communication\n"},
  {(char*)"SetController", PyvtkPMaskPoints_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet the communicator object for interprocess communication\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPMaskPoints_StaticNew()
{
  return vtkPMaskPoints::New();
}

PyObject *PyVTKClass_vtkPMaskPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPMaskPoints_StaticNew,
    PyvtkPMaskPoints_Methods,
    "vtkPMaskPoints", modulename,
    NULL, NULL,
    PyvtkPMaskPoints_Doc(),
    PyVTKClass_vtkMaskPointsNew(modulename));
  return cls;
}

const char **PyvtkPMaskPoints_Doc()
{
  static const char *docstring[] = {
    "vtkPMaskPoints - parallel Mask Points\n\n",
    "Superclass: vtkMaskPoints\n\n",
    "The difference between this implementation and vtkMaskPoints is the\nuse of the vtkMultiProcessController and that\nProportionalMaximumNumberOfPoints is obeyed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPMaskPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPMaskPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPMaskPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

