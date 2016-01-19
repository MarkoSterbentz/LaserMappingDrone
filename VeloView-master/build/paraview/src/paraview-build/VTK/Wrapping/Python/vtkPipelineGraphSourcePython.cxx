// python wrapper for vtkPipelineGraphSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPipelineGraphSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPipelineGraphSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPipelineGraphSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
#endif

static const char **PyvtkPipelineGraphSource_Doc();


static PyObject *
PyvtkPipelineGraphSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineGraphSource *op = static_cast<vtkPipelineGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPipelineGraphSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineGraphSource *op = static_cast<vtkPipelineGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPipelineGraphSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineGraphSource *op = static_cast<vtkPipelineGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPipelineGraphSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPipelineGraphSource::NewInstance());

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
PyvtkPipelineGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPipelineGraphSource *tempr = vtkPipelineGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineGraphSource_AddSink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineGraphSource *op = static_cast<vtkPipelineGraphSource *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->AddSink(temp0);
      }
    else
      {
      op->vtkPipelineGraphSource::AddSink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineGraphSource_RemoveSink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineGraphSource *op = static_cast<vtkPipelineGraphSource *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveSink(temp0);
      }
    else
      {
      op->vtkPipelineGraphSource::RemoveSink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPipelineGraphSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPipelineGraphSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPipelineGraphSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPipelineGraphSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPipelineGraphSource\nC++: vtkPipelineGraphSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPipelineGraphSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPipelineGraphSource\nC++: vtkPipelineGraphSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddSink", PyvtkPipelineGraphSource_AddSink, METH_VARARGS,
   (char*)"V.AddSink(vtkObject)\nC++: void AddSink(vtkObject *object)\n\n"},
  {(char*)"RemoveSink", PyvtkPipelineGraphSource_RemoveSink, METH_VARARGS,
   (char*)"V.RemoveSink(vtkObject)\nC++: void RemoveSink(vtkObject *object)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPipelineGraphSource_StaticNew()
{
  return vtkPipelineGraphSource::New();
}

PyObject *PyVTKClass_vtkPipelineGraphSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPipelineGraphSource_StaticNew,
    PyvtkPipelineGraphSource_Methods,
    "vtkPipelineGraphSource", modulename,
    NULL, NULL,
    PyvtkPipelineGraphSource_Doc(),
    PyVTKClass_vtkDirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPipelineGraphSource_Doc()
{
  static const char *docstring[] = {
    "vtkPipelineGraphSource - a graph constructed from a VTK pipeline\n\n",
    "Superclass: vtkDirectedGraphAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPipelineGraphSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPipelineGraphSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPipelineGraphSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

