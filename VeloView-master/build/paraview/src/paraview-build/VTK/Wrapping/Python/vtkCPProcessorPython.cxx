// python wrapper for vtkCPProcessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCPProcessor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPProcessor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPProcessorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCPProcessor_Doc();


static PyObject *
PyvtkCPProcessor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPProcessor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPProcessor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPProcessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPProcessor::NewInstance());

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
PyvtkCPProcessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPProcessor *tempr = vtkCPProcessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_AddPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPPipeline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPPipeline"))
    {
    int tempr = (ap.IsBound() ?
      op->AddPipeline(temp0) :
      op->vtkCPProcessor::AddPipeline(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetNumberOfPipelines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPipelines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPipelines() :
      op->vtkCPProcessor::GetNumberOfPipelines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCPPipeline *tempr = (ap.IsBound() ?
      op->GetPipeline(temp0) :
      op->vtkCPProcessor::GetPipeline(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_RemovePipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPPipeline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPPipeline"))
    {
    if (ap.IsBound())
      {
      op->RemovePipeline(temp0);
      }
    else
      {
      op->vtkCPProcessor::RemovePipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_RemoveAllPipelines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPipelines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPipelines();
      }
    else
      {
      op->vtkCPProcessor::RemoveAllPipelines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCPProcessor::Initialize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPDataDescription *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
    {
    int tempr = (ap.IsBound() ?
      op->RequestDataDescription(temp0) :
      op->vtkCPProcessor::RequestDataDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPDataDescription *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
    {
    int tempr = (ap.IsBound() ?
      op->CoProcess(temp0) :
      op->vtkCPProcessor::CoProcess(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPProcessor_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCPProcessor::Finalize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPProcessor_Methods[] = {
  {(char*)"GetClassName", PyvtkCPProcessor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPProcessor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPProcessor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPProcessor\nC++: vtkCPProcessor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPProcessor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPProcessor\nC++: vtkCPProcessor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPipeline", PyvtkCPProcessor_AddPipeline, METH_VARARGS,
   (char*)"V.AddPipeline(vtkCPPipeline) -> int\nC++: virtual int AddPipeline(vtkCPPipeline *pipeline)\n\n"},
  {(char*)"GetNumberOfPipelines", PyvtkCPProcessor_GetNumberOfPipelines, METH_VARARGS,
   (char*)"V.GetNumberOfPipelines() -> int\nC++: virtual int GetNumberOfPipelines()\n\n"},
  {(char*)"GetPipeline", PyvtkCPProcessor_GetPipeline, METH_VARARGS,
   (char*)"V.GetPipeline(int) -> vtkCPPipeline\nC++: virtual vtkCPPipeline *GetPipeline(int which)\n\n"},
  {(char*)"RemovePipeline", PyvtkCPProcessor_RemovePipeline, METH_VARARGS,
   (char*)"V.RemovePipeline(vtkCPPipeline)\nC++: virtual void RemovePipeline(vtkCPPipeline *pipeline)\n\n"},
  {(char*)"RemoveAllPipelines", PyvtkCPProcessor_RemoveAllPipelines, METH_VARARGS,
   (char*)"V.RemoveAllPipelines()\nC++: virtual void RemoveAllPipelines()\n\n"},
  {(char*)"Initialize", PyvtkCPProcessor_Initialize, METH_VARARGS,
   (char*)"V.Initialize() -> int\nC++: virtual int Initialize()\n\n"},
  {(char*)"RequestDataDescription", PyvtkCPProcessor_RequestDataDescription, METH_VARARGS,
   (char*)"V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: virtual int RequestDataDescription(\n    vtkCPDataDescription *dataDescription)\n\n"},
  {(char*)"CoProcess", PyvtkCPProcessor_CoProcess, METH_VARARGS,
   (char*)"V.CoProcess(vtkCPDataDescription) -> int\nC++: virtual int CoProcess(vtkCPDataDescription *dataDescription)\n\n"},
  {(char*)"Finalize", PyvtkCPProcessor_Finalize, METH_VARARGS,
   (char*)"V.Finalize() -> int\nC++: virtual int Finalize()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPProcessor_StaticNew()
{
  return vtkCPProcessor::New();
}

PyObject *PyVTKClass_vtkCPProcessorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPProcessor_StaticNew,
    PyvtkCPProcessor_Methods,
    "vtkCPProcessor", modulename,
    NULL, NULL,
    PyvtkCPProcessor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCPProcessor_Doc()
{
  static const char *docstring[] = {
    "vtkCPProcessor - no description provided.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPProcessor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPProcessorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPProcessor", o) != 0)
    {
    Py_DECREF(o);
    }

}

