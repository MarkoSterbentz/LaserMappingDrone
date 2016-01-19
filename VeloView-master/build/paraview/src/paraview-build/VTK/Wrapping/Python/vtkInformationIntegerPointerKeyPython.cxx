// python wrapper for vtkInformationIntegerPointerKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationIntegerPointerKey.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationIntegerPointerKey(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationIntegerPointerKeyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationIntegerPointerKey_Doc();


static PyObject *
PyvtkInformationIntegerPointerKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationIntegerPointerKey::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerPointerKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIntegerPointerKey::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerPointerKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationIntegerPointerKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIntegerPointerKey::NewInstance());

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
PyvtkInformationIntegerPointerKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationIntegerPointerKey *tempr = vtkInformationIntegerPointerKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerPointerKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  vtkInformation *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationIntegerPointerKey::Set(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerPointerKey_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformationIntegerPointerKey::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformationIntegerPointerKey_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  vtkInformation *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Get(temp0, temp1);
      }
    else
      {
      op->vtkInformationIntegerPointerKey::Get(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkInformationIntegerPointerKey_Get(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkInformationIntegerPointerKey_Get_s1(self, args);
    case 2:
      return PyvtkInformationIntegerPointerKey_Get_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return NULL;
}



static PyObject *
PyvtkInformationIntegerPointerKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationIntegerPointerKey::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerPointerKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerPointerKey *op = static_cast<vtkInformationIntegerPointerKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationIntegerPointerKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationIntegerPointerKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationIntegerPointerKey_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationIntegerPointerKey_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationIntegerPointerKey_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationIntegerPointerKey\nC++: vtkInformationIntegerPointerKey *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationIntegerPointerKey_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationIntegerPointerKey\nC++: vtkInformationIntegerPointerKey *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Set", PyvtkInformationIntegerPointerKey_Set, METH_VARARGS,
   (char*)"V.Set(vtkInformation, [int, ...], int)\nC++: void Set(vtkInformation *info, int *value, int length)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationIntegerPointerKey_Get, METH_VARARGS,
   (char*)"V.Get(vtkInformation) -> (int, ...)\nC++: int *Get(vtkInformation *info)\nV.Get(vtkInformation, [int, ...])\nC++: void Get(vtkInformation *info, int *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Length", PyvtkInformationIntegerPointerKey_Length, METH_VARARGS,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationIntegerPointerKey_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationIntegerPointerKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationIntegerPointerKey_Methods,
    "vtkInformationIntegerPointerKey", modulename,
    NULL, NULL,
    PyvtkInformationIntegerPointerKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationIntegerPointerKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationIntegerPointerKey - Key for pointer to integer.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationIntegerPointerKey is used to represent keys for pointer\nto integer values in vtkInformation.h\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationIntegerPointerKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationIntegerPointerKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationIntegerPointerKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

