// python wrapper for vtkExtractArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkExtractArray_Doc();


static PyObject *
PyvtkExtractArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractArray::NewInstance());

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
PyvtkExtractArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractArray *tempr = vtkExtractArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetIndex() :
      op->vtkExtractArray::GetIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_SetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndex(temp0);
      }
    else
      {
      op->vtkExtractArray::SetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractArray_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractArray\nC++: vtkExtractArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractArray\nC++: vtkExtractArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIndex", PyvtkExtractArray_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex() -> int\nC++: vtkIdType GetIndex()\n\nControls which array will be extracted.\n"},
  {(char*)"SetIndex", PyvtkExtractArray_SetIndex, METH_VARARGS,
   (char*)"V.SetIndex(int)\nC++: void SetIndex(vtkIdType a)\n\nControls which array will be extracted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractArray_StaticNew()
{
  return vtkExtractArray::New();
}

PyObject *PyVTKClass_vtkExtractArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractArray_StaticNew,
    PyvtkExtractArray_Methods,
    "vtkExtractArray", modulename,
    NULL, NULL,
    PyvtkExtractArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractArray_Doc()
{
  static const char *docstring[] = {
    "vtkExtractArray - Given a vtkArrayData object containing one-or-more\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

