// python wrapper for vtkCollectTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollectTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollectTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollectTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkCollectTable_Doc();


static PyObject *
PyvtkCollectTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollectTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollectTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectTable::NewInstance());

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
PyvtkCollectTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollectTable *tempr = vtkCollectTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

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
      op->vtkCollectTable::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCollectTable::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

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
      op->vtkCollectTable::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkCollectTable::GetSocketController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

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
      op->vtkCollectTable::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkCollectTable::GetPassThrough());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOn();
      }
    else
      {
      op->vtkCollectTable::PassThroughOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectTable_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectTable *op = static_cast<vtkCollectTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOff();
      }
    else
      {
      op->vtkCollectTable::PassThroughOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollectTable_Methods[] = {
  {(char*)"GetClassName", PyvtkCollectTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollectTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollectTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollectTable\nC++: vtkCollectTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollectTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollectTable\nC++: vtkCollectTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkCollectTable_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkCollectTable_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetSocketController", PyvtkCollectTable_SetSocketController, METH_VARARGS,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"GetSocketController", PyvtkCollectTable_GetSocketController, METH_VARARGS,
   (char*)"V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"SetPassThrough", PyvtkCollectTable_SetPassThrough, METH_VARARGS,
   (char*)"V.SetPassThrough(int)\nC++: void SetPassThrough(int a)\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"GetPassThrough", PyvtkCollectTable_GetPassThrough, METH_VARARGS,
   (char*)"V.GetPassThrough() -> int\nC++: int GetPassThrough()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOn", PyvtkCollectTable_PassThroughOn, METH_VARARGS,
   (char*)"V.PassThroughOn()\nC++: void PassThroughOn()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOff", PyvtkCollectTable_PassThroughOff, METH_VARARGS,
   (char*)"V.PassThroughOff()\nC++: void PassThroughOff()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollectTable_StaticNew()
{
  return vtkCollectTable::New();
}

PyObject *PyVTKClass_vtkCollectTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollectTable_StaticNew,
    PyvtkCollectTable_Methods,
    "vtkCollectTable", modulename,
    NULL, NULL,
    PyvtkCollectTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCollectTable_Doc()
{
  static const char *docstring[] = {
    "vtkCollectTable - Collect distributed table.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This filter has code to collect a table from across processes onto\nnode 0. Collection can be turned on or off using the \"PassThrough\"\nflag.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollectTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollectTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

