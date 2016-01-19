// python wrapper for vtkSMStringVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMStringVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMStringVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMStringVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMVectorPropertyNew
#endif

static const char **PyvtkSMStringVectorProperty_Doc();

#ifndef DECLARED_PyvtkSMStringVectorProperty_ElementTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMStringVectorProperty_ElementTypes_Type;
#define DECLARED_PyvtkSMStringVectorProperty_ElementTypes_Type
#endif

PyTypeObject PyvtkSMStringVectorProperty_ElementTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ElementTypes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkSMStringVectorProperty_ElementTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMStringVectorProperty_ElementTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMStringVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMStringVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStringVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStringVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStringVectorProperty::NewInstance());

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
PyvtkSMStringVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMStringVectorProperty *tempr = vtkSMStringVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMStringVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

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
      op->vtkSMStringVectorProperty::SetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMStringVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMStringVectorProperty::SetElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    if (ap.IsBound())
      {
      op->GetElements(temp0);
      }
    else
      {
      op->vtkSMStringVectorProperty::GetElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMStringVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElementIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetElementIndex(temp0, temp1) :
      op->vtkSMStringVectorProperty::GetElementIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementType(temp0, temp1);
      }
    else
      {
      op->vtkSMStringVectorProperty::SetElementType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetElementType(temp0) :
      op->vtkSMStringVectorProperty::GetElementType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMStringVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  char *temp1 = NULL;
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
      op->vtkSMStringVectorProperty::SetUncheckedElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    if (ap.IsBound())
      {
      op->GetUncheckedElements(temp0);
      }
    else
      {
      op->vtkSMStringVectorProperty::GetUncheckedElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMStringVectorProperty::SetUncheckedElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMStringVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

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
      op->vtkSMStringVectorProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultValue(temp0) :
      op->vtkSMStringVectorProperty::GetDefaultValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearUncheckedElements();
      }
    else
      {
      op->vtkSMStringVectorProperty::ClearUncheckedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMStringVectorProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMStringVectorProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMStringVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMStringVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMStringVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMStringVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMStringVectorProperty\nC++: vtkSMStringVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMStringVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMStringVectorProperty\nC++: vtkSMStringVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMStringVectorProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {(char*)"SetNumberOfElements", PyvtkSMStringVectorProperty_SetNumberOfElements, METH_VARARGS,
   (char*)"V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {(char*)"SetElement", PyvtkSMStringVectorProperty_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, string) -> int\nC++: int SetElement(unsigned int idx, const char *value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {(char*)"SetElements", PyvtkSMStringVectorProperty_SetElements, METH_VARARGS,
   (char*)"V.SetElements(vtkStringList) -> int\nC++: int SetElements(vtkStringList *newvalue)\n\nSets multiple elements. The size of the property is changed to\nmatch count.\n"},
  {(char*)"GetElements", PyvtkSMStringVectorProperty_GetElements, METH_VARARGS,
   (char*)"V.GetElements(vtkStringList)\nC++: void GetElements(vtkStringList *list)\n\nFills up the vtkStringList instance with the current value.\n"},
  {(char*)"GetElement", PyvtkSMStringVectorProperty_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> string\nC++: const char *GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {(char*)"GetElementIndex", PyvtkSMStringVectorProperty_GetElementIndex, METH_VARARGS,
   (char*)"V.GetElementIndex(string, int) -> int\nC++: unsigned int GetElementIndex(const char *value, int &exists)\n\nReturns the index of an element with a particular value. exists\nis set to false if element does not exist.\n"},
  {(char*)"SetElementType", PyvtkSMStringVectorProperty_SetElementType, METH_VARARGS,
   (char*)"V.SetElementType(int, int)\nC++: void SetElementType(unsigned int idx, int type)\n\nSet the cast type used when passing a value to the stream. For\nexample, if the type is INT, the string is converted to an int\n(with atoi()) before being passed to stream. Note that\nrepresenting scalar values as strings can result in loss of\naccuracy. Possible values are: INT, DOUBLE, STRING.\n"},
  {(char*)"GetElementType", PyvtkSMStringVectorProperty_GetElementType, METH_VARARGS,
   (char*)"V.GetElementType(int) -> int\nC++: int GetElementType(unsigned int idx)\n\nSet the cast type used when passing a value to the stream. For\nexample, if the type is INT, the string is converted to an int\n(with atoi()) before being passed to stream. Note that\nrepresenting scalar values as strings can result in loss of\naccuracy. Possible values are: INT, DOUBLE, STRING.\n"},
  {(char*)"GetUncheckedElement", PyvtkSMStringVectorProperty_GetUncheckedElement, METH_VARARGS,
   (char*)"V.GetUncheckedElement(int) -> string\nC++: const char *GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {(char*)"SetUncheckedElement", PyvtkSMStringVectorProperty_SetUncheckedElement, METH_VARARGS,
   (char*)"V.SetUncheckedElement(int, string)\nC++: void SetUncheckedElement(unsigned int idx, const char *value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {(char*)"GetUncheckedElements", PyvtkSMStringVectorProperty_GetUncheckedElements, METH_VARARGS,
   (char*)"V.GetUncheckedElements(vtkStringList)\nC++: void GetUncheckedElements(vtkStringList *list)\n\nGet/Set unchecked elements.\n"},
  {(char*)"SetUncheckedElements", PyvtkSMStringVectorProperty_SetUncheckedElements, METH_VARARGS,
   (char*)"V.SetUncheckedElements(vtkStringList) -> int\nC++: int SetUncheckedElements(vtkStringList *list)\n\nGet/Set unchecked elements.\n"},
  {(char*)"GetNumberOfUncheckedElements", PyvtkSMStringVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {(char*)"Copy", PyvtkSMStringVectorProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"GetDefaultValue", PyvtkSMStringVectorProperty_GetDefaultValue, METH_VARARGS,
   (char*)"V.GetDefaultValue(int) -> string\nC++: const char *GetDefaultValue(int idx)\n\nReturns the default value, if any, specified in the XML.\n"},
  {(char*)"ClearUncheckedElements", PyvtkSMStringVectorProperty_ClearUncheckedElements, METH_VARARGS,
   (char*)"V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\n"},
  {(char*)"IsValueDefault", PyvtkSMStringVectorProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMStringVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMStringVectorProperty_StaticNew()
{
  return vtkSMStringVectorProperty::New();
}

PyObject *PyVTKClass_vtkSMStringVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMStringVectorProperty_StaticNew,
    PyvtkSMStringVectorProperty_Methods,
    "vtkSMStringVectorProperty", modulename,
    NULL, NULL,
    PyvtkSMStringVectorProperty_Doc(),
    PyVTKClass_vtkSMVectorPropertyNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMStringVectorProperty_ElementTypes_Type);
    PyvtkSMStringVectorProperty_ElementTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMStringVectorProperty_ElementTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ElementTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMStringVectorProperty::ElementTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "INT", vtkSMStringVectorProperty::INT },
          { "DOUBLE", vtkSMStringVectorProperty::DOUBLE },
          { "STRING", vtkSMStringVectorProperty::STRING },
        };

      o = PyvtkSMStringVectorProperty_ElementTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMStringVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMStringVectorProperty - property representing a vector of strings\n\n",
    "Superclass: vtkSMVectorProperty\n\n",
    "vtkSMStringVectorProperty is a concrete sub-class of\nvtkSMVectorProperty representing a vector of strings.\nvtkSMStringVectorProperty can also be used to store double and int\nvalues as strings. The strings are converted to the appropriate type\nwhen they are being passed to the stream. This is generally used for\ncalling methods that have mixed type arguments.\n\nSee Also:\n\nvtkSMVectorProperty vtkSMDou",
    "bleVectorProperty vtkSMIntVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMStringVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMStringVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMStringVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

