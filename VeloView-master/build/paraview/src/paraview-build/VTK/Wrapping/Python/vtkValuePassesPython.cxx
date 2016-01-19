// python wrapper for vtkValuePasses
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkValuePasses.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkValuePasses(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkValuePassesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkValuePasses_Doc();


static PyObject *
PyvtkValuePasses_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkValuePasses::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePasses_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValuePasses::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePasses_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkValuePasses *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValuePasses::NewInstance());

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
PyvtkValuePasses_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkValuePasses *tempr = vtkValuePasses::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePasses_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkValuePasses::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkValuePasses_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkValuePasses::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkValuePasses_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkValuePasses_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkValuePasses_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkValuePasses_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkValuePasses_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkValuePasses_SetInputComponentToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputComponentToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputComponentToProcess(temp0);
      }
    else
      {
      op->vtkValuePasses::SetInputComponentToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkValuePasses_SetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePasses *op = static_cast<vtkValuePasses *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkValuePasses::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkValuePasses_Methods[] = {
  {(char*)"GetClassName", PyvtkValuePasses_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkValuePasses_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkValuePasses_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkValuePasses\nC++: vtkValuePasses *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkValuePasses_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkValuePasses\nC++: vtkValuePasses *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputArrayToProcess", PyvtkValuePasses_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldAttributeType)\n\nSet the array to be drawn. By default point scalars are\n"},
  {(char*)"SetInputComponentToProcess", PyvtkValuePasses_SetInputComponentToProcess, METH_VARARGS,
   (char*)"V.SetInputComponentToProcess(int)\nC++: void SetInputComponentToProcess(int comp)\n\nSet the array to be drawn. By default point scalars are\n"},
  {(char*)"SetScalarRange", PyvtkValuePasses_SetScalarRange, METH_VARARGS,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double min, double max)\n\nSet the array to be drawn. By default point scalars are\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkValuePasses_StaticNew()
{
  return vtkValuePasses::New();
}

PyObject *PyVTKClass_vtkValuePassesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkValuePasses_StaticNew,
    PyvtkValuePasses_Methods,
    "vtkValuePasses", modulename,
    NULL, NULL,
    PyvtkValuePasses_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkValuePasses_Doc()
{
  static const char *docstring[] = {
    "vtkValuePasses - Top level pass to render scene for ValuePainter\n\n",
    "Superclass: vtkRenderPass\n\n",
    "vtkValuePasses sets up and renders the scene with a black background\n(vtkClearRGBPass), antialising and other effects turned off and an\ninner ValuePass renderer for opaque objects so that the drawn values\ncan be read back from the screen and used later.\n\nSee Also:\n\nvtkClearRGBPass, vtkValuePass, vtkValuePainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkValuePasses(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkValuePassesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkValuePasses", o) != 0)
    {
    Py_DECREF(o);
    }

}

