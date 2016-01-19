// python wrapper for vtkTreeCompositer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeCompositer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeCompositer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeCompositerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositerNew
extern "C" { PyObject *PyVTKClass_vtkCompositerNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositerNew
#endif

static const char **PyvtkTreeCompositer_Doc();


static PyObject *
PyvtkTreeCompositer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeCompositer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeCompositer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeCompositer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeCompositer::NewInstance());

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
PyvtkTreeCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeCompositer *tempr = vtkTreeCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkFloatArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkFloatArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->CompositeBuffer(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkTreeCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeCompositer_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeCompositer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeCompositer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeCompositer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeCompositer\nC++: vtkTreeCompositer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeCompositer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeCompositer\nC++: vtkTreeCompositer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CompositeBuffer", PyvtkTreeCompositer_CompositeBuffer, METH_VARARGS,
   (char*)"V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: virtual void CompositeBuffer(vtkDataArray *pBuf,\n    vtkFloatArray *zBuf, vtkDataArray *pTmp, vtkFloatArray *zTmp)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeCompositer_StaticNew()
{
  return vtkTreeCompositer::New();
}

PyObject *PyVTKClass_vtkTreeCompositerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeCompositer_StaticNew,
    PyvtkTreeCompositer_Methods,
    "vtkTreeCompositer", modulename,
    NULL, NULL,
    PyvtkTreeCompositer_Doc(),
    PyVTKClass_vtkCompositerNew(modulename));
  return cls;
}

const char **PyvtkTreeCompositer_Doc()
{
  static const char *docstring[] = {
    "vtkTreeCompositer - Implements tree based compositing.\n\n",
    "Superclass: vtkCompositer\n\n",
    "vtkTreeCompositer operates in multiple processes.  Each compositer\nhas a render window.  They use a vtkMultiProcessController to\ncommunicate the color and depth buffer to process 0's render window.\nIt will not handle transparency well.\n\nSee Also:\n\nvtkCompositeManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeCompositer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeCompositerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeCompositer", o) != 0)
    {
    Py_DECREF(o);
    }

}

