// python wrapper for vtkPExtractHistogram
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExtractHistogram.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExtractHistogram(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExtractHistogramNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractHistogramNew
extern "C" { PyObject *PyVTKClass_vtkExtractHistogramNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractHistogramNew
#endif

static const char **PyvtkPExtractHistogram_Doc();


static PyObject *
PyvtkPExtractHistogram_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram *op = static_cast<vtkPExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExtractHistogram::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram *op = static_cast<vtkPExtractHistogram *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram *op = static_cast<vtkPExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExtractHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractHistogram::NewInstance());

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
PyvtkPExtractHistogram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExtractHistogram *tempr = vtkPExtractHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram *op = static_cast<vtkPExtractHistogram *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPExtractHistogram::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram *op = static_cast<vtkPExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractHistogram::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractHistogram_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractHistogram_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractHistogram_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractHistogram_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExtractHistogram\nC++: vtkPExtractHistogram *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractHistogram_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractHistogram\nC++: vtkPExtractHistogram *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExtractHistogram_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPExtractHistogram_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractHistogram_StaticNew()
{
  return vtkPExtractHistogram::New();
}

PyObject *PyVTKClass_vtkPExtractHistogramNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractHistogram_StaticNew,
    PyvtkPExtractHistogram_Methods,
    "vtkPExtractHistogram", modulename,
    NULL, NULL,
    PyvtkPExtractHistogram_Doc(),
    PyVTKClass_vtkExtractHistogramNew(modulename));
  return cls;
}

const char **PyvtkPExtractHistogram_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractHistogram - Extract histogram for parallel dataset.\n\n",
    "Superclass: vtkExtractHistogram\n\n",
    "vtkPExtractHistogram is vtkExtractHistogram subclass for parallel\ndatasets. It gathers the histogram data on the root node.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractHistogram(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractHistogramNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractHistogram", o) != 0)
    {
    Py_DECREF(o);
    }

}

