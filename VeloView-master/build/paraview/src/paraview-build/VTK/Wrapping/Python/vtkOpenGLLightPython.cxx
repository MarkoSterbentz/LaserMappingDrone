// python wrapper for vtkOpenGLLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLLight.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLLight(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLLightNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLightNew
extern "C" { PyObject *PyVTKClass_vtkLightNew(const char *); }
#define DECLARED_PyVTKClass_vtkLightNew
#endif

static const char **PyvtkOpenGLLight_Doc();


static PyObject *
PyvtkOpenGLLight_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLLight::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLLight::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLLight::NewInstance());

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
PyvtkOpenGLLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLLight *tempr = vtkOpenGLLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

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
      op->vtkOpenGLLight::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLight_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLight_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLight_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLight_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLLight\nC++: vtkOpenGLLight *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLight_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLight\nC++: vtkOpenGLLight *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLLight_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, int)\nC++: void Render(vtkRenderer *ren, int light_index)\n\nImplement base class method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLight_StaticNew()
{
  return vtkOpenGLLight::New();
}

PyObject *PyVTKClass_vtkOpenGLLightNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLight_StaticNew,
    PyvtkOpenGLLight_Methods,
    "vtkOpenGLLight", modulename,
    NULL, NULL,
    PyvtkOpenGLLight_Doc(),
    PyVTKClass_vtkLightNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLight_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLight - OpenGL light\n\n",
    "Superclass: vtkLight\n\n",
    "vtkOpenGLLight is a concrete implementation of the abstract class\nvtkLight. vtkOpenGLLight interfaces to the OpenGL rendering library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLight(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLightNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLight", o) != 0)
    {
    Py_DECREF(o);
    }

}

