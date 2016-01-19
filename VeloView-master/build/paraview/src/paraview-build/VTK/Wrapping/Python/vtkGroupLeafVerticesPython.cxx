// python wrapper for vtkGroupLeafVertices
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGroupLeafVertices.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGroupLeafVertices(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGroupLeafVerticesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkGroupLeafVertices_Doc();


static PyObject *
PyvtkGroupLeafVertices_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGroupLeafVertices::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGroupLeafVertices::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGroupLeafVertices *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGroupLeafVertices::NewInstance());

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
PyvtkGroupLeafVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGroupLeafVertices *tempr = vtkGroupLeafVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_SetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGroupDomain(temp0);
      }
    else
      {
      op->vtkGroupLeafVertices::SetGroupDomain(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_GetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetGroupDomain() :
      op->vtkGroupLeafVertices::GetGroupDomain());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGroupLeafVertices_Methods[] = {
  {(char*)"GetClassName", PyvtkGroupLeafVertices_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGroupLeafVertices_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGroupLeafVertices_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGroupLeafVertices\nC++: vtkGroupLeafVertices *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGroupLeafVertices_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGroupLeafVertices\nC++: vtkGroupLeafVertices *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGroupDomain", PyvtkGroupLeafVertices_SetGroupDomain, METH_VARARGS,
   (char*)"V.SetGroupDomain(string)\nC++: void SetGroupDomain(char *)\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {(char*)"GetGroupDomain", PyvtkGroupLeafVertices_GetGroupDomain, METH_VARARGS,
   (char*)"V.GetGroupDomain() -> string\nC++: char *GetGroupDomain()\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGroupLeafVertices_StaticNew()
{
  return vtkGroupLeafVertices::New();
}

PyObject *PyVTKClass_vtkGroupLeafVerticesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGroupLeafVertices_StaticNew,
    PyvtkGroupLeafVertices_Methods,
    "vtkGroupLeafVertices", modulename,
    NULL, NULL,
    PyvtkGroupLeafVertices_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGroupLeafVertices_Doc()
{
  static const char *docstring[] = {
    "vtkGroupLeafVertices - Filter that expands a tree, categorizing leaf\nvertices\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "Use SetInputArrayToProcess(0, ...) to set the array to group on.\nCurrently this array must be a vtkStringArray.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGroupLeafVertices(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGroupLeafVerticesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGroupLeafVertices", o) != 0)
    {
    Py_DECREF(o);
    }

}

