// python wrapper for vtkClearRGBPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClearRGBPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClearRGBPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClearRGBPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkClearRGBPass_Doc();


static PyObject *
PyvtkClearRGBPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClearRGBPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearRGBPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClearRGBPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearRGBPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClearRGBPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClearRGBPass::NewInstance());

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
PyvtkClearRGBPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClearRGBPass *tempr = vtkClearRGBPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearRGBPass_SetBackground_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0, temp1, temp2);
      }
    else
      {
      op->vtkClearRGBPass::SetBackground(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClearRGBPass_SetBackground_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0);
      }
    else
      {
      op->vtkClearRGBPass::SetBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClearRGBPass_SetBackground(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkClearRGBPass_SetBackground_s1(self, args);
    case 1:
      return PyvtkClearRGBPass_SetBackground_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground");
  return NULL;
}



static PyObject *
PyvtkClearRGBPass_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkClearRGBPass::GetBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkClearRGBPass_Methods[] = {
  {(char*)"GetClassName", PyvtkClearRGBPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClearRGBPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClearRGBPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClearRGBPass\nC++: vtkClearRGBPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClearRGBPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClearRGBPass\nC++: vtkClearRGBPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBackground", PyvtkClearRGBPass_SetBackground, METH_VARARGS,
   (char*)"V.SetBackground(float, float, float)\nC++: void SetBackground(double, double, double)\nV.SetBackground((float, float, float))\nC++: void SetBackground(double a[3])\n\n"},
  {(char*)"GetBackground", PyvtkClearRGBPass_GetBackground, METH_VARARGS,
   (char*)"V.GetBackground() -> (float, float, float)\nC++: double *GetBackground()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClearRGBPass_StaticNew()
{
  return vtkClearRGBPass::New();
}

PyObject *PyVTKClass_vtkClearRGBPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClearRGBPass_StaticNew,
    PyvtkClearRGBPass_Methods,
    "vtkClearRGBPass", modulename,
    NULL, NULL,
    PyvtkClearRGBPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkClearRGBPass_Doc()
{
  static const char *docstring[] = {
    "vtkClearRGBPass - Paint in the color buffer.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Clear the color buffer to the specified color.\n\nSee Also:\n\nvtkValuePasses\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClearRGBPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClearRGBPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClearRGBPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

