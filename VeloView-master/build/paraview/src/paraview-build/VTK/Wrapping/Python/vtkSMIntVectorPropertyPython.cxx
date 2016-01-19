// python wrapper for vtkSMIntVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMIntVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMIntVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMIntVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMVectorPropertyNew
#endif

static const char **PyvtkSMIntVectorProperty_Doc();


static PyObject *
PyvtkSMIntVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMIntVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMIntVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMIntVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMIntVectorProperty::NewInstance());

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
PyvtkSMIntVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMIntVectorProperty *tempr = vtkSMIntVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMIntVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfElements(temp0);
      }
    else
      {
      op->vtkSMIntVectorProperty::SetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMIntVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMIntVectorProperty::SetElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSMIntVectorProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0, temp1) :
      op->vtkSMIntVectorProperty::SetElements(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSMIntVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMIntVectorProperty_SetElements_s1(self, args);
    case 2:
      return PyvtkSMIntVectorProperty_SetElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return NULL;
}



static PyObject *
PyvtkSMIntVectorProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetElements() :
      op->vtkSMIntVectorProperty::GetElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetUncheckedElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMIntVectorProperty::SetUncheckedElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSMIntVectorProperty_SetUncheckedElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0, temp1) :
      op->vtkSMIntVectorProperty::SetUncheckedElements(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSMIntVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMIntVectorProperty_SetUncheckedElements_s1(self, args);
    case 2:
      return PyvtkSMIntVectorProperty_SetUncheckedElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUncheckedElements");
  return NULL;
}



static PyObject *
PyvtkSMIntVectorProperty_SetElements1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements1(temp0) :
      op->vtkSMIntVectorProperty::SetElements1(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetElements2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements2(temp0, temp1) :
      op->vtkSMIntVectorProperty::SetElements2(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetElements3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements3(temp0, temp1, temp2) :
      op->vtkSMIntVectorProperty::SetElements3(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMIntVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMIntVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUncheckedElement(temp0, temp1);
      }
    else
      {
      op->vtkSMIntVectorProperty::SetUncheckedElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMIntVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArgumentIsArray() :
      op->vtkSMIntVectorProperty::GetArgumentIsArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_SetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArgumentIsArray(temp0);
      }
    else
      {
      op->vtkSMIntVectorProperty::SetArgumentIsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_ArgumentIsArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArgumentIsArrayOn();
      }
    else
      {
      op->vtkSMIntVectorProperty::ArgumentIsArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_ArgumentIsArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArgumentIsArrayOff();
      }
    else
      {
      op->vtkSMIntVectorProperty::ArgumentIsArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

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
      op->vtkSMIntVectorProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultValue(temp0) :
      op->vtkSMIntVectorProperty::GetDefaultValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearUncheckedElements();
      }
    else
      {
      op->vtkSMIntVectorProperty::ClearUncheckedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMIntVectorProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntVectorProperty *op = static_cast<vtkSMIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMIntVectorProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMIntVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMIntVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMIntVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMIntVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMIntVectorProperty\nC++: vtkSMIntVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMIntVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMIntVectorProperty\nC++: vtkSMIntVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMIntVectorProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {(char*)"SetNumberOfElements", PyvtkSMIntVectorProperty_SetNumberOfElements, METH_VARARGS,
   (char*)"V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {(char*)"SetElement", PyvtkSMIntVectorProperty_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, int) -> int\nC++: int SetElement(unsigned int idx, int value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetElements", PyvtkSMIntVectorProperty_SetElements, METH_VARARGS,
   (char*)"V.SetElements((int, ...)) -> int\nC++: int SetElements(const int *values)\nV.SetElements((int, ...), int) -> int\nC++: int SetElements(const int *values, unsigned int numElems)\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"GetElements", PyvtkSMIntVectorProperty_GetElements, METH_VARARGS,
   (char*)"V.GetElements() -> (int, ...)\nC++: int *GetElements()\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetUncheckedElements", PyvtkSMIntVectorProperty_SetUncheckedElements, METH_VARARGS,
   (char*)"V.SetUncheckedElements((int, ...)) -> int\nC++: int SetUncheckedElements(const int *values)\nV.SetUncheckedElements((int, ...), int) -> int\nC++: int SetUncheckedElements(const int *values,\n    unsigned int numValues)\n\nSets the values of all the unchecked elements.\n"},
  {(char*)"SetElements1", PyvtkSMIntVectorProperty_SetElements1, METH_VARARGS,
   (char*)"V.SetElements1(int) -> int\nC++: int SetElements1(int value0)\n\nSet the value of 1st element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor one or more of the values is not in all domains. Returns 1\notherwise.\n"},
  {(char*)"SetElements2", PyvtkSMIntVectorProperty_SetElements2, METH_VARARGS,
   (char*)"V.SetElements2(int, int) -> int\nC++: int SetElements2(int value0, int value1)\n\nSet the values of the first 2 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"SetElements3", PyvtkSMIntVectorProperty_SetElements3, METH_VARARGS,
   (char*)"V.SetElements3(int, int, int) -> int\nC++: int SetElements3(int value0, int value1, int value2)\n\nSet the values of the first 3 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"GetElement", PyvtkSMIntVectorProperty_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> int\nC++: int GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {(char*)"GetUncheckedElement", PyvtkSMIntVectorProperty_GetUncheckedElement, METH_VARARGS,
   (char*)"V.GetUncheckedElement(int) -> int\nC++: int GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {(char*)"SetUncheckedElement", PyvtkSMIntVectorProperty_SetUncheckedElement, METH_VARARGS,
   (char*)"V.SetUncheckedElement(int, int)\nC++: void SetUncheckedElement(unsigned int idx, int value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {(char*)"GetNumberOfUncheckedElements", PyvtkSMIntVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {(char*)"GetArgumentIsArray", PyvtkSMIntVectorProperty_GetArgumentIsArray, METH_VARARGS,
   (char*)"V.GetArgumentIsArray() -> int\nC++: int GetArgumentIsArray()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"SetArgumentIsArray", PyvtkSMIntVectorProperty_SetArgumentIsArray, METH_VARARGS,
   (char*)"V.SetArgumentIsArray(int)\nC++: void SetArgumentIsArray(int a)\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"ArgumentIsArrayOn", PyvtkSMIntVectorProperty_ArgumentIsArrayOn, METH_VARARGS,
   (char*)"V.ArgumentIsArrayOn()\nC++: void ArgumentIsArrayOn()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"ArgumentIsArrayOff", PyvtkSMIntVectorProperty_ArgumentIsArrayOff, METH_VARARGS,
   (char*)"V.ArgumentIsArrayOff()\nC++: void ArgumentIsArrayOff()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"Copy", PyvtkSMIntVectorProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"GetDefaultValue", PyvtkSMIntVectorProperty_GetDefaultValue, METH_VARARGS,
   (char*)"V.GetDefaultValue(int) -> int\nC++: int GetDefaultValue(int idx)\n\nReturns the default value, if any, specified in the XML.\n"},
  {(char*)"ClearUncheckedElements", PyvtkSMIntVectorProperty_ClearUncheckedElements, METH_VARARGS,
   (char*)"V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\n"},
  {(char*)"IsValueDefault", PyvtkSMIntVectorProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMIntVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMIntVectorProperty_StaticNew()
{
  return vtkSMIntVectorProperty::New();
}

PyObject *PyVTKClass_vtkSMIntVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMIntVectorProperty_StaticNew,
    PyvtkSMIntVectorProperty_Methods,
    "vtkSMIntVectorProperty", modulename,
    NULL, NULL,
    PyvtkSMIntVectorProperty_Doc(),
    PyVTKClass_vtkSMVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMIntVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMIntVectorProperty - property representing a vector of integers\n\n",
    "Superclass: vtkSMVectorProperty\n\n",
    "vtkSMIntVectorProperty is a concrete sub-class of vtkSMVectorProperty\nrepresenting a vector of integers.\n\nSee Also:\n\nvtkSMVectorProperty vtkSMDoubleVectorProperty\nvtkSMStringVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMIntVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMIntVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMIntVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

