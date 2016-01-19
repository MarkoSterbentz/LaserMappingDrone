// python wrapper for vtkSILBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSILBuilder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSILBuilder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSILBuilderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSILBuilder_Doc();


static PyObject *
PyvtkSILBuilder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSILBuilder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSILBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSILBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSILBuilder::NewInstance());

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
PyvtkSILBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSILBuilder *tempr = vtkSILBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_SetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkMutableDirectedGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
    {
    if (ap.IsBound())
      {
      op->SetSIL(temp0);
      }
    else
      {
      op->vtkSILBuilder::SetSIL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSILBuilder::GetSIL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSILBuilder::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(temp0) :
      op->vtkSILBuilder::AddVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddChildEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddChildEdge(temp0, temp1) :
      op->vtkSILBuilder::AddChildEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddCrossEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCrossEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddCrossEdge(temp0, temp1) :
      op->vtkSILBuilder::AddCrossEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSILBuilder_GetRootVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetRootVertex() :
      op->vtkSILBuilder::GetRootVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSILBuilder_Methods[] = {
  {(char*)"GetClassName", PyvtkSILBuilder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSILBuilder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSILBuilder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSILBuilder\nC++: vtkSILBuilder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSILBuilder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSILBuilder\nC++: vtkSILBuilder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSIL", PyvtkSILBuilder_SetSIL, METH_VARARGS,
   (char*)"V.SetSIL(vtkMutableDirectedGraph)\nC++: void SetSIL(vtkMutableDirectedGraph *)\n\n"},
  {(char*)"GetSIL", PyvtkSILBuilder_GetSIL, METH_VARARGS,
   (char*)"V.GetSIL() -> vtkMutableDirectedGraph\nC++: vtkMutableDirectedGraph *GetSIL()\n\n"},
  {(char*)"Initialize", PyvtkSILBuilder_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitializes the data-structures.\n"},
  {(char*)"AddVertex", PyvtkSILBuilder_AddVertex, METH_VARARGS,
   (char*)"V.AddVertex(string) -> int\nC++: vtkIdType AddVertex(const char *name)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {(char*)"AddChildEdge", PyvtkSILBuilder_AddChildEdge, METH_VARARGS,
   (char*)"V.AddChildEdge(int, int) -> int\nC++: vtkIdType AddChildEdge(vtkIdType parent, vtkIdType child)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {(char*)"AddCrossEdge", PyvtkSILBuilder_AddCrossEdge, METH_VARARGS,
   (char*)"V.AddCrossEdge(int, int) -> int\nC++: vtkIdType AddCrossEdge(vtkIdType src, vtkIdType dst)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {(char*)"GetRootVertex", PyvtkSILBuilder_GetRootVertex, METH_VARARGS,
   (char*)"V.GetRootVertex() -> int\nC++: vtkIdType GetRootVertex()\n\nReturns the vertex id for the root vertex.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSILBuilder_StaticNew()
{
  return vtkSILBuilder::New();
}

PyObject *PyVTKClass_vtkSILBuilderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSILBuilder_StaticNew,
    PyvtkSILBuilder_Methods,
    "vtkSILBuilder", modulename,
    NULL, NULL,
    PyvtkSILBuilder_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSILBuilder_Doc()
{
  static const char *docstring[] = {
    "vtkSILBuilder - helper class to build a SIL i.e. a directed graph used\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSILBuilder is a helper class to build a SIL i.e. a directed graph\nused by reader producing composite datasets to describes the\nrelationships among the blocks. Refer to\nhttp://www.paraview.org/Wiki/Block_Hierarchy_Meta_Data for details.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSILBuilder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSILBuilderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSILBuilder", o) != 0)
    {
    Py_DECREF(o);
    }

}

