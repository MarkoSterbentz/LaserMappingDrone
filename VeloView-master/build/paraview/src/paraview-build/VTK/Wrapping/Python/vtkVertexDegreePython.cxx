// python wrapper for vtkVertexDegree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVertexDegree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVertexDegree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVertexDegreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkVertexDegree_Doc();


static PyObject *
PyvtkVertexDegree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexDegree *op = static_cast<vtkVertexDegree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVertexDegree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexDegree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexDegree *op = static_cast<vtkVertexDegree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVertexDegree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexDegree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexDegree *op = static_cast<vtkVertexDegree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVertexDegree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVertexDegree::NewInstance());

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
PyvtkVertexDegree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVertexDegree *tempr = vtkVertexDegree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexDegree_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexDegree *op = static_cast<vtkVertexDegree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkVertexDegree::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVertexDegree_Methods[] = {
  {(char*)"GetClassName", PyvtkVertexDegree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVertexDegree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVertexDegree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVertexDegree\nC++: vtkVertexDegree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVertexDegree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVertexDegree\nC++: vtkVertexDegree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputArrayName", PyvtkVertexDegree_SetOutputArrayName, METH_VARARGS,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nSet the output array name. If no output array name is set then\nthe name 'VertexDegree' is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVertexDegree_StaticNew()
{
  return vtkVertexDegree::New();
}

PyObject *PyVTKClass_vtkVertexDegreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVertexDegree_StaticNew,
    PyvtkVertexDegree_Methods,
    "vtkVertexDegree", modulename,
    NULL, NULL,
    PyvtkVertexDegree_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVertexDegree_Doc()
{
  static const char *docstring[] = {
    "vtkVertexDegree - Adds an attribute array with the degree of each\nvertex\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "Adds an attribute array with the degree of each vertex. By default\nthe name of the array will be \"VertexDegree\", but that can be changed\nby calling SetOutputArrayName(\"foo\");\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVertexDegree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVertexDegreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVertexDegree", o) != 0)
    {
    Py_DECREF(o);
    }

}

