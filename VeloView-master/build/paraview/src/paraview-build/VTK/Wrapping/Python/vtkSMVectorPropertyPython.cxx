// python wrapper for vtkSMVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMPropertyNew
#endif

static const char **PyvtkSMVectorProperty_Doc();


static PyObject *
PyvtkSMVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMVectorProperty::NewInstance());

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
PyvtkSMVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMVectorProperty *tempr = vtkSMVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    unsigned int tempr = op->GetNumberOfElements();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNumberOfElements(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfUncheckedElements(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetNumberOfUncheckedElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetRepeatCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCommand() :
      op->vtkSMVectorProperty::GetRepeatCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetRepeatCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeatCommand(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetRepeatCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_RepeatCommandOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatCommandOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepeatCommandOn();
      }
    else
      {
      op->vtkSMVectorProperty::RepeatCommandOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_RepeatCommandOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatCommandOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepeatCommandOff();
      }
    else
      {
      op->vtkSMVectorProperty::RepeatCommandOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementsPerCommand() :
      op->vtkSMVectorProperty::GetNumberOfElementsPerCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfElementsPerCommand(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetNumberOfElementsPerCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseIndex() :
      op->vtkSMVectorProperty::GetUseIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIndex(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetUseIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_UseIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIndexOn();
      }
    else
      {
      op->vtkSMVectorProperty::UseIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_UseIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIndexOff();
      }
    else
      {
      op->vtkSMVectorProperty::UseIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCleanCommand(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetCleanCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSMVectorProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSetNumberCommand(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetSetNumberCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSetNumberCommand() :
      op->vtkSMVectorProperty::GetSetNumberCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearUncheckedElements();
      }
    else
      {
      op->vtkSMVectorProperty::ClearUncheckedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialString(temp0);
      }
    else
      {
      op->vtkSMVectorProperty::SetInitialString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInitialString() :
      op->vtkSMVectorProperty::GetInitialString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMVectorProperty\nC++: vtkSMVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMVectorProperty\nC++: vtkSMVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMVectorProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {(char*)"SetNumberOfElements", PyvtkSMVectorProperty_SetNumberOfElements, METH_VARARGS,
   (char*)"V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector.\n"},
  {(char*)"GetNumberOfUncheckedElements", PyvtkSMVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\n"},
  {(char*)"SetNumberOfUncheckedElements", PyvtkSMVectorProperty_SetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.SetNumberOfUncheckedElements(int)\nC++: virtual void SetNumberOfUncheckedElements(unsigned int num)\n\n"},
  {(char*)"GetRepeatCommand", PyvtkSMVectorProperty_GetRepeatCommand, METH_VARARGS,
   (char*)"V.GetRepeatCommand() -> int\nC++: int GetRepeatCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"SetRepeatCommand", PyvtkSMVectorProperty_SetRepeatCommand, METH_VARARGS,
   (char*)"V.SetRepeatCommand(int)\nC++: void SetRepeatCommand(int a)\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"RepeatCommandOn", PyvtkSMVectorProperty_RepeatCommandOn, METH_VARARGS,
   (char*)"V.RepeatCommandOn()\nC++: void RepeatCommandOn()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"RepeatCommandOff", PyvtkSMVectorProperty_RepeatCommandOff, METH_VARARGS,
   (char*)"V.RepeatCommandOff()\nC++: void RepeatCommandOff()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"GetNumberOfElementsPerCommand", PyvtkSMVectorProperty_GetNumberOfElementsPerCommand, METH_VARARGS,
   (char*)"V.GetNumberOfElementsPerCommand() -> int\nC++: int GetNumberOfElementsPerCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"SetNumberOfElementsPerCommand", PyvtkSMVectorProperty_SetNumberOfElementsPerCommand, METH_VARARGS,
   (char*)"V.SetNumberOfElementsPerCommand(int)\nC++: void SetNumberOfElementsPerCommand(int a)\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"GetUseIndex", PyvtkSMVectorProperty_GetUseIndex, METH_VARARGS,
   (char*)"V.GetUseIndex() -> int\nC++: int GetUseIndex()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {(char*)"SetUseIndex", PyvtkSMVectorProperty_SetUseIndex, METH_VARARGS,
   (char*)"V.SetUseIndex(int)\nC++: void SetUseIndex(int a)\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {(char*)"UseIndexOn", PyvtkSMVectorProperty_UseIndexOn, METH_VARARGS,
   (char*)"V.UseIndexOn()\nC++: void UseIndexOn()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {(char*)"UseIndexOff", PyvtkSMVectorProperty_UseIndexOff, METH_VARARGS,
   (char*)"V.UseIndexOff()\nC++: void UseIndexOff()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {(char*)"SetCleanCommand", PyvtkSMVectorProperty_SetCleanCommand, METH_VARARGS,
   (char*)"V.SetCleanCommand(string)\nC++: void SetCleanCommand(char *)\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {(char*)"GetCleanCommand", PyvtkSMVectorProperty_GetCleanCommand, METH_VARARGS,
   (char*)"V.GetCleanCommand() -> string\nC++: char *GetCleanCommand()\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {(char*)"Copy", PyvtkSMVectorProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"SetSetNumberCommand", PyvtkSMVectorProperty_SetSetNumberCommand, METH_VARARGS,
   (char*)"V.SetSetNumberCommand(string)\nC++: void SetSetNumberCommand(char *)\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {(char*)"GetSetNumberCommand", PyvtkSMVectorProperty_GetSetNumberCommand, METH_VARARGS,
   (char*)"V.GetSetNumberCommand() -> string\nC++: char *GetSetNumberCommand()\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {(char*)"ClearUncheckedElements", PyvtkSMVectorProperty_ClearUncheckedElements, METH_VARARGS,
   (char*)"V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\n"},
  {(char*)"SetInitialString", PyvtkSMVectorProperty_SetInitialString, METH_VARARGS,
   (char*)"V.SetInitialString(string)\nC++: void SetInitialString(char *)\n\n"},
  {(char*)"GetInitialString", PyvtkSMVectorProperty_GetInitialString, METH_VARARGS,
   (char*)"V.GetInitialString() -> string\nC++: char *GetInitialString()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMVectorProperty_Methods,
    "vtkSMVectorProperty", modulename,
    NULL, NULL,
    PyvtkSMVectorProperty_Doc(),
    PyVTKClass_vtkSMPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMVectorProperty - abstract superclass for all vector properties\n\n",
    "Superclass: vtkSMProperty\n\n",
    "vtkSMVectorProperty defines an interface common to all vector\nproperties as well as some common settings. A vector property\ncontains a list of values passed to one or more invocations of a\ncommand. How the values are distributed to the different invocations\nis controlled by several parameters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

