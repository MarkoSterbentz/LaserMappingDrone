// python wrapper for vtkRIBLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRIBLight.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRIBLight(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRIBLightNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLightNew
extern "C" { PyObject *PyVTKClass_vtkLightNew(const char *); }
#define DECLARED_PyVTKClass_vtkLightNew
#endif

static const char **PyvtkRIBLight_Doc();


static PyObject *
PyvtkRIBLight_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRIBLight::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBLight::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRIBLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBLight::NewInstance());

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
PyvtkRIBLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRIBLight *tempr = vtkRIBLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_ShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadowsOn();
      }
    else
      {
      op->vtkRIBLight::ShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_ShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadowsOff();
      }
    else
      {
      op->vtkRIBLight::ShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_SetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShadows(temp0);
      }
    else
      {
      op->vtkRIBLight::SetShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_GetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShadows() :
      op->vtkRIBLight::GetShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  vtkRenderer *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkRIBLight::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRIBLight_Methods[] = {
  {(char*)"GetClassName", PyvtkRIBLight_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRIBLight_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRIBLight_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRIBLight\nC++: vtkRIBLight *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRIBLight_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRIBLight\nC++: vtkRIBLight *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ShadowsOn", PyvtkRIBLight_ShadowsOn, METH_VARARGS,
   (char*)"V.ShadowsOn()\nC++: void ShadowsOn()\n\n"},
  {(char*)"ShadowsOff", PyvtkRIBLight_ShadowsOff, METH_VARARGS,
   (char*)"V.ShadowsOff()\nC++: void ShadowsOff()\n\n"},
  {(char*)"SetShadows", PyvtkRIBLight_SetShadows, METH_VARARGS,
   (char*)"V.SetShadows(int)\nC++: void SetShadows(int a)\n\n"},
  {(char*)"GetShadows", PyvtkRIBLight_GetShadows, METH_VARARGS,
   (char*)"V.GetShadows() -> int\nC++: int GetShadows()\n\n"},
  {(char*)"Render", PyvtkRIBLight_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, int)\nC++: void Render(vtkRenderer *ren, int index)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRIBLight_StaticNew()
{
  return vtkRIBLight::New();
}

PyObject *PyVTKClass_vtkRIBLightNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRIBLight_StaticNew,
    PyvtkRIBLight_Methods,
    "vtkRIBLight", modulename,
    NULL, NULL,
    PyvtkRIBLight_Doc(),
    PyVTKClass_vtkLightNew(modulename));
  return cls;
}

const char **PyvtkRIBLight_Doc()
{
  static const char *docstring[] = {
    "vtkRIBLight - RIP Light\n\n",
    "Superclass: vtkLight\n\n",
    "vtkRIBLight is a subclass of vtkLight that allows the user to specify\nlight source shaders and shadow casting lights for use with\nRenderMan.\n\nSee Also:\n\nvtkRIBExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRIBLight(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRIBLightNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRIBLight", o) != 0)
    {
    Py_DECREF(o);
    }

}

