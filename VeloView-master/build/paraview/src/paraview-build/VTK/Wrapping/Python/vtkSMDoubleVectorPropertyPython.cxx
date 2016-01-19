// python wrapper for vtkSMDoubleVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDoubleVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDoubleVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDoubleVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMVectorPropertyNew
#endif

static const char **PyvtkSMDoubleVectorProperty_Doc();


static PyObject *
PyvtkSMDoubleVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDoubleVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDoubleVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleVectorProperty::NewInstance());

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
PyvtkSMDoubleVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDoubleVectorProperty *tempr = vtkSMDoubleVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMDoubleVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

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
      op->vtkSMDoubleVectorProperty::SetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMDoubleVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMDoubleVectorProperty::SetElements(temp0));

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
PyvtkSMDoubleVectorProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0, temp1) :
      op->vtkSMDoubleVectorProperty::SetElements(temp0, temp1));

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
PyvtkSMDoubleVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMDoubleVectorProperty_SetElements_s1(self, args);
    case 2:
      return PyvtkSMDoubleVectorProperty_SetElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return NULL;
}



static PyObject *
PyvtkSMDoubleVectorProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetElements() :
      op->vtkSMDoubleVectorProperty::GetElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetUncheckedElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMDoubleVectorProperty::SetUncheckedElements(temp0));

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
PyvtkSMDoubleVectorProperty_SetUncheckedElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0, temp1) :
      op->vtkSMDoubleVectorProperty::SetUncheckedElements(temp0, temp1));

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
PyvtkSMDoubleVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMDoubleVectorProperty_SetUncheckedElements_s1(self, args);
    case 2:
      return PyvtkSMDoubleVectorProperty_SetUncheckedElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUncheckedElements");
  return NULL;
}



static PyObject *
PyvtkSMDoubleVectorProperty_SetElements1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements1(temp0) :
      op->vtkSMDoubleVectorProperty::SetElements1(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetElements2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements2(temp0, temp1) :
      op->vtkSMDoubleVectorProperty::SetElements2(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetElements3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements3(temp0, temp1, temp2) :
      op->vtkSMDoubleVectorProperty::SetElements3(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetElements4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements4(temp0, temp1, temp2, temp3) :
      op->vtkSMDoubleVectorProperty::SetElements4(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMDoubleVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMDoubleVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMDoubleVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  unsigned int temp0;
  double temp1;
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
      op->vtkSMDoubleVectorProperty::SetUncheckedElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArgumentIsArray() :
      op->vtkSMDoubleVectorProperty::GetArgumentIsArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

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
      op->vtkSMDoubleVectorProperty::SetArgumentIsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrecision(temp0);
      }
    else
      {
      op->vtkSMDoubleVectorProperty::SetPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkSMDoubleVectorProperty::GetPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

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
      op->vtkSMDoubleVectorProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearUncheckedElements();
      }
    else
      {
      op->vtkSMDoubleVectorProperty::ClearUncheckedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMDoubleVectorProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleVectorProperty *op = static_cast<vtkSMDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMDoubleVectorProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDoubleVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDoubleVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDoubleVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDoubleVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDoubleVectorProperty\nC++: vtkSMDoubleVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDoubleVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDoubleVectorProperty\nC++: vtkSMDoubleVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMDoubleVectorProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {(char*)"SetNumberOfElements", PyvtkSMDoubleVectorProperty_SetNumberOfElements, METH_VARARGS,
   (char*)"V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {(char*)"SetElement", PyvtkSMDoubleVectorProperty_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, float) -> int\nC++: int SetElement(unsigned int idx, double value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetElements", PyvtkSMDoubleVectorProperty_SetElements, METH_VARARGS,
   (char*)"V.SetElements((float, ...)) -> int\nC++: int SetElements(const double *values)\nV.SetElements((float, ...), int) -> int\nC++: int SetElements(const double *values, unsigned int numValues)\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"GetElements", PyvtkSMDoubleVectorProperty_GetElements, METH_VARARGS,
   (char*)"V.GetElements() -> (float, ...)\nC++: double *GetElements()\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetUncheckedElements", PyvtkSMDoubleVectorProperty_SetUncheckedElements, METH_VARARGS,
   (char*)"V.SetUncheckedElements((float, ...)) -> int\nC++: int SetUncheckedElements(const double *values)\nV.SetUncheckedElements((float, ...), int) -> int\nC++: int SetUncheckedElements(const double *values,\n    unsigned int numValues)\n\nSets the values of all the unchecked elements.\n"},
  {(char*)"SetElements1", PyvtkSMDoubleVectorProperty_SetElements1, METH_VARARGS,
   (char*)"V.SetElements1(float) -> int\nC++: int SetElements1(double value0)\n\nSet the value of 1st element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor one or more of the values is not in all domains. Returns 1\notherwise.\n"},
  {(char*)"SetElements2", PyvtkSMDoubleVectorProperty_SetElements2, METH_VARARGS,
   (char*)"V.SetElements2(float, float) -> int\nC++: int SetElements2(double value0, double value1)\n\nSet the values of the first 2 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"SetElements3", PyvtkSMDoubleVectorProperty_SetElements3, METH_VARARGS,
   (char*)"V.SetElements3(float, float, float) -> int\nC++: int SetElements3(double value0, double value1, double value2)\n\nSet the values of the first 3 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"SetElements4", PyvtkSMDoubleVectorProperty_SetElements4, METH_VARARGS,
   (char*)"V.SetElements4(float, float, float, float) -> int\nC++: int SetElements4(double value0, double value1, double value2,\n     double value3)\n\nSet the values of the first 4 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {(char*)"GetElement", PyvtkSMDoubleVectorProperty_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> float\nC++: double GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {(char*)"GetNumberOfUncheckedElements", PyvtkSMDoubleVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {(char*)"GetUncheckedElement", PyvtkSMDoubleVectorProperty_GetUncheckedElement, METH_VARARGS,
   (char*)"V.GetUncheckedElement(int) -> float\nC++: double GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {(char*)"SetUncheckedElement", PyvtkSMDoubleVectorProperty_SetUncheckedElement, METH_VARARGS,
   (char*)"V.SetUncheckedElement(int, float)\nC++: void SetUncheckedElement(unsigned int idx, double value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {(char*)"GetArgumentIsArray", PyvtkSMDoubleVectorProperty_GetArgumentIsArray, METH_VARARGS,
   (char*)"V.GetArgumentIsArray() -> int\nC++: int GetArgumentIsArray()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"SetArgumentIsArray", PyvtkSMDoubleVectorProperty_SetArgumentIsArray, METH_VARARGS,
   (char*)"V.SetArgumentIsArray(int)\nC++: void SetArgumentIsArray(int a)\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {(char*)"SetPrecision", PyvtkSMDoubleVectorProperty_SetPrecision, METH_VARARGS,
   (char*)"V.SetPrecision(int)\nC++: void SetPrecision(int a)\n\nGet/Set the precision to use while saving the state for this\nproperty. If 0 (or negative), then default ostream precision will\nbe used. Precision can be defined in ServerManager configuration\nXML using the attribute \"precision\".\n"},
  {(char*)"GetPrecision", PyvtkSMDoubleVectorProperty_GetPrecision, METH_VARARGS,
   (char*)"V.GetPrecision() -> int\nC++: int GetPrecision()\n\nGet/Set the precision to use while saving the state for this\nproperty. If 0 (or negative), then default ostream precision will\nbe used. Precision can be defined in ServerManager configuration\nXML using the attribute \"precision\".\n"},
  {(char*)"Copy", PyvtkSMDoubleVectorProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"ClearUncheckedElements", PyvtkSMDoubleVectorProperty_ClearUncheckedElements, METH_VARARGS,
   (char*)"V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\n"},
  {(char*)"IsValueDefault", PyvtkSMDoubleVectorProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMDoubleVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDoubleVectorProperty_StaticNew()
{
  return vtkSMDoubleVectorProperty::New();
}

PyObject *PyVTKClass_vtkSMDoubleVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDoubleVectorProperty_StaticNew,
    PyvtkSMDoubleVectorProperty_Methods,
    "vtkSMDoubleVectorProperty", modulename,
    NULL, NULL,
    PyvtkSMDoubleVectorProperty_Doc(),
    PyVTKClass_vtkSMVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMDoubleVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMDoubleVectorProperty - property representing a vector of doubles\n\n",
    "Superclass: vtkSMVectorProperty\n\n",
    "vtkSMDoubleVectorProperty is a concrete sub-class of\nvtkSMVectorProperty representing a vector of doubles.\n\nSee Also:\n\nvtkSMVectorProperty vtkSMIntVectorProperty vtkSMStringVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDoubleVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDoubleVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDoubleVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

