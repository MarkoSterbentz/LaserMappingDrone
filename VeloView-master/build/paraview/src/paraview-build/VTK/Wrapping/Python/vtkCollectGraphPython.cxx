// python wrapper for vtkCollectGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollectGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollectGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollectGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkCollectGraph_Doc();


static PyObject *
PyvtkCollectGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollectGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollectGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectGraph::NewInstance());

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
PyvtkCollectGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollectGraph *tempr = vtkCollectGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

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
      op->vtkCollectGraph::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCollectGraph::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  vtkSocketController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
    {
    if (ap.IsBound())
      {
      op->SetSocketController(temp0);
      }
    else
      {
      op->vtkCollectGraph::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkCollectGraph::GetSocketController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThrough(temp0);
      }
    else
      {
      op->vtkCollectGraph::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkCollectGraph::GetPassThrough());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOn();
      }
    else
      {
      op->vtkCollectGraph::PassThroughOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOff();
      }
    else
      {
      op->vtkCollectGraph::PassThroughOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputType(temp0);
      }
    else
      {
      op->vtkCollectGraph::SetOutputType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkCollectGraph::GetOutputType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCollectGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkCollectGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollectGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollectGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollectGraph\nC++: vtkCollectGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollectGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollectGraph\nC++: vtkCollectGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkCollectGraph_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkCollectGraph_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetSocketController", PyvtkCollectGraph_SetSocketController, METH_VARARGS,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"GetSocketController", PyvtkCollectGraph_GetSocketController, METH_VARARGS,
   (char*)"V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"SetPassThrough", PyvtkCollectGraph_SetPassThrough, METH_VARARGS,
   (char*)"V.SetPassThrough(int)\nC++: void SetPassThrough(int a)\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"GetPassThrough", PyvtkCollectGraph_GetPassThrough, METH_VARARGS,
   (char*)"V.GetPassThrough() -> int\nC++: int GetPassThrough()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOn", PyvtkCollectGraph_PassThroughOn, METH_VARARGS,
   (char*)"V.PassThroughOn()\nC++: void PassThroughOn()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOff", PyvtkCollectGraph_PassThroughOff, METH_VARARGS,
   (char*)"V.PassThroughOff()\nC++: void PassThroughOff()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"SetOutputType", PyvtkCollectGraph_SetOutputType, METH_VARARGS,
   (char*)"V.SetOutputType(int)\nC++: void SetOutputType(int a)\n\nDirectedness flag, used to signal whether the output graph is\ndirected or undirected. DIRECTED_OUTPUT expects that this filter\nis generating a directed graph. UNDIRECTED_OUTPUT expects that\nthis filter is generating an undirected graph. DIRECTED_OUTPUT\nand UNDIRECTED_OUTPUT flags should only be set on the client\nfilter.  Server filters should be set to USE_INPUT_TYPE since\nthey have valid input and the directedness is determined from the\ninput type.\n"},
  {(char*)"GetOutputType", PyvtkCollectGraph_GetOutputType, METH_VARARGS,
   (char*)"V.GetOutputType() -> int\nC++: int GetOutputType()\n\nDirectedness flag, used to signal whether the output graph is\ndirected or undirected. DIRECTED_OUTPUT expects that this filter\nis generating a directed graph. UNDIRECTED_OUTPUT expects that\nthis filter is generating an undirected graph. DIRECTED_OUTPUT\nand UNDIRECTED_OUTPUT flags should only be set on the client\nfilter.  Server filters should be set to USE_INPUT_TYPE since\nthey have valid input and the directedness is determined from the\ninput type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollectGraph_StaticNew()
{
  return vtkCollectGraph::New();
}

PyObject *PyVTKClass_vtkCollectGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollectGraph_StaticNew,
    PyvtkCollectGraph_Methods,
    "vtkCollectGraph", modulename,
    NULL, NULL,
    PyvtkCollectGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "DIRECTED_OUTPUT", vtkCollectGraph::DIRECTED_OUTPUT },
          { "UNDIRECTED_OUTPUT", vtkCollectGraph::UNDIRECTED_OUTPUT },
          { "USE_INPUT_TYPE", vtkCollectGraph::USE_INPUT_TYPE },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCollectGraph_Doc()
{
  static const char *docstring[] = {
    "vtkCollectGraph - Collect distributed graph.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This filter has code to collect a graph from across processes onto\nvertex 0. Collection can be turned on or off using the \"PassThrough\"\nflag.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollectGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollectGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

