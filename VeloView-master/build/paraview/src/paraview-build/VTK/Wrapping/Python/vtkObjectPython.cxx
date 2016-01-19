// python wrapper for vtkObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkPythonCommand.h"
#include "vtkIndent.h"
#include "vtkObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectBaseNew
extern "C" { PyObject *PyVTKClass_vtkObjectBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectBaseNew
#endif

static const char **PyvtkObject_Doc();

static PyObject *
PyvtkObject_AddObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0s = NULL;
  int temp0i = 0;
  PyObject *temp1 = NULL;
  float temp2 = 0.0f;
  unsigned long tempr;
  PyObject *result = NULL;
  int argtype = 0;

  if (op)
    {
    if (ap.CheckArgCount(2,3) &&
        ap.GetValue(temp0i) &&
        ap.GetFunction(temp1) &&
        (ap.NoArgsLeft() || ap.GetValue(temp2)))
      {
      argtype = 1;
      }
    }

  if (op && !argtype)
    {
    PyErr_Clear();
    ap.Reset();

    if (ap.CheckArgCount(2,3) &&
        ap.GetValue(temp0s) &&
        ap.GetFunction(temp1) &&
        (ap.NoArgsLeft() || ap.GetValue(temp2)))
      {
      argtype = 2;
      }
    }

  if (argtype)
    {
    vtkPythonCommand *cbc = vtkPythonCommand::New();
    cbc->SetObject(temp1);
    cbc->SetThreadState(PyThreadState_Get());

    if (argtype == 1)
      {
      if (ap.IsBound())
        {
        tempr = op->AddObserver(temp0i, cbc, temp2);
        }
      else
        {
        tempr = op->vtkObject::AddObserver(temp0i, cbc, temp2);
        }
      }
    else
      {
      if (ap.IsBound())
        {
        tempr = op->AddObserver(temp0s, cbc, temp2);
        }
      else
        {
        tempr = op->vtkObject::AddObserver(temp0s, cbc, temp2);
        }
      }
    PyVTKObject_AddObserver(self, tempr);

    cbc->Delete();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObject::NewInstance());

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
PyvtkObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkObject *tempr = vtkObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOn();
      }
    else
      {
      op->vtkObject::DebugOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOff();
      }
    else
      {
      op->vtkObject::DebugOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetDebug() :
      op->vtkObject::GetDebug());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_SetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDebug(temp0);
      }
    else
      {
      op->vtkObject::SetDebug(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_BreakOnError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BreakOnError");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkObject::BreakOnError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkObject::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkObject::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_SetGlobalWarningDisplay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalWarningDisplay");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject::SetGlobalWarningDisplay(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GlobalWarningDisplayOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalWarningDisplayOn");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkObject::GlobalWarningDisplayOn();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GlobalWarningDisplayOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalWarningDisplayOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkObject::GlobalWarningDisplayOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GetGlobalWarningDisplay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalWarningDisplay");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkObject::GetGlobalWarningDisplay();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetCommand(temp0) :
      op->vtkObject::GetCommand(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObject_RemoveObserver_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  vtkCommand *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommand"))
    {
    if (ap.IsBound())
      {
      op->RemoveObserver(temp0);
      }
    else
      {
      op->vtkObject::RemoveObserver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObject_RemoveObserver_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveObserver(temp0);
      }
    else
      {
      op->vtkObject::RemoveObserver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkObject_RemoveObserver_Methods[] = {
  {NULL, PyvtkObject_RemoveObserver_s1, METH_VARARGS,
   (char*)"@O *vtkCommand"},
  {NULL, PyvtkObject_RemoveObserver_s2, METH_VARARGS,
   (char*)"@k"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkObject_RemoveObserver(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_RemoveObserver_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveObserver");
  return NULL;
}



static PyObject *
PyvtkObject_RemoveObservers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  vtkCommand *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
    {
    if (ap.IsBound())
      {
      op->RemoveObservers(temp0, temp1);
      }
    else
      {
      op->vtkObject::RemoveObservers(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  vtkCommand *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
    {
    if (ap.IsBound())
      {
      op->RemoveObservers(temp0, temp1);
      }
    else
      {
      op->vtkObject::RemoveObservers(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveObservers(temp0);
      }
    else
      {
      op->vtkObject::RemoveObservers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveObservers(temp0);
      }
    else
      {
      op->vtkObject::RemoveObservers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkObject_RemoveObservers_Methods[] = {
  {NULL, PyvtkObject_RemoveObservers_s1, METH_VARARGS,
   (char*)"@kO *vtkCommand"},
  {NULL, PyvtkObject_RemoveObservers_s2, METH_VARARGS,
   (char*)"@zO *vtkCommand"},
  {NULL, PyvtkObject_RemoveObservers_s3, METH_VARARGS,
   (char*)"@k"},
  {NULL, PyvtkObject_RemoveObservers_s4, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkObject_RemoveObservers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_RemoveObservers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveObservers");
  return NULL;
}



static PyObject *
PyvtkObject_HasObserver_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  vtkCommand *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
    {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0, temp1) :
      op->vtkObject::HasObserver(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  vtkCommand *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
    {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0, temp1) :
      op->vtkObject::HasObserver(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0) :
      op->vtkObject::HasObserver(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0) :
      op->vtkObject::HasObserver(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkObject_HasObserver_Methods[] = {
  {NULL, PyvtkObject_HasObserver_s1, METH_VARARGS,
   (char*)"@kO *vtkCommand"},
  {NULL, PyvtkObject_HasObserver_s2, METH_VARARGS,
   (char*)"@zO *vtkCommand"},
  {NULL, PyvtkObject_HasObserver_s3, METH_VARARGS,
   (char*)"@k"},
  {NULL, PyvtkObject_HasObserver_s4, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkObject_HasObserver(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_HasObserver_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HasObserver");
  return NULL;
}



static PyObject *
PyvtkObject_RemoveAllObservers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllObservers();
      }
    else
      {
      op->vtkObject::RemoveAllObservers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObject_InvokeEvent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->InvokeEvent(temp0, temp1) :
      op->vtkObject::InvokeEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->InvokeEvent(temp0, temp1) :
      op->vtkObject::InvokeEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->InvokeEvent(temp0) :
      op->vtkObject::InvokeEvent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->InvokeEvent(temp0) :
      op->vtkObject::InvokeEvent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkObject_InvokeEvent_Methods[] = {
  {NULL, PyvtkObject_InvokeEvent_s1, METH_VARARGS,
   (char*)"@ks#"},
  {NULL, PyvtkObject_InvokeEvent_s2, METH_VARARGS,
   (char*)"@zs#"},
  {NULL, PyvtkObject_InvokeEvent_s3, METH_VARARGS,
   (char*)"@k"},
  {NULL, PyvtkObject_InvokeEvent_s4, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkObject_InvokeEvent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_InvokeEvent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InvokeEvent");
  return NULL;
}


static PyMethodDef PyvtkObject_Methods[] = {
  {(char*)"GetClassName", PyvtkObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkObject\nC++: vtkObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkObject\nC++: vtkObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DebugOn", PyvtkObject_DebugOn, METH_VARARGS,
   (char*)"V.DebugOn()\nC++: virtual void DebugOn()\n\nTurn debugging output on.\n"},
  {(char*)"DebugOff", PyvtkObject_DebugOff, METH_VARARGS,
   (char*)"V.DebugOff()\nC++: virtual void DebugOff()\n\nTurn debugging output off.\n"},
  {(char*)"GetDebug", PyvtkObject_GetDebug, METH_VARARGS,
   (char*)"V.GetDebug() -> int\nC++: unsigned char GetDebug()\n\nGet the value of the debug flag.\n"},
  {(char*)"SetDebug", PyvtkObject_SetDebug, METH_VARARGS,
   (char*)"V.SetDebug(int)\nC++: void SetDebug(unsigned char debugFlag)\n\nSet the value of the debug flag. A non-zero value turns debugging\non.\n"},
  {(char*)"BreakOnError", PyvtkObject_BreakOnError, METH_VARARGS | METH_STATIC,
   (char*)"V.BreakOnError()\nC++: static void BreakOnError()\n\nThis method is called when vtkErrorMacro executes. It allows the\ndebugger to break on error.\n"},
  {(char*)"Modified", PyvtkObject_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: virtual void Modified()\n\nUpdate the modification time for this object. Many filters rely\non the modification time to determine if they need to recompute\ntheir data. The modification time is a unique monotonically\nincreasing unsigned long integer.\n"},
  {(char*)"GetMTime", PyvtkObject_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn this object's modified time.\n"},
  {(char*)"SetGlobalWarningDisplay", PyvtkObject_SetGlobalWarningDisplay, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalWarningDisplay(int)\nC++: static void SetGlobalWarningDisplay(int val)\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {(char*)"GlobalWarningDisplayOn", PyvtkObject_GlobalWarningDisplayOn, METH_VARARGS | METH_STATIC,
   (char*)"V.GlobalWarningDisplayOn()\nC++: static void GlobalWarningDisplayOn()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {(char*)"GlobalWarningDisplayOff", PyvtkObject_GlobalWarningDisplayOff, METH_VARARGS | METH_STATIC,
   (char*)"V.GlobalWarningDisplayOff()\nC++: static void GlobalWarningDisplayOff()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {(char*)"GetGlobalWarningDisplay", PyvtkObject_GetGlobalWarningDisplay, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalWarningDisplay() -> int\nC++: static int GetGlobalWarningDisplay()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {(char*)"GetCommand", PyvtkObject_GetCommand, METH_VARARGS,
   (char*)"V.GetCommand(int) -> vtkCommand\nC++: vtkCommand *GetCommand(unsigned long tag)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {(char*)"RemoveObserver", PyvtkObject_RemoveObserver, METH_VARARGS,
   (char*)"V.RemoveObserver(vtkCommand)\nC++: void RemoveObserver(vtkCommand *)\nV.RemoveObserver(int)\nC++: void RemoveObserver(unsigned long tag)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {(char*)"RemoveObservers", PyvtkObject_RemoveObservers, METH_VARARGS,
   (char*)"V.RemoveObservers(int, vtkCommand)\nC++: void RemoveObservers(unsigned long event, vtkCommand *)\nV.RemoveObservers(string, vtkCommand)\nC++: void RemoveObservers(const char *event, vtkCommand *)\nV.RemoveObservers(int)\nC++: void RemoveObservers(unsigned long event)\nV.RemoveObservers(string)\nC++: void RemoveObservers(const char *event)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {(char*)"HasObserver", PyvtkObject_HasObserver, METH_VARARGS,
   (char*)"V.HasObserver(int, vtkCommand) -> int\nC++: int HasObserver(unsigned long event, vtkCommand *)\nV.HasObserver(string, vtkCommand) -> int\nC++: int HasObserver(const char *event, vtkCommand *)\nV.HasObserver(int) -> int\nC++: int HasObserver(unsigned long event)\nV.HasObserver(string) -> int\nC++: int HasObserver(const char *event)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {(char*)"RemoveAllObservers", PyvtkObject_RemoveAllObservers, METH_VARARGS,
   (char*)"V.RemoveAllObservers()\nC++: void RemoveAllObservers()\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {(char*)"InvokeEvent", PyvtkObject_InvokeEvent, METH_VARARGS,
   (char*)"V.InvokeEvent(int, ) -> int\nC++: int InvokeEvent(unsigned long event, void *callData)\nV.InvokeEvent(string, ) -> int\nC++: int InvokeEvent(const char *event, void *callData)\nV.InvokeEvent(int) -> int\nC++: int InvokeEvent(unsigned long event)\nV.InvokeEvent(string) -> int\nC++: int InvokeEvent(const char *event)\n\nThis method invokes an event and return whether the event was\naborted or not. If the event was aborted, the return value is 1,\notherwise it is 0.\n"},
  {(char*)"AddObserver",  PyvtkObject_AddObserver, 1,
   (char*)"V.AddObserver(int, function) -> int\nC++: unsigned long AddObserver(const char *event,\n    vtkCommand *command, float priority=0.0f)\n\nAdd an event callback function(vtkObject, int) for an event type.\nReturns a handle that can be used with RemoveEvent(int)."},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkObject_StaticNew()
{
  return vtkObject::New();
}

PyObject *PyVTKClass_vtkObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkObject_StaticNew,
    PyvtkObject_Methods,
    "vtkObject", modulename,
    NULL, NULL,
    PyvtkObject_Doc(),
    PyVTKClass_vtkObjectBaseNew(modulename));
  return cls;
}

const char **PyvtkObject_Doc()
{
  static const char *docstring[] = {
    "vtkObject - abstract base class for most VTK objects\n\n",
    "Superclass: vtkObjectBase\n\n",
    "vtkObject is the base class for most objects in the visualization\ntoolkit. vtkObject provides methods for tracking modification time,\ndebugging, printing, and event callbacks. Most objects created within\nthe VTK framework should be a subclass of vtkObject or one of its\nchildren.  The few exceptions tend to be very small helper classes\nthat usually never get instantiated or situations where multipl",
    "e\ninheritance gets in the way.  vtkObject also performs reference\ncounting: objects that are reference counted exist as long as another\nobject uses them. Once the last reference to a reference counted\nobject is removed, the object will spontaneously destruct.\n\nCaveats:\n\nNote: in VTK objects should always be created with the New() method\nand deleted with the Delete() method. VTK objects cannot be a",
    "llocated\noff the stack (i.e., automatic objects) because the constructor is a\nprotected method.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

