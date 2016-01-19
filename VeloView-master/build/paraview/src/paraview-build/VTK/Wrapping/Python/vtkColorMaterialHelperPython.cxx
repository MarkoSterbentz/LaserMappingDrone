// python wrapper for vtkColorMaterialHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColorMaterialHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorMaterialHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorMaterialHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkColorMaterialHelper_Doc();


static PyObject *
PyvtkColorMaterialHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorMaterialHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorMaterialHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorMaterialHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorMaterialHelper::NewInstance());

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
PyvtkColorMaterialHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorMaterialHelper *tempr = vtkColorMaterialHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkColorMaterialHelper::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_GetShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetShader() :
      op->vtkColorMaterialHelper::GetShader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_SetUniformVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetUniformVariables();
      }
    else
      {
      op->vtkColorMaterialHelper::SetUniformVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_PrepareForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRendering();
      }
    else
      {
      op->vtkColorMaterialHelper::PrepareForRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkColorMaterialHelper::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkColorMaterialHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkColorMaterialHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorMaterialHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorMaterialHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorMaterialHelper\nC++: vtkColorMaterialHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorMaterialHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorMaterialHelper\nC++: vtkColorMaterialHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkColorMaterialHelper_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkShaderProgram2)\nC++: void Initialize(vtkShaderProgram2 *)\n\n"},
  {(char*)"GetShader", PyvtkColorMaterialHelper_GetShader, METH_VARARGS,
   (char*)"V.GetShader() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetShader()\n\n"},
  {(char*)"SetUniformVariables", PyvtkColorMaterialHelper_SetUniformVariables, METH_VARARGS,
   (char*)"V.SetUniformVariables()\nC++: void SetUniformVariables()\n\nCapture current OpenGL state and initialize uniform variables\nused by the helper shader.\n"},
  {(char*)"PrepareForRendering", PyvtkColorMaterialHelper_PrepareForRendering, METH_VARARGS,
   (char*)"V.PrepareForRendering()\nC++: void PrepareForRendering()\n\nCaptures current OpenGL state. DEPRECATED (Use\nPrepareForRendering2 instead)\n"},
  {(char*)"Render", PyvtkColorMaterialHelper_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: void Render()\n\nInitializes uniform variables with the last captured OpenGL\nstate. NOTHING IS RENDERED THIS SETS UNIFORMS. DEPRECATED: Use\nSetUnformVariables instead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorMaterialHelper_StaticNew()
{
  return vtkColorMaterialHelper::New();
}

PyObject *PyVTKClass_vtkColorMaterialHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorMaterialHelper_StaticNew,
    PyvtkColorMaterialHelper_Methods,
    "vtkColorMaterialHelper", modulename,
    NULL, NULL,
    PyvtkColorMaterialHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkColorMaterialHelper_Doc()
{
  static const char *docstring[] = {
    "vtkColorMaterialHelper - a helper to assist in simulating the\n\n",
    "Superclass: vtkObject\n\n",
    "vtkColorMaterialHelper is a helper to assist in simulating the\n ColorMaterial behaviour of the default OpenGL pipeline. Look at\n vtkColorMaterialHelper_s for available GLSL functions.\n\nSee Also:\n\n\n vtkShaderProgram2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorMaterialHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorMaterialHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorMaterialHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

