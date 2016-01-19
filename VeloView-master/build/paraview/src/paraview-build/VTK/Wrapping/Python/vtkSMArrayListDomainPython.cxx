// python wrapper for vtkSMArrayListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMArrayListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMArrayListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMArrayListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMArrayListDomain_Doc();

#ifndef DECLARED_PyvtkSMArrayListDomain_InformationKeyStrategy_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMArrayListDomain_InformationKeyStrategy_Type;
#define DECLARED_PyvtkSMArrayListDomain_InformationKeyStrategy_Type
#endif

PyTypeObject PyvtkSMArrayListDomain_InformationKeyStrategy_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"InformationKeyStrategy", // tp_name
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

PyObject *PyvtkSMArrayListDomain_InformationKeyStrategy_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMArrayListDomain_InformationKeyStrategy_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMArrayListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMArrayListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArrayListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMArrayListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArrayListDomain::NewInstance());

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
PyvtkSMArrayListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMArrayListDomain *tempr = vtkSMArrayListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkSMArrayListDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_IsArrayPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsArrayPartial(temp0) :
      op->vtkSMArrayListDomain::IsArrayPartial(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation(temp0) :
      op->vtkSMArrayListDomain::GetFieldAssociation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetDomainAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDomainAssociation(temp0) :
      op->vtkSMArrayListDomain::GetDomainAssociation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkSMArrayListDomain::GetAttributeType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetNoneString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoneString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetNoneString() :
      op->vtkSMArrayListDomain::GetNoneString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMArrayListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_AddInformationKey_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->AddInformationKey(temp0, temp1, temp2) :
      op->vtkSMArrayListDomain::AddInformationKey(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMArrayListDomain_AddInformationKey_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->AddInformationKey(temp0, temp1) :
      op->vtkSMArrayListDomain::AddInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMArrayListDomain_AddInformationKey(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMArrayListDomain_AddInformationKey_s1(self, args);
    case 2:
      return PyvtkSMArrayListDomain_AddInformationKey_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInformationKey");
  return NULL;
}



static PyObject *
PyvtkSMArrayListDomain_RemoveInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->RemoveInformationKey(temp0, temp1) :
      op->vtkSMArrayListDomain::RemoveInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetNumberOfInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationKeys() :
      op->vtkSMArrayListDomain::GetNumberOfInformationKeys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_RemoveAllInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInformationKeys();
      }
    else
      {
      op->vtkSMArrayListDomain::RemoveAllInformationKeys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyLocation(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyName(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInformationKeyStrategy(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyStrategy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_CreateMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateMangledName");

  vtkPVArrayInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation") &&
      ap.GetValue(temp1))
    {
    vtkStdString tempr = vtkSMArrayListDomain::CreateMangledName(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_ArrayNameFromMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ArrayNameFromMangledName");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = vtkSMArrayListDomain::ArrayNameFromMangledName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_ComponentIndexFromMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComponentIndexFromMangledName");

  vtkPVArrayInformation *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkSMArrayListDomain::ComponentIndexFromMangledName(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMArrayListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMArrayListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMArrayListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMArrayListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMArrayListDomain\nC++: vtkSMArrayListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMArrayListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMArrayListDomain\nC++: vtkSMArrayListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMArrayListDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *prop)\n\nUpdates the string list based on the available arrays. Requires a\nproperty of class vtkSMProxyProperty which points to a\nvtkSMSourceProxy and contains a vtkSMInputArrayDomain. Only the\nfirst proxy and domain are used.\n"},
  {(char*)"IsArrayPartial", PyvtkSMArrayListDomain_IsArrayPartial, METH_VARARGS,
   (char*)"V.IsArrayPartial(int) -> int\nC++: int IsArrayPartial(unsigned int idx)\n\nReturns true if the array with the given idx is partial false\notherwise. See vtkPVArrayInformation for more information.\n"},
  {(char*)"GetFieldAssociation", PyvtkSMArrayListDomain_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation(int) -> int\nC++: int GetFieldAssociation(unsigned int idx)\n\nGet field association for the array. When\nvtkSMInputArrayDomain::AutomaticPropertyConversion is ON, this is\nnot the true association for a particular array, but what the\ntarget filter is expecting. Thus use this to set the value on the\nproperty. To correctly show icons in UI, use\nGetDomainAssociation().\n"},
  {(char*)"GetDomainAssociation", PyvtkSMArrayListDomain_GetDomainAssociation, METH_VARARGS,
   (char*)"V.GetDomainAssociation(int) -> int\nC++: int GetDomainAssociation(unsigned int idx)\n\nGet the true field association for the array. This is same as\nGetFieldAssociation() except when\nvtkSMInputArrayDomain::AutomaticPropertyConversion is ON. In that\ncase, this may be different. e.g. let's say Pressure is a point\narray on the input, however this filter only works with cell\narray. In that case, since AutomaticPropertyConversion is ON,\nvtkPVPostFilter is going to automatically convert the point array\nPressure to a cell array for the filter. Now in this case, the\nSetInputArrayToProcess property on the filter must be set to ask\na \"cell\" array named Pressure, despite the fact that there's no\nsuch cell array. And the UI needs to show the \"Pressure\" as a\npoint array, since that's what the user is expecting. In this\ncase, GetFieldAssociation() is going to return \"CELL\" for the\n\"Pressure\", while GetDomainAssociation() is going to return\n\"POINT\". Thus, use GetFieldAssociation() for setting the property\nvalue, but use GetDomainAssociation() for the icon.\n"},
  {(char*)"GetAttributeType", PyvtkSMArrayListDomain_GetAttributeType, METH_VARARGS,
   (char*)"V.GetAttributeType() -> int\nC++: int GetAttributeType()\n\nReturn the attribute type. The values are listed in\nvtkDataSetAttributes.h.\n"},
  {(char*)"GetNoneString", PyvtkSMArrayListDomain_GetNoneString, METH_VARARGS,
   (char*)"V.GetNoneString() -> string\nC++: char *GetNoneString()\n\nReturn the string that is used as \"none_string\" in XML\nconfiguration.\n"},
  {(char*)"SetDefaultValues", PyvtkSMArrayListDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {(char*)"AddInformationKey", PyvtkSMArrayListDomain_AddInformationKey, METH_VARARGS,
   (char*)"V.AddInformationKey(string, string, int) -> int\nC++: virtual unsigned int AddInformationKey(const char *location,\n    const char *name, int strategy)\nV.AddInformationKey(string, string) -> int\nC++: virtual unsigned int AddInformationKey(const char *location,\n    const char *name)\n\nAdds a new InformationKey to the domain. The default strategy is\nNEED_KEY if none is specified. If no InformationKey is specified\nin the xml, the default behavior is to create a rejected key\nvtkAbstractArray::GUI_HIDE\n"},
  {(char*)"RemoveInformationKey", PyvtkSMArrayListDomain_RemoveInformationKey, METH_VARARGS,
   (char*)"V.RemoveInformationKey(string, string) -> int\nC++: unsigned int RemoveInformationKey(const char *location,\n    const char *name)\n\nRemoves an InformationKey from this domain.\n"},
  {(char*)"GetNumberOfInformationKeys", PyvtkSMArrayListDomain_GetNumberOfInformationKeys, METH_VARARGS,
   (char*)"V.GetNumberOfInformationKeys() -> int\nC++: unsigned int GetNumberOfInformationKeys()\n\nReturns the number of InformationKeys in this domain.\n"},
  {(char*)"RemoveAllInformationKeys", PyvtkSMArrayListDomain_RemoveAllInformationKeys, METH_VARARGS,
   (char*)"V.RemoveAllInformationKeys()\nC++: void RemoveAllInformationKeys()\n\n"},
  {(char*)"GetInformationKeyLocation", PyvtkSMArrayListDomain_GetInformationKeyLocation, METH_VARARGS,
   (char*)"V.GetInformationKeyLocation(int) -> string\nC++: const char *GetInformationKeyLocation(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {(char*)"GetInformationKeyName", PyvtkSMArrayListDomain_GetInformationKeyName, METH_VARARGS,
   (char*)"V.GetInformationKeyName(int) -> string\nC++: const char *GetInformationKeyName(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {(char*)"GetInformationKeyStrategy", PyvtkSMArrayListDomain_GetInformationKeyStrategy, METH_VARARGS,
   (char*)"V.GetInformationKeyStrategy(int) -> int\nC++: int GetInformationKeyStrategy(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {(char*)"CreateMangledName", PyvtkSMArrayListDomain_CreateMangledName, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateMangledName(vtkPVArrayInformation, int) -> string\nC++: static vtkStdString CreateMangledName(\n    vtkPVArrayInformation *arrayInfo, int component)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {(char*)"ArrayNameFromMangledName", PyvtkSMArrayListDomain_ArrayNameFromMangledName, METH_VARARGS | METH_STATIC,
   (char*)"V.ArrayNameFromMangledName(string) -> string\nC++: static vtkStdString ArrayNameFromMangledName(\n    const char *name)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {(char*)"ComponentIndexFromMangledName", PyvtkSMArrayListDomain_ComponentIndexFromMangledName, METH_VARARGS | METH_STATIC,
   (char*)"V.ComponentIndexFromMangledName(vtkPVArrayInformation, string)\n    -> int\nC++: static int ComponentIndexFromMangledName(\n    vtkPVArrayInformation *info, const char *name)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMArrayListDomain_StaticNew()
{
  return vtkSMArrayListDomain::New();
}

PyObject *PyVTKClass_vtkSMArrayListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMArrayListDomain_StaticNew,
    PyvtkSMArrayListDomain_Methods,
    "vtkSMArrayListDomain", modulename,
    NULL, NULL,
    PyvtkSMArrayListDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMArrayListDomain_InformationKeyStrategy_Type);
    PyvtkSMArrayListDomain_InformationKeyStrategy_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMArrayListDomain_InformationKeyStrategy_Type;
    if (o && PyDict_SetItemString(d, (char *)"InformationKeyStrategy", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkSMArrayListDomain::InformationKeyStrategy cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "NEED_KEY", vtkSMArrayListDomain::NEED_KEY },
          { "REJECT_KEY", vtkSMArrayListDomain::REJECT_KEY },
        };

      o = PyvtkSMArrayListDomain_InformationKeyStrategy_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMArrayListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMArrayListDomain - list of arrays obtained from input\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMArrayListDomain is used on vtkSMStringVectorProperty when the\nvalues on the property correspond to data arrays in the input.\n\nSupported Required Property Functions:\n\\li Input : (required) this point to a vtkSMInputProperty on the\n    parent\n               proxy. The value of this property provides the source\nthat\n               provides the data information to determine the\navailable\n        ",
    "       arrays.\n\\li FieldDataSelection : (optional) this points a\n    vtkSMIntVectorProperty\n               that provide the array association for accepted arrays\nas\n               defined by vtkDataObject::FieldAssociations. If\n               FieldDataSelection is missing, then the array\nassociation is\n               determined using the vtkSMInputArrayDomain on the\n               vtkSMInputProper",
    "ty pointed by the required function\nInput.\n               If the input property has multiple\nvtkSMInputArrayDomain\n               types, you can identify the domain to use by using the\n\\li input_domain_name XML attribute. If neither the\n               FieldDataSelection is specified and no\nvtkSMInputArrayDomain\n               is found, then this domain assumes that all array\nassociations\n         ",
    "      are valid.\n\nSupported XML attributes:\n\\li attribute_type : (optional) when specified, this is used to pick\n    the\n               default value in SetDefaultValues. This specifies the\n               array-attribute type to pick as the default, if\navailable e.g.\n               if value is \"Scalars\", then by default the active\nscalar array\n               will be picked, if available. Not to be",
    " confused with\n               vtkDataObject::AttributeTypes, this corresponds to\n               vtkDataSetAttributes::AttributeTypes.\n               Accepted values are \"Scalars\", \"Vectors\", etc., as\ndefined by\n               vtkDataSetAttributes::AttributeNames.\n\\li data_type: (optional) when specified qualifies the acceptable\n    arrays\n               list to the types specified. Value can be on",
    "e or more\nof\n               VTK_BIT, VTK_CHAR, VTK_INT, VTK_FLOAT, VTK_DOUBLE,...\netc.\n               or the equivalent integers from vtkType.h.  VTK_VOID,\nand 0\n               are equivalent to not specifying, meaning any data\ntype.\n               VTK_DATA_ARRAY can be used to limit to vtkDataArray\n               subclasses.\n\\li none_string: (optional) when specified, this string appears as\n    t",
    "he\n               first entry in the domain the list and can be used to\nshow\n               \"None\", or \"Not available\" etc.\n\\li key_location / key_name / key_strategy: (optional)\n     those tree attributes are related to InformationKey of the\narray.\n     key_location/key_name are the location and name of the given\nInformationKey\n     key_strategy specifies if this specific key is needed to be in\nt",
    "he domain\n     or if this key is rejected. One of need_key or reject_key.\n     if nothing is specified, the default is to add a\nvtkAbstractArray::GUI_HIDE\n     key, with the reject_key strategy, so that arrays that have this\nInformationKey\n     are not visible in the user interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMArrayListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMArrayListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMArrayListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

