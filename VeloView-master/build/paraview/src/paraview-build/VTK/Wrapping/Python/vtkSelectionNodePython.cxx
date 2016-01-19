// python wrapper for vtkSelectionNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectionNode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectionNode(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionNodeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSelectionNode_Doc();

#ifndef DECLARED_PyvtkSelectionNode_SelectionContent_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSelectionNode_SelectionContent_Type;
#define DECLARED_PyvtkSelectionNode_SelectionContent_Type
#endif

PyTypeObject PyvtkSelectionNode_SelectionContent_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SelectionContent", // tp_name
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

PyObject *PyvtkSelectionNode_SelectionContent_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSelectionNode_SelectionContent_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkSelectionNode_SelectionField_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSelectionNode_SelectionField_Type;
#define DECLARED_PyvtkSelectionNode_SelectionField_Type
#endif

PyTypeObject PyvtkSelectionNode_SelectionField_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SelectionField", // tp_name
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

PyObject *PyvtkSelectionNode_SelectionField_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSelectionNode_SelectionField_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSelectionNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectionNode::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionNode::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionNode::NewInstance());

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
PyvtkSelectionNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectionNode *tempr = vtkSelectionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSelectionNode::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionList(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetSelectionList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetSelectionList() :
      op->vtkSelectionNode::GetSelectionList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionData(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetSelectionData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetSelectionData() :
      op->vtkSelectionNode::GetSelectionData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetProperties() :
      op->vtkSelectionNode::GetProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkSelectionNode::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkSelectionNode::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectionNode::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTENT_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTENT_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContentType(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetContentType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionNode::GetContentType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_FIELD_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::FIELD_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionNode::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertSelectionFieldToAttributeType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertSelectionFieldToAttributeType");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSelectionNode::ConvertSelectionFieldToAttributeType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertAttributeTypeToSelectionField(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertAttributeTypeToSelectionField");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSelectionNode::ConvertAttributeTypeToSelectionField(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQueryString(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetQueryString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionNode::GetQueryString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_EPSILON(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EPSILON");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkSelectionNode::EPSILON();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTAINING_CELLS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTAINING_CELLS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTAINING_CELLS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPONENT_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_NUMBER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPONENT_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_INVERSE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INVERSE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::INVERSE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PIXEL_COUNT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIXEL_COUNT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PIXEL_COUNT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::SOURCE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE_ID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::SOURCE_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::PROP();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP_ID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROP_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROCESS_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROCESS_ID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROCESS_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPOSITE_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDEX");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPOSITE_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_LEVEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_LEVEL");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_LEVEL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_INDEX");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_INDEXED_VERTICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INDEXED_VERTICES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::INDEXED_VERTICES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_UnionSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnionSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->UnionSelectionList(temp0);
      }
    else
      {
      op->vtkSelectionNode::UnionSelectionList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SubtractSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubtractSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->SubtractSelectionList(temp0);
      }
    else
      {
      op->vtkSelectionNode::SubtractSelectionList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_EqualProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EqualProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  bool temp1 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->EqualProperties(temp0, temp1) :
      op->vtkSelectionNode::EqualProperties(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionNode_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionNode_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionNode_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionNode_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectionNode\nC++: vtkSelectionNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionNode_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionNode\nC++: vtkSelectionNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSelectionNode_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"SetSelectionList", PyvtkSelectionNode_SetSelectionList, METH_VARARGS,
   (char*)"V.SetSelectionList(vtkAbstractArray)\nC++: virtual void SetSelectionList(vtkAbstractArray *)\n\nSets the selection list.\n"},
  {(char*)"GetSelectionList", PyvtkSelectionNode_GetSelectionList, METH_VARARGS,
   (char*)"V.GetSelectionList() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSelectionList()\n\nSets the selection list.\n"},
  {(char*)"SetSelectionData", PyvtkSelectionNode_SetSelectionData, METH_VARARGS,
   (char*)"V.SetSelectionData(vtkDataSetAttributes)\nC++: virtual void SetSelectionData(vtkDataSetAttributes *data)\n\nSets the selection table.\n"},
  {(char*)"GetSelectionData", PyvtkSelectionNode_GetSelectionData, METH_VARARGS,
   (char*)"V.GetSelectionData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetSelectionData()\n\nSets the selection table.\n"},
  {(char*)"GetProperties", PyvtkSelectionNode_GetProperties, METH_VARARGS,
   (char*)"V.GetProperties() -> vtkInformation\nC++: vtkInformation *GetProperties()\n\nReturns the property map.\n"},
  {(char*)"DeepCopy", PyvtkSelectionNode_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkSelectionNode)\nC++: virtual void DeepCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input.\n"},
  {(char*)"ShallowCopy", PyvtkSelectionNode_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkSelectionNode)\nC++: virtual void ShallowCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input. This\nis a shallow copy: selection lists and pointers in the properties\nare passed by reference.\n"},
  {(char*)"GetMTime", PyvtkSelectionNode_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the properties\n"},
  {(char*)"CONTENT_TYPE", PyvtkSelectionNode_CONTENT_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.CONTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTENT_TYPE()\n\nGet the (primary) property that describes the content of a\nselection node's data. Other auxiliary description properties\nfollow. GLOBALIDS means that the selection list contains values\nfrom the vtkDataSetAttribute array of the same name. PEDIGREEIDS\nmeans that the selection list contains values from the\nvtkDataSetAttribute array of the same name. VALUES means the the\nselection list contains values from an arbitrary attribute array\n(ignores any globalids attribute) INDICES means that the\nselection list contains indexes into the cell or point arrays.\nFRUSTUM means the set of points and cells inside a frustum\nLOCATIONS means the set of points and cells near a set of\npositions THRESHOLDS means the points and cells with values\nwithin a set of ranges GetContentType() returns -1 if the content\ntype is not set.\n"},
  {(char*)"SetContentType", PyvtkSelectionNode_SetContentType, METH_VARARGS,
   (char*)"V.SetContentType(int)\nC++: virtual void SetContentType(int type)\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {(char*)"GetContentType", PyvtkSelectionNode_GetContentType, METH_VARARGS,
   (char*)"V.GetContentType() -> int\nC++: virtual int GetContentType()\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {(char*)"FIELD_TYPE", PyvtkSelectionNode_FIELD_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_TYPE()\n\nControls whether cell, point, or field data determine what is\ninside and out. The default is CELL. Vertex and edge types are\nalso available for graph classes. GetFieldType() returns -1 if\nthe field type is not set.\n"},
  {(char*)"SetFieldType", PyvtkSelectionNode_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: virtual void SetFieldType(int type)\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {(char*)"GetFieldType", PyvtkSelectionNode_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {(char*)"ConvertSelectionFieldToAttributeType", PyvtkSelectionNode_ConvertSelectionFieldToAttributeType, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertSelectionFieldToAttributeType(int) -> int\nC++: static int ConvertSelectionFieldToAttributeType(int val)\n\nMethods to convert vtkSelectionNode::SelectionField to\nvtkDataSetAttribute::AttributeTypes and vice-versa.\n"},
  {(char*)"ConvertAttributeTypeToSelectionField", PyvtkSelectionNode_ConvertAttributeTypeToSelectionField, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertAttributeTypeToSelectionField(int) -> int\nC++: static int ConvertAttributeTypeToSelectionField(int val)\n\nMethods to convert vtkSelectionNode::SelectionField to\nvtkDataSetAttribute::AttributeTypes and vice-versa.\n"},
  {(char*)"SetQueryString", PyvtkSelectionNode_SetQueryString, METH_VARARGS,
   (char*)"V.SetQueryString(string)\nC++: void SetQueryString(char *)\n\nSet/Get the query expression string.\n"},
  {(char*)"GetQueryString", PyvtkSelectionNode_GetQueryString, METH_VARARGS,
   (char*)"V.GetQueryString() -> string\nC++: char *GetQueryString()\n\nSet/Get the query expression string.\n"},
  {(char*)"EPSILON", PyvtkSelectionNode_EPSILON, METH_VARARGS | METH_STATIC,
   (char*)"V.EPSILON() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *EPSILON()\n\nFor location selection of points, if distance is greater than\nthis reject.\n"},
  {(char*)"CONTAINING_CELLS", PyvtkSelectionNode_CONTAINING_CELLS, METH_VARARGS | METH_STATIC,
   (char*)"V.CONTAINING_CELLS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTAINING_CELLS()\n\nThis flag tells the extraction filter, when FIELD_TYPE==POINT,\nthat it should also extract the cells that contain any of the\nextracted points.\n"},
  {(char*)"COMPONENT_NUMBER", PyvtkSelectionNode_COMPONENT_NUMBER, METH_VARARGS | METH_STATIC,
   (char*)"V.COMPONENT_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPONENT_NUMBER()\n\nWhen ContentType==THRESHOLDS  or ContentType==VALUES i.e.\nthreshold and value based selections, it is possible pick the\ncomponent number using this key. If none is specified, the 0th\ncomponent is used. If any number less than 0 is specified, then\nthe magnitude is used.\n"},
  {(char*)"INVERSE", PyvtkSelectionNode_INVERSE, METH_VARARGS | METH_STATIC,
   (char*)"V.INVERSE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INVERSE()\n\nThis flag tells the extraction filter to exclude the selection.\n"},
  {(char*)"PIXEL_COUNT", PyvtkSelectionNode_PIXEL_COUNT, METH_VARARGS | METH_STATIC,
   (char*)"V.PIXEL_COUNT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PIXEL_COUNT()\n\nA helper for visible cell selector, this is the number of pixels\ncovered by the actor whose cells are listed in the selection.\n"},
  {(char*)"SOURCE", PyvtkSelectionNode_SOURCE, METH_VARARGS | METH_STATIC,
   (char*)"V.SOURCE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SOURCE()\n\nPointer to the data or algorithm the selection belongs to.\n"},
  {(char*)"SOURCE_ID", PyvtkSelectionNode_SOURCE_ID, METH_VARARGS | METH_STATIC,
   (char*)"V.SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SOURCE_ID()\n\nID of the data or algorithm the selection belongs to. What ID\nmeans is application specific.\n"},
  {(char*)"PROP", PyvtkSelectionNode_PROP, METH_VARARGS | METH_STATIC,
   (char*)"V.PROP() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *PROP()\n\nPointer to the prop the selection belongs to.\n"},
  {(char*)"PROP_ID", PyvtkSelectionNode_PROP_ID, METH_VARARGS | METH_STATIC,
   (char*)"V.PROP_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROP_ID()\n\nID of the prop the selection belongs to. What ID means is\napplication specific.\n"},
  {(char*)"PROCESS_ID", PyvtkSelectionNode_PROCESS_ID, METH_VARARGS | METH_STATIC,
   (char*)"V.PROCESS_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROCESS_ID()\n\nProcess id the selection is on.\n"},
  {(char*)"COMPOSITE_INDEX", PyvtkSelectionNode_COMPOSITE_INDEX, METH_VARARGS | METH_STATIC,
   (char*)"V.COMPOSITE_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPOSITE_INDEX()\n\nUsed to identify a node in composite datasets.\n"},
  {(char*)"HIERARCHICAL_LEVEL", PyvtkSelectionNode_HIERARCHICAL_LEVEL, METH_VARARGS | METH_STATIC,
   (char*)"V.HIERARCHICAL_LEVEL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_LEVEL()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {(char*)"HIERARCHICAL_INDEX", PyvtkSelectionNode_HIERARCHICAL_INDEX, METH_VARARGS | METH_STATIC,
   (char*)"V.HIERARCHICAL_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_INDEX()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {(char*)"INDEXED_VERTICES", PyvtkSelectionNode_INDEXED_VERTICES, METH_VARARGS | METH_STATIC,
   (char*)"V.INDEXED_VERTICES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INDEXED_VERTICES()\n\nThis key is used when making visible vertex selection. It means\nthat the cell ID selection has data about which vertices for each\ncell are visible.\n"},
  {(char*)"UnionSelectionList", PyvtkSelectionNode_UnionSelectionList, METH_VARARGS,
   (char*)"V.UnionSelectionList(vtkSelectionNode)\nC++: void UnionSelectionList(vtkSelectionNode *other)\n\nMerges the selection list between self and the other. Assumes\nthat both has identical properties.\n"},
  {(char*)"SubtractSelectionList", PyvtkSelectionNode_SubtractSelectionList, METH_VARARGS,
   (char*)"V.SubtractSelectionList(vtkSelectionNode)\nC++: void SubtractSelectionList(vtkSelectionNode *other)\n\nSubtracts the items in the selection list, other, from this\nselection list. Assumes that both selections have identical\nproperties (i.e., test with EqualProperties before using).\n"},
  {(char*)"EqualProperties", PyvtkSelectionNode_EqualProperties, METH_VARARGS,
   (char*)"V.EqualProperties(vtkSelectionNode, bool) -> bool\nC++: bool EqualProperties(vtkSelectionNode *other,\n    bool fullcompare=true)\n\nCompares Properties of self and other to ensure that they are\nexactly same.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionNode_StaticNew()
{
  return vtkSelectionNode::New();
}

PyObject *PyVTKClass_vtkSelectionNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionNode_StaticNew,
    PyvtkSelectionNode_Methods,
    "vtkSelectionNode", modulename,
    NULL, NULL,
    PyvtkSelectionNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSelectionNode_SelectionContent_Type);
    PyvtkSelectionNode_SelectionContent_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSelectionNode_SelectionContent_Type;
    if (o && PyDict_SetItemString(d, (char *)"SelectionContent", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkSelectionNode_SelectionField_Type);
    PyvtkSelectionNode_SelectionField_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSelectionNode_SelectionField_Type;
    if (o && PyDict_SetItemString(d, (char *)"SelectionField", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 10; c++)
      {
      typedef vtkSelectionNode::SelectionContent cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[10] = {
          { "SELECTIONS", vtkSelectionNode::SELECTIONS },
          { "GLOBALIDS", vtkSelectionNode::GLOBALIDS },
          { "PEDIGREEIDS", vtkSelectionNode::PEDIGREEIDS },
          { "VALUES", vtkSelectionNode::VALUES },
          { "INDICES", vtkSelectionNode::INDICES },
          { "FRUSTUM", vtkSelectionNode::FRUSTUM },
          { "LOCATIONS", vtkSelectionNode::LOCATIONS },
          { "THRESHOLDS", vtkSelectionNode::THRESHOLDS },
          { "BLOCKS", vtkSelectionNode::BLOCKS },
          { "QUERY", vtkSelectionNode::QUERY },
        };

      o = PyvtkSelectionNode_SelectionContent_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkSelectionNode::SelectionField cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "CELL", vtkSelectionNode::CELL },
          { "POINT", vtkSelectionNode::POINT },
          { "FIELD", vtkSelectionNode::FIELD },
          { "VERTEX", vtkSelectionNode::VERTEX },
          { "EDGE", vtkSelectionNode::EDGE },
          { "ROW", vtkSelectionNode::ROW },
        };

      o = PyvtkSelectionNode_SelectionField_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSelectionNode_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionNode - A node in a selection tree. Used to store\nselection results.\n\n",
    "Superclass: vtkObject\n\n",
    "Caveats:\n\nNo SelectionList is created by default. It should be assigned.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

