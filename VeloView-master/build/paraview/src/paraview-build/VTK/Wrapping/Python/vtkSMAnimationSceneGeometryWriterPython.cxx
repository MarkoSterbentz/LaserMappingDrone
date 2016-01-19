// python wrapper for vtkSMAnimationSceneGeometryWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMAnimationSceneGeometryWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMAnimationSceneGeometryWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMAnimationSceneGeometryWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMAnimationSceneWriterNew
extern "C" { PyObject *PyVTKClass_vtkSMAnimationSceneWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMAnimationSceneWriterNew
#endif

static const char **PyvtkSMAnimationSceneGeometryWriter_Doc();


static PyObject *
PyvtkSMAnimationSceneGeometryWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneGeometryWriter *op = static_cast<vtkSMAnimationSceneGeometryWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMAnimationSceneGeometryWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneGeometryWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneGeometryWriter *op = static_cast<vtkSMAnimationSceneGeometryWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneGeometryWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneGeometryWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneGeometryWriter *op = static_cast<vtkSMAnimationSceneGeometryWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationSceneGeometryWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneGeometryWriter::NewInstance());

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
PyvtkSMAnimationSceneGeometryWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMAnimationSceneGeometryWriter *tempr = vtkSMAnimationSceneGeometryWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneGeometryWriter_GetViewModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneGeometryWriter *op = static_cast<vtkSMAnimationSceneGeometryWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetViewModule() :
      op->vtkSMAnimationSceneGeometryWriter::GetViewModule());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneGeometryWriter_SetViewModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneGeometryWriter *op = static_cast<vtkSMAnimationSceneGeometryWriter *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetViewModule(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneGeometryWriter::SetViewModule(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneGeometryWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSMAnimationSceneGeometryWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMAnimationSceneGeometryWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMAnimationSceneGeometryWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMAnimationSceneGeometryWriter\nC++: vtkSMAnimationSceneGeometryWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMAnimationSceneGeometryWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMAnimationSceneGeometryWriter\nC++: vtkSMAnimationSceneGeometryWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetViewModule", PyvtkSMAnimationSceneGeometryWriter_GetViewModule, METH_VARARGS,
   (char*)"V.GetViewModule() -> vtkSMProxy\nC++: vtkSMProxy *GetViewModule()\n\n"},
  {(char*)"SetViewModule", PyvtkSMAnimationSceneGeometryWriter_SetViewModule, METH_VARARGS,
   (char*)"V.SetViewModule(vtkSMProxy)\nC++: void SetViewModule(vtkSMProxy *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMAnimationSceneGeometryWriter_StaticNew()
{
  return vtkSMAnimationSceneGeometryWriter::New();
}

PyObject *PyVTKClass_vtkSMAnimationSceneGeometryWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMAnimationSceneGeometryWriter_StaticNew,
    PyvtkSMAnimationSceneGeometryWriter_Methods,
    "vtkSMAnimationSceneGeometryWriter", modulename,
    NULL, NULL,
    PyvtkSMAnimationSceneGeometryWriter_Doc(),
    PyVTKClass_vtkSMAnimationSceneWriterNew(modulename));
  return cls;
}

const char **PyvtkSMAnimationSceneGeometryWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSMAnimationSceneGeometryWriter - helper class to write\n\n",
    "Superclass: vtkSMAnimationSceneWriter\n\n",
    "vtkSMAnimationSceneGeometryWriter is a concrete implementation of\nvtkSMAnimationSceneWriter that can write the geometry as a data file.\nThis writer can only write the visible geometry in one view.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMAnimationSceneGeometryWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMAnimationSceneGeometryWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMAnimationSceneGeometryWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

