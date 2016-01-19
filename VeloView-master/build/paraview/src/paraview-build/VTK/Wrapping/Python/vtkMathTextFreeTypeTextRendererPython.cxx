// python wrapper for vtkMathTextFreeTypeTextRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMathTextFreeTypeTextRenderer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMathTextFreeTypeTextRendererNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextRendererNew
extern "C" { PyObject *PyVTKClass_vtkTextRendererNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextRendererNew
#endif

static const char **PyvtkMathTextFreeTypeTextRenderer_Doc();


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMathTextFreeTypeTextRenderer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMathTextFreeTypeTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMathTextFreeTypeTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMathTextFreeTypeTextRenderer::NewInstance());

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
PyvtkMathTextFreeTypeTextRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMathTextFreeTypeTextRenderer *tempr = vtkMathTextFreeTypeTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMathTextFreeTypeTextRenderer_Methods[] = {
  {(char*)"GetClassName", PyvtkMathTextFreeTypeTextRenderer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMathTextFreeTypeTextRenderer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMathTextFreeTypeTextRenderer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMathTextFreeTypeTextRenderer\nC++: vtkMathTextFreeTypeTextRenderer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMathTextFreeTypeTextRenderer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMathTextFreeTypeTextRenderer\nC++: vtkMathTextFreeTypeTextRenderer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMathTextFreeTypeTextRenderer_StaticNew()
{
  return vtkMathTextFreeTypeTextRenderer::New();
}

PyObject *PyVTKClass_vtkMathTextFreeTypeTextRendererNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMathTextFreeTypeTextRenderer_StaticNew,
    PyvtkMathTextFreeTypeTextRenderer_Methods,
    "vtkMathTextFreeTypeTextRenderer", modulename,
    NULL, NULL,
    PyvtkMathTextFreeTypeTextRenderer_Doc(),
    PyVTKClass_vtkTextRendererNew(modulename));
  return cls;
}

const char **PyvtkMathTextFreeTypeTextRenderer_Doc()
{
  static const char *docstring[] = {
    "vtkMathTextFreeTypeTextRenderer - Default implementation of\n\n",
    "Superclass: vtkTextRenderer\n\n",
    "Default implementation of vtkTextRenderer using vtkFreeTypeTools and\nvtkMathTextUtilities.\n\nCAVEATS:\n\nThe MathText backend does not currently support UTF16 strings, thus\nUTF16 strings passed to the MathText renderer will be converted to\nUTF8.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMathTextFreeTypeTextRendererNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMathTextFreeTypeTextRenderer", o) != 0)
    {
    Py_DECREF(o);
    }

}

