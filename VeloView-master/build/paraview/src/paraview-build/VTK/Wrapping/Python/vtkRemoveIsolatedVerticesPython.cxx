// python wrapper for vtkRemoveIsolatedVertices
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRemoveIsolatedVertices.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRemoveIsolatedVertices(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRemoveIsolatedVerticesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkRemoveIsolatedVertices_Doc();


static PyObject *
PyvtkRemoveIsolatedVertices_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRemoveIsolatedVertices::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveIsolatedVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRemoveIsolatedVertices::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveIsolatedVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRemoveIsolatedVertices *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRemoveIsolatedVertices::NewInstance());

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
PyvtkRemoveIsolatedVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRemoveIsolatedVertices *tempr = vtkRemoveIsolatedVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRemoveIsolatedVertices_Methods[] = {
  {(char*)"GetClassName", PyvtkRemoveIsolatedVertices_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRemoveIsolatedVertices_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRemoveIsolatedVertices_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRemoveIsolatedVertices\nC++: vtkRemoveIsolatedVertices *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRemoveIsolatedVertices_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRemoveIsolatedVertices\nC++: vtkRemoveIsolatedVertices *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRemoveIsolatedVertices_StaticNew()
{
  return vtkRemoveIsolatedVertices::New();
}

PyObject *PyVTKClass_vtkRemoveIsolatedVerticesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRemoveIsolatedVertices_StaticNew,
    PyvtkRemoveIsolatedVertices_Methods,
    "vtkRemoveIsolatedVertices", modulename,
    NULL, NULL,
    PyvtkRemoveIsolatedVertices_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRemoveIsolatedVertices_Doc()
{
  static const char *docstring[] = {
    "vtkRemoveIsolatedVertices - remove vertices of a vtkGraph with\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRemoveIsolatedVertices(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRemoveIsolatedVerticesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRemoveIsolatedVertices", o) != 0)
    {
    Py_DECREF(o);
    }

}

