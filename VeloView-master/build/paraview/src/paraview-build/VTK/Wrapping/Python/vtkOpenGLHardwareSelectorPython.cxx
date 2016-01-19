// python wrapper for vtkOpenGLHardwareSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLHardwareSelector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLHardwareSelector(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLHardwareSelectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHardwareSelectorNew
extern "C" { PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *); }
#define DECLARED_PyVTKClass_vtkHardwareSelectorNew
#endif

static const char **PyvtkOpenGLHardwareSelector_Doc();


static PyObject *
PyvtkOpenGLHardwareSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLHardwareSelector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLHardwareSelector::NewInstance());

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
PyvtkOpenGLHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLHardwareSelector *tempr = vtkOpenGLHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BeginRenderProp();
      }
    else
      {
      op->vtkOpenGLHardwareSelector::BeginRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_EndRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndRenderProp();
      }
    else
      {
      op->vtkOpenGLHardwareSelector::EndRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLHardwareSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLHardwareSelector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLHardwareSelector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLHardwareSelector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLHardwareSelector\nC++: vtkOpenGLHardwareSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLHardwareSelector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLHardwareSelector\nC++: vtkOpenGLHardwareSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BeginRenderProp", PyvtkOpenGLHardwareSelector_BeginRenderProp, METH_VARARGS,
   (char*)"V.BeginRenderProp()\nC++: virtual void BeginRenderProp()\n\nCalled by the mapper (vtkHardwareSelectionPolyDataPainter) before\nand after rendering each prop.\n"},
  {(char*)"EndRenderProp", PyvtkOpenGLHardwareSelector_EndRenderProp, METH_VARARGS,
   (char*)"V.EndRenderProp()\nC++: virtual void EndRenderProp()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLHardwareSelector_StaticNew()
{
  return vtkOpenGLHardwareSelector::New();
}

PyObject *PyVTKClass_vtkOpenGLHardwareSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLHardwareSelector_StaticNew,
    PyvtkOpenGLHardwareSelector_Methods,
    "vtkOpenGLHardwareSelector", modulename,
    NULL, NULL,
    PyvtkOpenGLHardwareSelector_Doc(),
    PyVTKClass_vtkHardwareSelectorNew(modulename));
  return cls;
}

const char **PyvtkOpenGLHardwareSelector_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLHardwareSelector - implements the device specific code of\n\n",
    "Superclass: vtkHardwareSelector\n\n",
    "Implements the device specific code of vtkOpenGLHardwareSelector.\n\nSee Also:\n\nvtkHardwareSelector\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLHardwareSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLHardwareSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLHardwareSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

