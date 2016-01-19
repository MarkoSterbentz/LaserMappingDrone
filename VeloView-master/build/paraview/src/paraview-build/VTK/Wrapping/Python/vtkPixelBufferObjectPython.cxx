// python wrapper for vtkPixelBufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPixelBufferObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPixelBufferObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPixelBufferObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPixelBufferObject_Doc();

#ifndef DECLARED_PyvtkPixelBufferObject_BufferType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPixelBufferObject_BufferType_Type;
#define DECLARED_PyvtkPixelBufferObject_BufferType_Type
#endif

PyTypeObject PyvtkPixelBufferObject_BufferType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"BufferType", // tp_name
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

PyObject *PyvtkPixelBufferObject_BufferType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPixelBufferObject_BufferType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPixelBufferObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPixelBufferObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPixelBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPixelBufferObject::NewInstance());

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
PyvtkPixelBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPixelBufferObject *tempr = vtkPixelBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkPixelBufferObject::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUsage() :
      op->vtkPixelBufferObject::GetUsage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUsage(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetUsage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->Upload1D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Upload1D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[2];
  unsigned int save2[2];
  const int size2 = 2;
  int temp3;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  const int size4 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Upload2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Upload2D(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[3];
  unsigned int save2[3];
  const int size2 = 3;
  int temp3;
  vtkIdType temp4[3];
  vtkIdType save4[3];
  const int size4 = 3;
  int temp5;
  int *temp6 = NULL;
  int *save6 = NULL;
  int small6[8];
  int size6 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new int[2*size6];
      }
    save6 = &temp6[size6];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp6, save6, size6);

    bool tempr = (ap.IsBound() ?
      op->Upload3D(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPixelBufferObject::Upload3D(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPixelBufferObject::GetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetType(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkPixelBufferObject::GetComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponents(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPixelBufferObject::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkPixelBufferObject::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPixelBufferObject_SetSize_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkPixelBufferObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkPixelBufferObject::GetHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->Download1D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download1D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[2];
  unsigned int save2[2];
  const int size2 = 2;
  int temp3;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  const int size4 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Download2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download2D(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[3];
  unsigned int save2[3];
  const int size2 = 3;
  int temp3;
  vtkIdType temp4[3];
  vtkIdType save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Download3D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download3D(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BindToPackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::BindToPackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToUnPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToUnPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BindToUnPackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::BindToUnPackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnBind();
      }
    else
      {
      op->vtkPixelBufferObject::UnBind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer() :
      op->vtkPixelBufferObject::MapPackedBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer(temp0, temp1, temp2) :
      op->vtkPixelBufferObject::MapPackedBuffer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer(temp0) :
      op->vtkPixelBufferObject::MapPackedBuffer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPixelBufferObject_MapPackedBuffer_s1(self, args);
    case 3:
      return PyvtkPixelBufferObject_MapPackedBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapPackedBuffer_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapPackedBuffer");
  return NULL;
}



static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer() :
      op->vtkPixelBufferObject::MapUnpackedBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer(temp0, temp1, temp2) :
      op->vtkPixelBufferObject::MapUnpackedBuffer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer(temp0) :
      op->vtkPixelBufferObject::MapUnpackedBuffer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s1(self, args);
    case 3:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapUnpackedBuffer");
  return NULL;
}



static PyObject *
PyvtkPixelBufferObject_UnmapUnpackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnmapUnpackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::UnmapUnpackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_UnmapPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnmapPackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::UnmapPackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkPixelBufferObject_BufferType_Type))
    {
    if (ap.IsBound())
      {
      op->Bind(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::Bind(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_MapBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  typedef vtkPixelBufferObject::BufferType temp3_type;
  temp3_type temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetEnumValue(temp3, &PyvtkPixelBufferObject_BufferType_Type))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0, temp1, temp2, temp3) :
      op->vtkPixelBufferObject::MapBuffer(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  typedef vtkPixelBufferObject::BufferType temp1_type;
  temp1_type temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, &PyvtkPixelBufferObject_BufferType_Type))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0, temp1) :
      op->vtkPixelBufferObject::MapBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkPixelBufferObject_BufferType_Type))
    {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0) :
      op->vtkPixelBufferObject::MapBuffer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPixelBufferObject_MapBuffer_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_MapBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapBuffer_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapBuffer");
  return NULL;
}



static PyObject *
PyvtkPixelBufferObject_UnmapBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkPixelBufferObject_BufferType_Type))
    {
    if (ap.IsBound())
      {
      op->UnmapBuffer(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::UnmapBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  typedef vtkPixelBufferObject::BufferType temp3_type;
  temp3_type temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetEnumValue(temp3, &PyvtkPixelBufferObject_BufferType_Type))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPixelBufferObject::Allocate(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  typedef vtkPixelBufferObject::BufferType temp1_type;
  temp1_type temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, &PyvtkPixelBufferObject_BufferType_Type))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkPixelBufferObject::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_Allocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPixelBufferObject_Allocate_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_Allocate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return NULL;
}



static PyObject *
PyvtkPixelBufferObject_ReleaseMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseMemory();
      }
    else
      {
      op->vtkPixelBufferObject::ReleaseMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkPixelBufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPixelBufferObject_Methods[] = {
  {(char*)"GetClassName", PyvtkPixelBufferObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPixelBufferObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPixelBufferObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPixelBufferObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkPixelBufferObject_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkPixelBufferObject_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetUsage", PyvtkPixelBufferObject_GetUsage, METH_VARARGS,
   (char*)"V.GetUsage() -> int\nC++: int GetUsage()\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specificed once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {(char*)"SetUsage", PyvtkPixelBufferObject_SetUsage, METH_VARARGS,
   (char*)"V.SetUsage(int)\nC++: void SetUsage(int a)\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specificed once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {(char*)"Upload1D", PyvtkPixelBufferObject_Upload1D, METH_VARARGS,
   (char*)"V.Upload1D(int, , int, int, int) -> bool\nC++: bool Upload1D(int type, void *data, unsigned int numtuples,\n    int comps, vtkIdType increment)\n\nUpload data to PBO mapped. The input data can be freed after this\ncall. The data ptr is treated as an 1D array with the given\nnumber of tuples and given number of components in each tuple to\nbe copied to the PBO mapped. increment is the offset added after\nthe last component in each tuple is transferred. Look at the\ndocumentation for ContinuousIncrements in vtkImageData for\ndetails about how increments are specified.\n"},
  {(char*)"Upload2D", PyvtkPixelBufferObject_Upload2D, METH_VARARGS,
   (char*)"V.Upload2D(int, , [int, int], int, [int, int]) -> bool\nC++: bool Upload2D(int type, void *data, unsigned int dims[2],\n    int comps, vtkIdType increments[2])\n\nUpdate data to PBO mapped sourcing it from a 2D array. The input\ndata can be freed after this call. The data ptr is treated as a\n2D array with increments indicating how to iterate over the data.\nLook at the documentation for ContinuousIncrements in\nvtkImageData for details about how increments are specified.\n"},
  {(char*)"Upload3D", PyvtkPixelBufferObject_Upload3D, METH_VARARGS,
   (char*)"V.Upload3D(int, , [int, int, int], int, [int, int, int], int,\n    [int, ...]) -> bool\nC++: bool Upload3D(int type, void *data, unsigned int dims[3],\n    int comps, vtkIdType increments[3], int components,\n    int *componentList)\n\nUpdate data to PBO mapped sourcing it from a 3D array. The input\ndata can be freed after this call. The data ptr is treated as a\n3D array with increments indicating how to iterate over the data.\nLook at the documentation for ContinuousIncrements in\nvtkImageData for details about how increments are specified.\n"},
  {(char*)"GetType", PyvtkPixelBufferObject_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: int GetType()\n\nGet the type with which the data is loaded into the PBO mapped.\neg. VTK_FLOAT for float32, VTK_CHAR for byte, VTK_UNSIGNED_CHAR\nfor unsigned byte etc.\n"},
  {(char*)"SetType", PyvtkPixelBufferObject_SetType, METH_VARARGS,
   (char*)"V.SetType(int)\nC++: void SetType(int a)\n\nGet the type with which the data is loaded into the PBO mapped.\neg. VTK_FLOAT for float32, VTK_CHAR for byte, VTK_UNSIGNED_CHAR\nfor unsigned byte etc.\n"},
  {(char*)"GetComponents", PyvtkPixelBufferObject_GetComponents, METH_VARARGS,
   (char*)"V.GetComponents() -> int\nC++: int GetComponents()\n\nGet the number of components used to initialize the buffer.\n"},
  {(char*)"SetComponents", PyvtkPixelBufferObject_SetComponents, METH_VARARGS,
   (char*)"V.SetComponents(int)\nC++: void SetComponents(int a)\n\nGet the number of components used to initialize the buffer.\n"},
  {(char*)"GetSize", PyvtkPixelBufferObject_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: unsigned int GetSize()\n\nGet the size of the data loaded into the PBO mapped memory. Size\nis in the number of elements of the uploaded Type.\n"},
  {(char*)"SetSize", PyvtkPixelBufferObject_SetSize, METH_VARARGS,
   (char*)"V.SetSize(int)\nC++: void SetSize(unsigned int a)\nV.SetSize(int, int)\nC++: void SetSize(unsigned int nTups, int nComps)\n\nGet the size of the data loaded into the PBO mapped memory. Size\nis in the number of elements of the uploaded Type.\n"},
  {(char*)"GetHandle", PyvtkPixelBufferObject_GetHandle, METH_VARARGS,
   (char*)"V.GetHandle() -> int\nC++: unsigned int GetHandle()\n\nGet the openGL buffer handle.\n"},
  {(char*)"Download1D", PyvtkPixelBufferObject_Download1D, METH_VARARGS,
   (char*)"V.Download1D(int, , int, int, int) -> bool\nC++: bool Download1D(int type, void *data, unsigned int dim,\n    int numcomps, vtkIdType increment)\n\nDownload data from pixel buffer to the 1D array. The length of\nthe array must be equal to the size of the data in the memory.\n"},
  {(char*)"Download2D", PyvtkPixelBufferObject_Download2D, METH_VARARGS,
   (char*)"V.Download2D(int, , [int, int], int, [int, int]) -> bool\nC++: bool Download2D(int type, void *data, unsigned int dims[2],\n    int numcomps, vtkIdType increments[2])\n\nDownload data from pixel buffer to the 2D array. (lengthx *\nlengthy) must be equal to the size of the data in the memory.\n"},
  {(char*)"Download3D", PyvtkPixelBufferObject_Download3D, METH_VARARGS,
   (char*)"V.Download3D(int, , [int, int, int], int, [int, int, int]) -> bool\nC++: bool Download3D(int type, void *data, unsigned int dims[3],\n    int numcomps, vtkIdType increments[3])\n\nDownload data from pixel buffer to the 3D array. (lengthx *\nlengthy * lengthz) must be equal to the size of the data in the\nmemory.\n"},
  {(char*)"BindToPackedBuffer", PyvtkPixelBufferObject_BindToPackedBuffer, METH_VARARGS,
   (char*)"V.BindToPackedBuffer()\nC++: void BindToPackedBuffer()\n\nConvenience methods for binding.\n"},
  {(char*)"BindToUnPackedBuffer", PyvtkPixelBufferObject_BindToUnPackedBuffer, METH_VARARGS,
   (char*)"V.BindToUnPackedBuffer()\nC++: void BindToUnPackedBuffer()\n\n"},
  {(char*)"UnBind", PyvtkPixelBufferObject_UnBind, METH_VARARGS,
   (char*)"V.UnBind()\nC++: void UnBind()\n\nInactivate the buffer.\n"},
  {(char*)"MapPackedBuffer", PyvtkPixelBufferObject_MapPackedBuffer, METH_VARARGS,
   (char*)"V.MapPackedBuffer() ->\nC++: void *MapPackedBuffer()\nV.MapPackedBuffer(int, int, int) ->\nC++: void *MapPackedBuffer(int type, unsigned int numtuples,\n    int comps)\nV.MapPackedBuffer(int) ->\nC++: void *MapPackedBuffer(unsigned int numbytes)\n\nConvenience api for mapping buffers to app address space. See\nalso MapBuffer.\n"},
  {(char*)"MapUnpackedBuffer", PyvtkPixelBufferObject_MapUnpackedBuffer, METH_VARARGS,
   (char*)"V.MapUnpackedBuffer() ->\nC++: void *MapUnpackedBuffer()\nV.MapUnpackedBuffer(int, int, int) ->\nC++: void *MapUnpackedBuffer(int type, unsigned int numtuples,\n    int comps)\nV.MapUnpackedBuffer(int) ->\nC++: void *MapUnpackedBuffer(unsigned int numbytes)\n\n"},
  {(char*)"UnmapUnpackedBuffer", PyvtkPixelBufferObject_UnmapUnpackedBuffer, METH_VARARGS,
   (char*)"V.UnmapUnpackedBuffer()\nC++: void UnmapUnpackedBuffer()\n\nConvenience api for unmapping buffers from app address space. See\nalso UnmapBuffer.\n"},
  {(char*)"UnmapPackedBuffer", PyvtkPixelBufferObject_UnmapPackedBuffer, METH_VARARGS,
   (char*)"V.UnmapPackedBuffer()\nC++: void UnmapPackedBuffer()\n\n"},
  {(char*)"Bind", PyvtkPixelBufferObject_Bind, METH_VARARGS,
   (char*)"V.Bind()\nC++: void Bind(BufferType buffer)\n\nMake the buffer active.\n"},
  {(char*)"MapBuffer", PyvtkPixelBufferObject_MapBuffer, METH_VARARGS,
   (char*)"V.MapBuffer(int, int, int, ) ->\nC++: void *MapBuffer(int type, unsigned int numtuples, int comps,\n    BufferType mode)\nV.MapBuffer(int, ) ->\nC++: void *MapBuffer(unsigned int numbytes, BufferType mode)\nV.MapBuffer() ->\nC++: void *MapBuffer(BufferType mode)\n\nMap the buffer to our addresspace. Returns a pointer to the\nmapped memory for read/write access. If type, tuples and\ncomponents are specified new buffer data will be allocated, else\nthe current allocation is mapped. When finished call UnmapBuffer.\n"},
  {(char*)"UnmapBuffer", PyvtkPixelBufferObject_UnmapBuffer, METH_VARARGS,
   (char*)"V.UnmapBuffer()\nC++: void UnmapBuffer(BufferType mode)\n\nUn-map the buffer from our address space, OpenGL can then\nuse/reclaim the buffer contents.\n"},
  {(char*)"Allocate", PyvtkPixelBufferObject_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int, int, )\nC++: void Allocate(int vtkType, unsigned int numtuples, int comps,\n     BufferType mode)\nV.Allocate(int, )\nC++: void Allocate(unsigned int nbytes, BufferType mode)\n\nAllocate PACKED/UNPACKED memory to hold numTuples*numComponents\nof vtkType.\n"},
  {(char*)"ReleaseMemory", PyvtkPixelBufferObject_ReleaseMemory, METH_VARARGS,
   (char*)"V.ReleaseMemory()\nC++: void ReleaseMemory()\n\nRelease the memory allocated without destroying the PBO handle.\n"},
  {(char*)"IsSupported", PyvtkPixelBufferObject_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the conetxt is set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPixelBufferObject_StaticNew()
{
  return vtkPixelBufferObject::New();
}

PyObject *PyVTKClass_vtkPixelBufferObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPixelBufferObject_StaticNew,
    PyvtkPixelBufferObject_Methods,
    "vtkPixelBufferObject", modulename,
    NULL, NULL,
    PyvtkPixelBufferObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPixelBufferObject_BufferType_Type);
    PyvtkPixelBufferObject_BufferType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPixelBufferObject_BufferType_Type;
    if (o && PyDict_SetItemString(d, (char *)"BufferType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 10; c++)
      {
      static const struct { const char *name; int value; }
        constants[10] = {
          { "StreamDraw", vtkPixelBufferObject::StreamDraw },
          { "StreamRead", vtkPixelBufferObject::StreamRead },
          { "StreamCopy", vtkPixelBufferObject::StreamCopy },
          { "StaticDraw", vtkPixelBufferObject::StaticDraw },
          { "StaticRead", vtkPixelBufferObject::StaticRead },
          { "StaticCopy", vtkPixelBufferObject::StaticCopy },
          { "DynamicDraw", vtkPixelBufferObject::DynamicDraw },
          { "DynamicRead", vtkPixelBufferObject::DynamicRead },
          { "DynamicCopy", vtkPixelBufferObject::DynamicCopy },
          { "NumberOfUsages", vtkPixelBufferObject::NumberOfUsages },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkPixelBufferObject::BufferType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "UNPACKED_BUFFER", vtkPixelBufferObject::UNPACKED_BUFFER },
          { "PACKED_BUFFER", vtkPixelBufferObject::PACKED_BUFFER },
        };

      o = PyvtkPixelBufferObject_BufferType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPixelBufferObject_Doc()
{
  static const char *docstring[] = {
    "vtkPixelBufferObject - abstracts an OpenGL pixel buffer object.\n\n",
    "Superclass: vtkObject\n\n",
    "Provides low-level access to PBO mapped memory. Used to transfer raw\ndata to/from PBO mapped memory and the application. Once data is\ntransfered to the PBO it can then be transfered to the GPU (eg\ntexture memory). Data may be uploaded from the application into a\npixel buffer or downloaded from the pixel bufer to the application.\nThe vtkTextureObject is used to transfer data from/to the PBO to/from",
    "\ntexture memory on the GPU.\n\nCaveats:\n\nSince most PBO mappeds don't support double format all double data is\nconverted to float and then uploaded.\n\nSee Also:\n\nOpenGL Pixel Buffer Object Extension Spec (ARB_pixel_buffer_object):\nhttp://www.opengl.org/registry/specs/ARB/pixel_buffer_object.txt\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPixelBufferObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPixelBufferObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPixelBufferObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

