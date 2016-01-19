// python wrapper for vtkCompositer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCompositer_Doc();


static PyObject *
PyvtkCompositer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositer::NewInstance());

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
PyvtkCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositer *tempr = vtkCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

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
      op->vtkCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

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
      op->vtkCompositer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCompositer::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProcesses(temp0);
      }
    else
      {
      op->vtkCompositer::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositer *op = static_cast<vtkCompositer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkCompositer::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_DeleteArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteArray");

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    vtkCompositer::DeleteArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_ResizeFloatArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResizeFloatArray");

  vtkFloatArray *temp0 = NULL;
  int temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkCompositer::ResizeFloatArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositer_ResizeUnsignedCharArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResizeUnsignedCharArray");

  vtkUnsignedCharArray *temp0 = NULL;
  int temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkCompositer::ResizeUnsignedCharArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositer_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositer\nC++: vtkCompositer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositer\nC++: vtkCompositer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CompositeBuffer", PyvtkCompositer_CompositeBuffer, METH_VARARGS,
   (char*)"V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: virtual void CompositeBuffer(vtkDataArray *pBuf,\n    vtkFloatArray *zBuf, vtkDataArray *pTmp, vtkFloatArray *zTmp)\n\nThis method gets called on every process.  The final image gets\nput into pBuf and zBuf.\n"},
  {(char*)"SetController", PyvtkCompositer_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nAccess to the controller.\n"},
  {(char*)"GetController", PyvtkCompositer_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nAccess to the controller.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkCompositer_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int a)\n\nA hack to get a sub world until I can get communicators working.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkCompositer_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nA hack to get a sub world until I can get communicators working.\n"},
  {(char*)"DeleteArray", PyvtkCompositer_DeleteArray, METH_VARARGS | METH_STATIC,
   (char*)"V.DeleteArray(vtkDataArray)\nC++: static void DeleteArray(vtkDataArray *da)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {(char*)"ResizeFloatArray", PyvtkCompositer_ResizeFloatArray, METH_VARARGS | METH_STATIC,
   (char*)"V.ResizeFloatArray(vtkFloatArray, int, int)\nC++: static void ResizeFloatArray(vtkFloatArray *fa, int numComp,\n    vtkIdType size)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {(char*)"ResizeUnsignedCharArray", PyvtkCompositer_ResizeUnsignedCharArray, METH_VARARGS | METH_STATIC,
   (char*)"V.ResizeUnsignedCharArray(vtkUnsignedCharArray, int, int)\nC++: static void ResizeUnsignedCharArray(\n    vtkUnsignedCharArray *uca, int numComp, vtkIdType size)\n\nMethods that allocate and delete memory with special MPIPro\ncalls.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositer_StaticNew()
{
  return vtkCompositer::New();
}

PyObject *PyVTKClass_vtkCompositerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositer_StaticNew,
    PyvtkCompositer_Methods,
    "vtkCompositer", modulename,
    NULL, NULL,
    PyvtkCompositer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositer_Doc()
{
  static const char *docstring[] = {
    "vtkCompositer - Super class for composite algorthms.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCompositer operates in multiple processes.  Each compositer has a\nrender window.  They use vtkMultiProcessControllers to communicate\nthe color and depth buffer to process 0's render window. It will not\nhandle transparency well.\n\nSee Also:\n\nvtkCompositeManager.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositer", o) != 0)
    {
    Py_DECREF(o);
    }

}

