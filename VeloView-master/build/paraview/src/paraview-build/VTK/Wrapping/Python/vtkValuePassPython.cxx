// python wrapper for vtkValuePass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkValuePass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkValuePass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkValuePassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpaquePassNew
extern "C" { PyObject *PyVTKClass_vtkOpaquePassNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpaquePassNew
#endif

static const char **PyvtkValuePass_Doc();


static PyObject *
PyvtkValuePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkValuePass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValuePass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkValuePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValuePass::NewInstance());

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
PyvtkValuePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkValuePass *tempr = vtkValuePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkValuePass_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkValuePass_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkValuePass_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkValuePass_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkValuePass_SetInputArrayToProcess_Methods;
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
PyvtkValuePass_SetInputComponentToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputComponentToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::SetInputComponentToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkValuePass_SetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkValuePass_Methods[] = {
  {(char*)"GetClassName", PyvtkValuePass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkValuePass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkValuePass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkValuePass\nC++: vtkValuePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkValuePass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkValuePass\nC++: vtkValuePass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputArrayToProcess", PyvtkValuePass_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldAttributeType)\n\nSet the array to be drawn.\n"},
  {(char*)"SetInputComponentToProcess", PyvtkValuePass_SetInputComponentToProcess, METH_VARARGS,
   (char*)"V.SetInputComponentToProcess(int)\nC++: void SetInputComponentToProcess(int comp)\n\nSet the array to be drawn.\n"},
  {(char*)"SetScalarRange", PyvtkValuePass_SetScalarRange, METH_VARARGS,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double min, double max)\n\nSet the array to be drawn.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkValuePass_StaticNew()
{
  return vtkValuePass::New();
}

PyObject *PyVTKClass_vtkValuePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkValuePass_StaticNew,
    PyvtkValuePass_Methods,
    "vtkValuePass", modulename,
    NULL, NULL,
    PyvtkValuePass_Doc(),
    PyVTKClass_vtkOpaquePassNew(modulename));
  return cls;
}

const char **PyvtkValuePass_Doc()
{
  static const char *docstring[] = {
    "vtkValuePass - Render opaque objects with the vtkValuePainter\n\n",
    "Superclass: vtkOpaquePass\n\n",
    "This is a render pass draws polygonal data with the vtkValuePainter.\n\nSee Also:\n\nvtkValuePainter, vtkValuePass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkValuePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkValuePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkValuePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

