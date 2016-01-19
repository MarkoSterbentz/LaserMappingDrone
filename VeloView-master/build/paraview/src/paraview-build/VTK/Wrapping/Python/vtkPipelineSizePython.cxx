// python wrapper for vtkPipelineSize
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPipelineSize.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPipelineSize(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPipelineSizeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPipelineSize_Doc();


static PyObject *
PyvtkPipelineSize_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPipelineSize::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineSize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPipelineSize::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineSize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPipelineSize *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPipelineSize::NewInstance());

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
PyvtkPipelineSize_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPipelineSize *tempr = vtkPipelineSize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineSize_GetEstimatedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  vtkAlgorithm *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEstimatedSize(temp0, temp1, temp2) :
      op->vtkPipelineSize::GetEstimatedSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPipelineSize_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPipelineSize *op = static_cast<vtkPipelineSize *>(vp);

  unsigned long temp0;
  vtkPolyDataMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyDataMapper"))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces(temp0, temp1) :
      op->vtkPipelineSize::GetNumberOfSubPieces(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPipelineSize_Methods[] = {
  {(char*)"GetClassName", PyvtkPipelineSize_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPipelineSize_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPipelineSize_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPipelineSize\nC++: vtkPipelineSize *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPipelineSize_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPipelineSize\nC++: vtkPipelineSize *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEstimatedSize", PyvtkPipelineSize_GetEstimatedSize, METH_VARARGS,
   (char*)"V.GetEstimatedSize(vtkAlgorithm, int, int) -> int\nC++: unsigned long GetEstimatedSize(vtkAlgorithm *input,\n    int inputPort, int connection)\n\nCompute an estimate of how much memory a pipline will require in\nkilobytes (1024 bytes not 1000) This is only an estimate and the\ncalculations in here do not take into account the specifics of\nmany sources and filters.\n"},
  {(char*)"GetNumberOfSubPieces", PyvtkPipelineSize_GetNumberOfSubPieces, METH_VARARGS,
   (char*)"V.GetNumberOfSubPieces(int, vtkPolyDataMapper) -> int\nC++: unsigned long GetNumberOfSubPieces(unsigned long memoryLimit,\n     vtkPolyDataMapper *mapper)\n\nDetermine how many subpieces a mapper should use to fit a target\nmemory limit. This takes into account the mapper's Piece and\nNumberOfPieces.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPipelineSize_StaticNew()
{
  return vtkPipelineSize::New();
}

PyObject *PyVTKClass_vtkPipelineSizeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPipelineSize_StaticNew,
    PyvtkPipelineSize_Methods,
    "vtkPipelineSize", modulename,
    NULL, NULL,
    PyvtkPipelineSize_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPipelineSize_Doc()
{
  static const char *docstring[] = {
    "vtkPipelineSize - compute the memory required by a pipeline\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPipelineSize(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPipelineSizeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPipelineSize", o) != 0)
    {
    Py_DECREF(o);
    }

}

