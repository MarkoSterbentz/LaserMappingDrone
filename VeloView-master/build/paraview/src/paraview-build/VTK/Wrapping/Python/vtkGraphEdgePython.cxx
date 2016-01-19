// python wrapper for vtkGraphEdge
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphEdge.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphEdge(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphEdgeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGraphEdge_Doc();


static PyObject *
PyvtkGraphEdge_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphEdge::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphEdge::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphEdge::NewInstance());

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
PyvtkGraphEdge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphEdge *tempr = vtkGraphEdge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkGraphEdge::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTarget(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetTarget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkGraphEdge::GetTarget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkGraphEdge::GetId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphEdge_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphEdge_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphEdge_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphEdge_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphEdge\nC++: vtkGraphEdge *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphEdge_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphEdge\nC++: vtkGraphEdge *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkGraphEdge_SetSource, METH_VARARGS,
   (char*)"V.SetSource(int)\nC++: void SetSource(vtkIdType a)\n\nThe source of the edge.\n"},
  {(char*)"GetSource", PyvtkGraphEdge_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> int\nC++: vtkIdType GetSource()\n\nThe source of the edge.\n"},
  {(char*)"SetTarget", PyvtkGraphEdge_SetTarget, METH_VARARGS,
   (char*)"V.SetTarget(int)\nC++: void SetTarget(vtkIdType a)\n\nThe target of the edge.\n"},
  {(char*)"GetTarget", PyvtkGraphEdge_GetTarget, METH_VARARGS,
   (char*)"V.GetTarget() -> int\nC++: vtkIdType GetTarget()\n\nThe target of the edge.\n"},
  {(char*)"SetId", PyvtkGraphEdge_SetId, METH_VARARGS,
   (char*)"V.SetId(int)\nC++: void SetId(vtkIdType a)\n\nThe id of the edge.\n"},
  {(char*)"GetId", PyvtkGraphEdge_GetId, METH_VARARGS,
   (char*)"V.GetId() -> int\nC++: vtkIdType GetId()\n\nThe id of the edge.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphEdge_StaticNew()
{
  return vtkGraphEdge::New();
}

PyObject *PyVTKClass_vtkGraphEdgeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphEdge_StaticNew,
    PyvtkGraphEdge_Methods,
    "vtkGraphEdge", modulename,
    NULL, NULL,
    PyvtkGraphEdge_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGraphEdge_Doc()
{
  static const char *docstring[] = {
    "vtkGraphEdge - Representation of a single graph edge.\n\n",
    "Superclass: vtkObject\n\n",
    "A heavy-weight (vtkObject subclass) graph edge object that may be\nused instead of the vtkEdgeType struct, for use with wrappers. The\nedge contains the source and target vertex ids, and the edge id.\n\nSee Also:\n\nvtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphEdge(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphEdgeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphEdge", o) != 0)
    {
    Py_DECREF(o);
    }

}

