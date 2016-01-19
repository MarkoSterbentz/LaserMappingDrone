// python wrapper for vtkSMIdTypeVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMIdTypeVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMIdTypeVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMIdTypeVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMVectorPropertyNew
#endif

static const char **PyvtkSMIdTypeVectorProperty_Doc();


static PyObject *
PyvtkSMIdTypeVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMIdTypeVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMIdTypeVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMIdTypeVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMIdTypeVectorProperty::NewInstance());

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
PyvtkSMIdTypeVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMIdTypeVectorProperty *tempr = vtkSMIdTypeVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMIdTypeVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

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
      op->vtkSMIdTypeVectorProperty::SetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMIdTypeVectorProperty::SetElements(temp0));

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
PyvtkSMIdTypeVectorProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElements(temp0, temp1));

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
PyvtkSMIdTypeVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMIdTypeVectorProperty_SetElements_s1(self, args);
    case 2:
      return PyvtkSMIdTypeVectorProperty_SetElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return NULL;
}



static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMIdTypeVectorProperty::SetUncheckedElements(temp0));

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
PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetUncheckedElements(temp0, temp1));

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
PyvtkSMIdTypeVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s1(self, args);
    case 2:
      return PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUncheckedElements");
  return NULL;
}



static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements1(temp0) :
      op->vtkSMIdTypeVectorProperty::SetElements1(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements2(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElements2(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements3(temp0, temp1, temp2) :
      op->vtkSMIdTypeVectorProperty::SetElements3(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMIdTypeVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMIdTypeVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
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
      op->vtkSMIdTypeVectorProperty::SetUncheckedElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMIdTypeVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArgumentIsArray() :
      op->vtkSMIdTypeVectorProperty::GetArgumentIsArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

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
      op->vtkSMIdTypeVectorProperty::SetArgumentIsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArgumentIsArrayOn();
      }
    else
      {
      op->vtkSMIdTypeVectorProperty::ArgumentIsArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ArgumentIsArrayOff();
      }
    else
      {
      op->vtkSMIdTypeVectorProperty::ArgumentIsArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

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
      op->vtkSMIdTypeVectorProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearUncheckedElements();
      }
    else
      {
      op->vtkSMIdTypeVectorProperty::ClearUncheckedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMIdTypeVectorProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMIdTypeVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMIdTypeVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMIdTypeVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMIdTypeVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMIdTypeVectorProperty\nC++: vtkSMIdTypeVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMIdTypeVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMIdTypeVectorProperty\nC++: vtkSMIdTypeVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMIdTypeVectorProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {(char*)"SetNumberOfElements", PyvtkSMIdTypeVectorProperty_SetNumberOfElements, METH_VARARGS,
   (char*)"V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {(char*)"SetElement", PyvtkSMIdTypeVectorProperty_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, int) -> int\nC++: int SetElement(unsigned int idx, vtkIdType value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetElements", PyvtkSMIdTypeVectorProperty_SetElements, METH_VARARGS,
   (char*)"V.SetElements((int, ...)) -> int\nC++: int SetElements(const vtkIdType *values)\nV.SetElements((int, ...), int) -> int\nC++: int SetElements(const vtkIdType *values,\n    unsigned int numValues)\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetUncheckedElements", PyvtkSMIdTypeVectorProperty_SetUncheckedElements, METH_VARARGS,
   (char*)"V.SetUncheckedElements((int, ...)) -> int\nC++: int SetUncheckedElements(const vtkIdType *values)\nV.SetUncheckedElements((int, ...), int) -> int\nC++: int SetUncheckedElements(const vtkIdType *values,\n    unsigned int numValues)\n\nSets the values of all the unchecked elements.\n"},
  {(char*)"SetElements1", PyvtkSMIdTypeVectorProperty_SetElements1, METH_VARARGS,
   (char*)"V.SetElements1(int) -> int\nC++: int SetElements1(vtkIdType value0)\n\nSet the value of 1st element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor one or more of the values is not in all domains. Returns 1\notherwise.\n"},
  {(char*)"SetElements2", PyvtkSMIdTypeVectorProperty_SetElements2, METH_VARARGS,
   (char*)"V.SetElements2(int, int) -> int\nC++: int SetElements2(vtkIdType value0, vtkIdType value1)\n\nSet the values of the first 2 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"SetElements3", PyvtkSMIdTypeVectorProperty_SetElements3, METH_VARARGS,
   (char*)"V.SetElements3(int, int, int) -> int\nC++: int SetElements3(vtkIdType value0, vtkIdType value1,\n    vtkIdType value2)\n\nSet the values of the first 3 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"GetElement", PyvtkSMIdTypeVectorProperty_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> int\nC++: vtkIdType GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {(char*)"GetUncheckedElement", PyvtkSMIdTypeVectorProperty_GetUncheckedElement, METH_VARARGS,
   (char*)"V.GetUncheckedElement(int) -> int\nC++: vtkIdType GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {(char*)"SetUncheckedElement", PyvtkSMIdTypeVectorProperty_SetUncheckedElement, METH_VARARGS,
   (char*)"V.SetUncheckedElement(int, int)\nC++: void SetUncheckedElement(unsigned int idx, vtkIdType value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {(char*)"GetNumberOfUncheckedElements", PyvtkSMIdTypeVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {(char*)"GetArgumentIsArray", PyvtkSMIdTypeVectorProperty_GetArgumentIsArray, METH_VARARGS,
   (char*)"V.GetArgumentIsArray() -> int\nC++: int GetArgumentIsArray()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"SetArgumentIsArray", PyvtkSMIdTypeVectorProperty_SetArgumentIsArray, METH_VARARGS,
   (char*)"V.SetArgumentIsArray(int)\nC++: void SetArgumentIsArray(int a)\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"ArgumentIsArrayOn", PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOn, METH_VARARGS,
   (char*)"V.ArgumentIsArrayOn()\nC++: void ArgumentIsArrayOn()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"ArgumentIsArrayOff", PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOff, METH_VARARGS,
   (char*)"V.ArgumentIsArrayOff()\nC++: void ArgumentIsArrayOff()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"Copy", PyvtkSMIdTypeVectorProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"ClearUncheckedElements", PyvtkSMIdTypeVectorProperty_ClearUncheckedElements, METH_VARARGS,
   (char*)"V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMIdTypeVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMIdTypeVectorProperty_StaticNew()
{
  return vtkSMIdTypeVectorProperty::New();
}

PyObject *PyVTKClass_vtkSMIdTypeVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMIdTypeVectorProperty_StaticNew,
    PyvtkSMIdTypeVectorProperty_Methods,
    "vtkSMIdTypeVectorProperty", modulename,
    NULL, NULL,
    PyvtkSMIdTypeVectorProperty_Doc(),
    PyVTKClass_vtkSMVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMIdTypeVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMIdTypeVectorProperty - property representing a vector of integers\n\n",
    "Superclass: vtkSMVectorProperty\n\n",
    "vtkSMIdTypeVectorProperty is a concrete sub-class of\nvtkSMVectorProperty representing a vector of integers (vtkIdType,\npossibly 64 bit).\n\nSee Also:\n\nvtkSMVectorProperty vtkSMDoubleVectorProperty\nvtkSMStringVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMIdTypeVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMIdTypeVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMIdTypeVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

