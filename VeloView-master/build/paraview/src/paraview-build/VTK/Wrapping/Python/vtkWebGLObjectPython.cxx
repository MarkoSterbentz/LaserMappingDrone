// python wrapper for vtkWebGLObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkWebGLObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebGLObject(PyObject *, const char *); }

#ifndef DECLARED_PyWebGLObjectTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyWebGLObjectTypes_Type;
#define DECLARED_PyWebGLObjectTypes_Type
#endif
#ifndef DECLARED_PyWebGLObjectTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyWebGLObjectTypes_Type;
#define DECLARED_PyWebGLObjectTypes_Type
#endif

PyTypeObject PyWebGLObjectTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"WebGLObjectTypes", // tp_name
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

PyObject *PyWebGLObjectTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyWebGLObjectTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebGLObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebGLObject_Doc();


static PyObject *
PyvtkWebGLObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebGLObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebGLObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLObject::NewInstance());

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
PyvtkWebGLObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebGLObject *tempr = vtkWebGLObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBinaryData();
      }
    else
      {
      op->vtkWebGLObject::GenerateBinaryData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetBinaryData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLObject::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWebGLObject_GetBinaryData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  vtkUnsignedCharArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->GetBinaryData(temp0, temp1);
      }
    else
      {
      op->vtkWebGLObject::GetBinaryData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWebGLObject_GetBinaryData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkWebGLObject_GetBinaryData_s1(self, args);
    case 2:
      return PyvtkWebGLObject_GetBinaryData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBinaryData");
  return NULL;
}



static PyObject *
PyvtkWebGLObject_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLObject::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLObject::GetNumberOfParts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayer(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetLayer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetRendererId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRendererId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRendererId(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetRendererId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetWireframeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWireframeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWireframeMode(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetWireframeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetTransformationMatrix(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetTransformationMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetIsWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsWidget(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetIsWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetHasTransparency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasTransparency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHasTransparency(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetHasTransparency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetInteractAtServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractAtServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractAtServer(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetInteractAtServer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  WebGLObjectTypes temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyWebGLObjectTypes_Type))
    {
    if (ap.IsBound())
      {
      op->SetType(temp0);
      }
    else
      {
      op->vtkWebGLObject::SetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_isWireframeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isWireframeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->isWireframeMode() :
      op->vtkWebGLObject::isWireframeMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_isVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->isVisible() :
      op->vtkWebGLObject::isVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_HasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasChanged() :
      op->vtkWebGLObject::HasChanged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_isWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->isWidget() :
      op->vtkWebGLObject::isWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_HasTransparency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTransparency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasTransparency() :
      op->vtkWebGLObject::HasTransparency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_InteractAtServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractAtServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->InteractAtServer() :
      op->vtkWebGLObject::InteractAtServer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetMD5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMD5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetMD5() :
      op->vtkWebGLObject::GetMD5());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkWebGLObject::GetId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetRendererId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRendererId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long tempr = (ap.IsBound() ?
      op->GetRendererId() :
      op->vtkWebGLObject::GetRendererId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLayer() :
      op->vtkWebGLObject::GetLayer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWebGLObject_Methods[] = {
  {(char*)"GetClassName", PyvtkWebGLObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebGLObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebGLObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebGLObject\nC++: vtkWebGLObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebGLObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebGLObject\nC++: vtkWebGLObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GenerateBinaryData", PyvtkWebGLObject_GenerateBinaryData, METH_VARARGS,
   (char*)"V.GenerateBinaryData()\nC++: virtual void GenerateBinaryData()\n\n"},
  {(char*)"GetBinaryData", PyvtkWebGLObject_GetBinaryData, METH_VARARGS,
   (char*)"V.GetBinaryData(int) -> (int, ...)\nC++: virtual unsigned char *GetBinaryData(int part)\nV.GetBinaryData(int, vtkUnsignedCharArray)\nC++: void GetBinaryData(int part, vtkUnsignedCharArray *buffer)\n\n"},
  {(char*)"GetBinarySize", PyvtkWebGLObject_GetBinarySize, METH_VARARGS,
   (char*)"V.GetBinarySize(int) -> int\nC++: virtual int GetBinarySize(int part)\n\n"},
  {(char*)"GetNumberOfParts", PyvtkWebGLObject_GetNumberOfParts, METH_VARARGS,
   (char*)"V.GetNumberOfParts() -> int\nC++: virtual int GetNumberOfParts()\n\n"},
  {(char*)"SetLayer", PyvtkWebGLObject_SetLayer, METH_VARARGS,
   (char*)"V.SetLayer(int)\nC++: void SetLayer(int l)\n\n"},
  {(char*)"SetRendererId", PyvtkWebGLObject_SetRendererId, METH_VARARGS,
   (char*)"V.SetRendererId(int)\nC++: void SetRendererId(long int i)\n\n"},
  {(char*)"SetId", PyvtkWebGLObject_SetId, METH_VARARGS,
   (char*)"V.SetId(string)\nC++: void SetId(std::string i)\n\n"},
  {(char*)"SetWireframeMode", PyvtkWebGLObject_SetWireframeMode, METH_VARARGS,
   (char*)"V.SetWireframeMode(bool)\nC++: void SetWireframeMode(bool wireframe)\n\n"},
  {(char*)"SetVisibility", PyvtkWebGLObject_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: void SetVisibility(bool vis)\n\n"},
  {(char*)"SetTransformationMatrix", PyvtkWebGLObject_SetTransformationMatrix, METH_VARARGS,
   (char*)"V.SetTransformationMatrix(vtkMatrix4x4)\nC++: void SetTransformationMatrix(vtkMatrix4x4 *m)\n\n"},
  {(char*)"SetIsWidget", PyvtkWebGLObject_SetIsWidget, METH_VARARGS,
   (char*)"V.SetIsWidget(bool)\nC++: void SetIsWidget(bool w)\n\n"},
  {(char*)"SetHasTransparency", PyvtkWebGLObject_SetHasTransparency, METH_VARARGS,
   (char*)"V.SetHasTransparency(bool)\nC++: void SetHasTransparency(bool t)\n\n"},
  {(char*)"SetInteractAtServer", PyvtkWebGLObject_SetInteractAtServer, METH_VARARGS,
   (char*)"V.SetInteractAtServer(bool)\nC++: void SetInteractAtServer(bool i)\n\n"},
  {(char*)"SetType", PyvtkWebGLObject_SetType, METH_VARARGS,
   (char*)"V.SetType()\nC++: void SetType(WebGLObjectTypes t)\n\n"},
  {(char*)"isWireframeMode", PyvtkWebGLObject_isWireframeMode, METH_VARARGS,
   (char*)"V.isWireframeMode() -> bool\nC++: bool isWireframeMode()\n\n"},
  {(char*)"isVisible", PyvtkWebGLObject_isVisible, METH_VARARGS,
   (char*)"V.isVisible() -> bool\nC++: bool isVisible()\n\n"},
  {(char*)"HasChanged", PyvtkWebGLObject_HasChanged, METH_VARARGS,
   (char*)"V.HasChanged() -> bool\nC++: bool HasChanged()\n\n"},
  {(char*)"isWidget", PyvtkWebGLObject_isWidget, METH_VARARGS,
   (char*)"V.isWidget() -> bool\nC++: bool isWidget()\n\n"},
  {(char*)"HasTransparency", PyvtkWebGLObject_HasTransparency, METH_VARARGS,
   (char*)"V.HasTransparency() -> bool\nC++: bool HasTransparency()\n\n"},
  {(char*)"InteractAtServer", PyvtkWebGLObject_InteractAtServer, METH_VARARGS,
   (char*)"V.InteractAtServer() -> bool\nC++: bool InteractAtServer()\n\n"},
  {(char*)"GetMD5", PyvtkWebGLObject_GetMD5, METH_VARARGS,
   (char*)"V.GetMD5() -> string\nC++: std::string GetMD5()\n\n"},
  {(char*)"GetId", PyvtkWebGLObject_GetId, METH_VARARGS,
   (char*)"V.GetId() -> string\nC++: std::string GetId()\n\n"},
  {(char*)"GetRendererId", PyvtkWebGLObject_GetRendererId, METH_VARARGS,
   (char*)"V.GetRendererId() -> int\nC++: long int GetRendererId()\n\n"},
  {(char*)"GetLayer", PyvtkWebGLObject_GetLayer, METH_VARARGS,
   (char*)"V.GetLayer() -> int\nC++: int GetLayer()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebGLObject_StaticNew()
{
  return vtkWebGLObject::New();
}

PyObject *PyVTKClass_vtkWebGLObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebGLObject_StaticNew,
    PyvtkWebGLObject_Methods,
    "vtkWebGLObject", modulename,
    NULL, NULL,
    PyvtkWebGLObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWebGLObject_Doc()
{
  static const char *docstring[] = {
    "vtkWebGLObject\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWebGLObject represent and manipulate an WebGL object and its data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebGLObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebGLObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebGLObject", o) != 0)
    {
    Py_DECREF(o);
    }

  PyType_Ready(&PyWebGLObjectTypes_Type);
  PyWebGLObjectTypes_Type.tp_new = NULL;

  o = (PyObject *)&PyWebGLObjectTypes_Type;
  if (o && PyDict_SetItemString(dict, (char *)"WebGLObjectTypes", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; WebGLObjectTypes value; }
      constants[3] = {
        { "wPOINTS", wPOINTS },
        { "wLINES", wLINES },
        { "wTRIANGLES", wTRIANGLES },
      };

    o = PyWebGLObjectTypes_FromEnum(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

