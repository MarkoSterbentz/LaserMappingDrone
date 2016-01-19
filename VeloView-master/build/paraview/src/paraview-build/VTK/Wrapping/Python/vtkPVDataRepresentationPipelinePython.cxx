// python wrapper for vtkPVDataRepresentationPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDataRepresentationPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataRepresentationPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataRepresentationPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
#endif

static const char **PyvtkPVDataRepresentationPipeline_Doc();


static PyObject *
PyvtkPVDataRepresentationPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentationPipeline *op = static_cast<vtkPVDataRepresentationPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataRepresentationPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentationPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentationPipeline *op = static_cast<vtkPVDataRepresentationPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataRepresentationPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentationPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentationPipeline *op = static_cast<vtkPVDataRepresentationPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataRepresentationPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataRepresentationPipeline::NewInstance());

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
PyvtkPVDataRepresentationPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataRepresentationPipeline *tempr = vtkPVDataRepresentationPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataRepresentationPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataRepresentationPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataRepresentationPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataRepresentationPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataRepresentationPipeline\nC++: vtkPVDataRepresentationPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataRepresentationPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataRepresentationPipeline\nC++: vtkPVDataRepresentationPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDataRepresentationPipeline_StaticNew()
{
  return vtkPVDataRepresentationPipeline::New();
}

PyObject *PyVTKClass_vtkPVDataRepresentationPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDataRepresentationPipeline_StaticNew,
    PyvtkPVDataRepresentationPipeline_Methods,
    "vtkPVDataRepresentationPipeline", modulename,
    NULL, NULL,
    PyvtkPVDataRepresentationPipeline_Doc(),
    PyVTKClass_vtkCompositeDataPipelineNew(modulename));
  return cls;
}

const char **PyvtkPVDataRepresentationPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataRepresentationPipeline - executive for\n\n",
    "Superclass: vtkCompositeDataPipeline\n\n",
    "vtkPVDataRepresentationPipeline is an executive for\nvtkPVDataRepresentation. In works in collaboration with the vtkPVView\nand vtkPVDataRepresentation to ensure appropriate time/piece is\nrequested from the upstream. This also helps when caching is employed\nby the view.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataRepresentationPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataRepresentationPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataRepresentationPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

