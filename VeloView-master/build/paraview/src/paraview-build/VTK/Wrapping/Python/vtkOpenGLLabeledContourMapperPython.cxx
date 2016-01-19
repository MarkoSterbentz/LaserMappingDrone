// python wrapper for vtkOpenGLLabeledContourMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkOpenGLLabeledContourMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLLabeledContourMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLLabeledContourMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLabeledContourMapperNew
extern "C" { PyObject *PyVTKClass_vtkLabeledContourMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabeledContourMapperNew
#endif

static const char **PyvtkOpenGLLabeledContourMapper_Doc();


static PyObject *
PyvtkOpenGLLabeledContourMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLabeledContourMapper *op = static_cast<vtkOpenGLLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLLabeledContourMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLabeledContourMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLabeledContourMapper *op = static_cast<vtkOpenGLLabeledContourMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLLabeledContourMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLabeledContourMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLabeledContourMapper *op = static_cast<vtkOpenGLLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLLabeledContourMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLLabeledContourMapper::NewInstance());

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
PyvtkOpenGLLabeledContourMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLLabeledContourMapper *tempr = vtkOpenGLLabeledContourMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLabeledContourMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLabeledContourMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLabeledContourMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLabeledContourMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLLabeledContourMapper\nC++: vtkOpenGLLabeledContourMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLabeledContourMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLabeledContourMapper\nC++: vtkOpenGLLabeledContourMapper *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLabeledContourMapper_StaticNew()
{
  return vtkOpenGLLabeledContourMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLLabeledContourMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLabeledContourMapper_StaticNew,
    PyvtkOpenGLLabeledContourMapper_Methods,
    "vtkOpenGLLabeledContourMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLLabeledContourMapper_Doc(),
    PyVTKClass_vtkLabeledContourMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLabeledContourMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLabeledContourMapper\n\n",
    "Superclass: vtkLabeledContourMapper\n\n",
    "vtkOpenGLLabeledContourMapper is an override for\nvtkLabeledContourMapper that implements stenciling using the OpenGL\nAPI.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLabeledContourMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLabeledContourMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLabeledContourMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

