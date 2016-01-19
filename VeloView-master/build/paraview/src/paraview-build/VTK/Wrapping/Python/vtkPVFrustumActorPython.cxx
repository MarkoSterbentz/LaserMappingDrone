// python wrapper for vtkPVFrustumActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVFrustumActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVFrustumActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVFrustumActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenGLActorNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLActorNew
#endif

static const char **PyvtkPVFrustumActor_Doc();


static PyObject *
PyvtkPVFrustumActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVFrustumActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFrustumActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFrustumActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFrustumActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVFrustumActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFrustumActor::NewInstance());

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
PyvtkPVFrustumActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVFrustumActor *tempr = vtkPVFrustumActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFrustumActor_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

  double temp0[24];
  double save0[24];
  const int size0 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFrustum(temp0);
      }
    else
      {
      op->vtkPVFrustumActor::SetFrustum(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFrustumActor_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVFrustumActor::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFrustumActor_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFrustumActor *op = static_cast<vtkPVFrustumActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkPVFrustumActor::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVFrustumActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVFrustumActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVFrustumActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVFrustumActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVFrustumActor\nC++: vtkPVFrustumActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVFrustumActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVFrustumActor\nC++: vtkPVFrustumActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFrustum", PyvtkPVFrustumActor_SetFrustum, METH_VARARGS,
   (char*)"V.SetFrustum([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float])\nC++: void SetFrustum(double corners[24])\n\nGet/Set the frustum.\n"},
  {(char*)"SetColor", PyvtkPVFrustumActor_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double r, double g, double b)\n\nConvenience method to set the color.\n"},
  {(char*)"SetLineWidth", PyvtkPVFrustumActor_SetLineWidth, METH_VARARGS,
   (char*)"V.SetLineWidth(float)\nC++: void SetLineWidth(double r)\n\nConvenience method to set the color.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVFrustumActor_StaticNew()
{
  return vtkPVFrustumActor::New();
}

PyObject *PyVTKClass_vtkPVFrustumActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVFrustumActor_StaticNew,
    PyvtkPVFrustumActor_Methods,
    "vtkPVFrustumActor", modulename,
    NULL, NULL,
    PyvtkPVFrustumActor_Doc(),
    PyVTKClass_vtkOpenGLActorNew(modulename));
  return cls;
}

const char **PyvtkPVFrustumActor_Doc()
{
  static const char *docstring[] = {
    "vtkPVFrustumActor\n\n",
    "Superclass: vtkOpenGLActor\n\n",
    "vtkPVFrustumActor is an actor that renders a frustum. Used in\nParaView to show the frustum used for frustum selection extraction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVFrustumActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVFrustumActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVFrustumActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

