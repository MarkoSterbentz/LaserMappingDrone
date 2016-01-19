// python wrapper for vtkPVDisableStackTraceSignalHandler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDisableStackTraceSignalHandler.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDisableStackTraceSignalHandler(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDisableStackTraceSignalHandlerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVDisableStackTraceSignalHandler_Doc();


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDisableStackTraceSignalHandler::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDisableStackTraceSignalHandler::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDisableStackTraceSignalHandler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDisableStackTraceSignalHandler::NewInstance());

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
PyvtkPVDisableStackTraceSignalHandler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDisableStackTraceSignalHandler *tempr = vtkPVDisableStackTraceSignalHandler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVDisableStackTraceSignalHandler::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVDisableStackTraceSignalHandler::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVDisableStackTraceSignalHandler::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDisableStackTraceSignalHandler_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisableStackTraceSignalHandler *op = static_cast<vtkPVDisableStackTraceSignalHandler *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVDisableStackTraceSignalHandler::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDisableStackTraceSignalHandler_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDisableStackTraceSignalHandler_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDisableStackTraceSignalHandler_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDisableStackTraceSignalHandler_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDisableStackTraceSignalHandler\nC++: vtkPVDisableStackTraceSignalHandler *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDisableStackTraceSignalHandler_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDisableStackTraceSignalHandler\nC++: vtkPVDisableStackTraceSignalHandler *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVDisableStackTraceSignalHandler_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVDisableStackTraceSignalHandler_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVDisableStackTraceSignalHandler_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVDisableStackTraceSignalHandler_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDisableStackTraceSignalHandler_StaticNew()
{
  return vtkPVDisableStackTraceSignalHandler::New();
}

PyObject *PyVTKClass_vtkPVDisableStackTraceSignalHandlerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDisableStackTraceSignalHandler_StaticNew,
    PyvtkPVDisableStackTraceSignalHandler_Methods,
    "vtkPVDisableStackTraceSignalHandler", modulename,
    NULL, NULL,
    PyvtkPVDisableStackTraceSignalHandler_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVDisableStackTraceSignalHandler_Doc()
{
  static const char *docstring[] = {
    "vtkPVDisableStackTraceSignalHandler\n\n",
    "Superclass: vtkPVInformation\n\n",
    "When run on the process it enables a stacktrace signal handler for\ncommon errors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDisableStackTraceSignalHandler(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDisableStackTraceSignalHandlerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDisableStackTraceSignalHandler", o) != 0)
    {
    Py_DECREF(o);
    }

}

