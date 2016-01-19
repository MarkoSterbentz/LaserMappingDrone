// python wrapper for vtkSMOutputPort
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMOutputPort.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMOutputPort(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMOutputPortNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMOutputPort_Doc();


static PyObject *
PyvtkSMOutputPort_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMOutputPort::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOutputPort::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOutputPort::NewInstance());

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
PyvtkSMOutputPort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMOutputPort *tempr = vtkSMOutputPort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation() :
      op->vtkSMOutputPort::GetDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetTemporalDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTemporalDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTemporalDataInformation *tempr = (ap.IsBound() ?
      op->GetTemporalDataInformation() :
      op->vtkSMOutputPort::GetTemporalDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataClassName() :
      op->vtkSMOutputPort::GetDataClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetClassNameInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassNameInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVClassNameInformation *tempr = (ap.IsBound() ?
      op->GetClassNameInformation() :
      op->vtkSMOutputPort::GetClassNameInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_InvalidateDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvalidateDataInformation();
      }
    else
      {
      op->vtkSMOutputPort::InvalidateDataInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSMOutputPort::GetPortIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSourceProxy() :
      op->vtkSMOutputPort::GetSourceProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMOutputPort_Methods[] = {
  {(char*)"GetClassName", PyvtkSMOutputPort_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMOutputPort_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMOutputPort_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMOutputPort\nC++: vtkSMOutputPort *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMOutputPort_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMOutputPort\nC++: vtkSMOutputPort *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataInformation", PyvtkSMOutputPort_GetDataInformation, METH_VARARGS,
   (char*)"V.GetDataInformation() -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetDataInformation()\n\nReturns data information. If data information is marked invalid,\ncalls GatherDataInformation. If data information is gathered then\nthis fires the vtkCommand::UpdateInformationEvent event.\n"},
  {(char*)"GetTemporalDataInformation", PyvtkSMOutputPort_GetTemporalDataInformation, METH_VARARGS,
   (char*)"V.GetTemporalDataInformation() -> vtkPVTemporalDataInformation\nC++: virtual vtkPVTemporalDataInformation *GetTemporalDataInformation(\n    )\n\nReturns data information collected over all timesteps provided by\nthe pipeline. If the data information is not valid, this results\niterating over the pipeline and hence can be slow. Use with\ncaution.\n"},
  {(char*)"GetDataClassName", PyvtkSMOutputPort_GetDataClassName, METH_VARARGS,
   (char*)"V.GetDataClassName() -> string\nC++: virtual const char *GetDataClassName()\n\nReturns the classname of the data object on this output port.\n"},
  {(char*)"GetClassNameInformation", PyvtkSMOutputPort_GetClassNameInformation, METH_VARARGS,
   (char*)"V.GetClassNameInformation() -> vtkPVClassNameInformation\nC++: virtual vtkPVClassNameInformation *GetClassNameInformation()\n\nReturns classname information.\n"},
  {(char*)"InvalidateDataInformation", PyvtkSMOutputPort_InvalidateDataInformation, METH_VARARGS,
   (char*)"V.InvalidateDataInformation()\nC++: virtual void InvalidateDataInformation()\n\nMark data information as invalid.\n"},
  {(char*)"GetPortIndex", PyvtkSMOutputPort_GetPortIndex, METH_VARARGS,
   (char*)"V.GetPortIndex() -> int\nC++: int GetPortIndex()\n\nReturns the index of the port the output is obtained from.\n"},
  {(char*)"GetSourceProxy", PyvtkSMOutputPort_GetSourceProxy, METH_VARARGS,
   (char*)"V.GetSourceProxy() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSourceProxy()\n\nProvides access to the source proxy to which the output port\nbelongs.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMOutputPort_StaticNew()
{
  return vtkSMOutputPort::New();
}

PyObject *PyVTKClass_vtkSMOutputPortNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMOutputPort_StaticNew,
    PyvtkSMOutputPort_Methods,
    "vtkSMOutputPort", modulename,
    NULL, NULL,
    PyvtkSMOutputPort_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMOutputPort_Doc()
{
  static const char *docstring[] = {
    "vtkSMOutputPort - reference for an output port of a vtkAlgorithm.\n\n",
    "Superclass: vtkSMProxy\n\n",
    "This object manages one output port of an algorithm. It is used\ninternally by vtkSMSourceProxy to manage all of it's outputs.\n\nNotes:\n\nPreviously, vtkSMOutputPort used to be a vtkSMProxy subclass since it\nwas indeed a Proxy for the output port. However that has now changed.\nThis merely sits as a datastructure to manage ports specific things\nlike data-information. However for backwards compatibilit",
    "y, to keep\nthe impact minimal, we leave this as a sub-class of a Proxy with\nGlobalID=0 and Session=NULL.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMOutputPort(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMOutputPortNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMOutputPort", o) != 0)
    {
    Py_DECREF(o);
    }

}

