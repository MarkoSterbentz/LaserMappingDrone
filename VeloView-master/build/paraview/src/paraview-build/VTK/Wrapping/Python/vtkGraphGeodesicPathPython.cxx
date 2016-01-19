// python wrapper for vtkGraphGeodesicPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphGeodesicPath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphGeodesicPath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphGeodesicPathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGeodesicPathNew
extern "C" { PyObject *PyVTKClass_vtkGeodesicPathNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeodesicPathNew
#endif

static const char **PyvtkGraphGeodesicPath_Doc();


static PyObject *
PyvtkGraphGeodesicPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphGeodesicPath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphGeodesicPath::NewInstance());

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
PyvtkGraphGeodesicPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphGeodesicPath *tempr = vtkGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetStartVertex() :
      op->vtkGraphGeodesicPath::GetStartVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartVertex(temp0);
      }
    else
      {
      op->vtkGraphGeodesicPath::SetStartVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEndVertex() :
      op->vtkGraphGeodesicPath::GetEndVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndVertex(temp0);
      }
    else
      {
      op->vtkGraphGeodesicPath::SetEndVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphGeodesicPath_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphGeodesicPath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkGraphGeodesicPath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkGraphGeodesicPath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphGeodesicPath\nC++: vtkGraphGeodesicPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SafeDownCast", PyvtkGraphGeodesicPath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphGeodesicPath\nC++: vtkGraphGeodesicPath *SafeDownCast(vtkObject* o)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"GetStartVertex", PyvtkGraphGeodesicPath_GetStartVertex, METH_VARARGS,
   (char*)"V.GetStartVertex() -> int\nC++: vtkIdType GetStartVertex()\n\nThe vertex at the start of the shortest path\n"},
  {(char*)"SetStartVertex", PyvtkGraphGeodesicPath_SetStartVertex, METH_VARARGS,
   (char*)"V.SetStartVertex(int)\nC++: void SetStartVertex(vtkIdType a)\n\nThe vertex at the start of the shortest path\n"},
  {(char*)"GetEndVertex", PyvtkGraphGeodesicPath_GetEndVertex, METH_VARARGS,
   (char*)"V.GetEndVertex() -> int\nC++: vtkIdType GetEndVertex()\n\nThe vertex at the end of the shortest path\n"},
  {(char*)"SetEndVertex", PyvtkGraphGeodesicPath_SetEndVertex, METH_VARARGS,
   (char*)"V.SetEndVertex(int)\nC++: void SetEndVertex(vtkIdType a)\n\nThe vertex at the end of the shortest path\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGraphGeodesicPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGraphGeodesicPath_Methods,
    "vtkGraphGeodesicPath", modulename,
    NULL, NULL,
    PyvtkGraphGeodesicPath_Doc(),
    PyVTKClass_vtkGeodesicPathNew(modulename));
  return cls;
}

const char **PyvtkGraphGeodesicPath_Doc()
{
  static const char *docstring[] = {
    "vtkGraphGeodesicPath - Abstract base for classes that generate a\ngeodesic path on a graph (mesh).\n\n",
    "Superclass: vtkGeodesicPath\n\n",
    "Serves as a base class for algorithms that trace a geodesic on a\npolygonal dataset treating it as a graph. ie points connecting the\nvertices of the graph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphGeodesicPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphGeodesicPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphGeodesicPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

