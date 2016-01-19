// python wrapper for vtkTextureObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextureObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextureObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextureObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTextureObject_Doc();


static PyObject *
PyvtkTextureObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextureObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureObject::NewInstance());

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
PyvtkTextureObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextureObject *tempr = vtkTextureObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

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
      op->vtkTextureObject::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkTextureObject::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkTextureObject::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkTextureObject::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkTextureObject::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkTextureObject::GetComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTuples() :
      op->vtkTextureObject::GetTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetNumberOfDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDimensions() :
      op->vtkTextureObject::GetNumberOfDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkTextureObject::GetTarget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkTextureObject::GetHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Bind();
      }
    else
      {
      op->vtkTextureObject::Bind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnBind();
      }
    else
      {
      op->vtkTextureObject::UnBind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Activate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Activate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Activate(temp0);
      }
    else
      {
      op->vtkTextureObject::Activate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Deactivate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deactivate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Deactivate(temp0);
      }
    else
      {
      op->vtkTextureObject::Deactivate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_IsBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsBound() :
      op->vtkTextureObject::IsBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SendParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SendParameters();
      }
    else
      {
      op->vtkTextureObject::SendParameters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetAutoParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoParameters(temp0);
      }
    else
      {
      op->vtkTextureObject::SetAutoParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetAutoParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoParameters() :
      op->vtkTextureObject::GetAutoParameters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Create1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  vtkPixelBufferObject *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPixelBufferObject") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Create1D(temp0, temp1, temp2) :
      op->vtkTextureObject::Create1D(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Create2D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  vtkPixelBufferObject *temp3 = NULL;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPixelBufferObject") &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->Create2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Create2D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_Create2D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->Create2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Create2D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureObject_Create2D_Methods[] = {
  {NULL, PyvtkTextureObject_Create2D_s1, METH_VARARGS,
   (char*)"@IIiOO *vtkPixelBufferObject bool"},
  {NULL, PyvtkTextureObject_Create2D_s2, METH_VARARGS,
   (char*)"@IIiiO bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextureObject_Create2D(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureObject_Create2D_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Create2D");
  return NULL;
}



static PyObject *
PyvtkTextureObject_CreateDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  vtkPixelBufferObject *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPixelBufferObject"))
    {
    bool tempr = (ap.IsBound() ?
      op->CreateDepth(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::CreateDepth(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_CreateDepthFromRaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepthFromRaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  void  *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->CreateDepthFromRaw(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::CreateDepthFromRaw(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_AllocateDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->AllocateDepth(temp0, temp1, temp2) :
      op->vtkTextureObject::AllocateDepth(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Allocate1D(temp0, temp1, temp2) :
      op->vtkTextureObject::Allocate1D(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    bool tempr = (ap.IsBound() ?
      op->Allocate2D(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::Allocate2D(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    bool tempr = (ap.IsBound() ?
      op->Allocate3D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Allocate3D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_Create3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  vtkPixelBufferObject *temp4 = NULL;
  bool temp5 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkPixelBufferObject") &&
      ap.GetValue(temp5))
    {
    bool tempr = (ap.IsBound() ?
      op->Create3D(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextureObject::Create3D(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_Create3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  bool temp5 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    bool tempr = (ap.IsBound() ?
      op->Create3D(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextureObject::Create3D(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureObject_Create3D_Methods[] = {
  {NULL, PyvtkTextureObject_Create3D_s1, METH_VARARGS,
   (char*)"@IIIiOO *vtkPixelBufferObject bool"},
  {NULL, PyvtkTextureObject_Create3D_s2, METH_VARARGS,
   (char*)"@IIIiiO bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextureObject_Create3D(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureObject_Create3D_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Create3D");
  return NULL;
}



static PyObject *
PyvtkTextureObject_Download(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->Download() :
      op->vtkTextureObject::Download());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkTextureObject::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInternalFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetInternalFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequireDepthBufferFloat(temp0);
      }
    else
      {
      op->vtkTextureObject::SetRequireDepthBufferFloat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequireDepthBufferFloat() :
      op->vtkTextureObject::GetRequireDepthBufferFloat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsDepthBufferFloat() :
      op->vtkTextureObject::GetSupportsDepthBufferFloat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequireTextureFloat(temp0);
      }
    else
      {
      op->vtkTextureObject::SetRequireTextureFloat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequireTextureFloat() :
      op->vtkTextureObject::GetRequireTextureFloat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsTextureFloat() :
      op->vtkTextureObject::GetSupportsTextureFloat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequireTextureInteger(temp0);
      }
    else
      {
      op->vtkTextureObject::SetRequireTextureInteger(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequireTextureInteger() :
      op->vtkTextureObject::GetRequireTextureInteger());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsTextureInteger() :
      op->vtkTextureObject::GetSupportsTextureInteger());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWrapS() :
      op->vtkTextureObject::GetWrapS());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWrapS(temp0);
      }
    else
      {
      op->vtkTextureObject::SetWrapS(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWrapT() :
      op->vtkTextureObject::GetWrapT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWrapT(temp0);
      }
    else
      {
      op->vtkTextureObject::SetWrapT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWrapR() :
      op->vtkTextureObject::GetWrapR());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWrapR(temp0);
      }
    else
      {
      op->vtkTextureObject::SetWrapR(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMinificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinificationFilter() :
      op->vtkTextureObject::GetMinificationFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMinificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinificationFilter(temp0);
      }
    else
      {
      op->vtkTextureObject::SetMinificationFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMagnificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationFilter() :
      op->vtkTextureObject::GetMagnificationFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMagnificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnificationFilter(temp0);
      }
    else
      {
      op->vtkTextureObject::SetMagnificationFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetLinearMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinearMagnification(temp0);
      }
    else
      {
      op->vtkTextureObject::SetLinearMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetLinearMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLinearMagnification() :
      op->vtkTextureObject::GetLinearMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetBorderColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBorderColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkTextureObject::SetBorderColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_SetBorderColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBorderColor(temp0);
      }
    else
      {
      op->vtkTextureObject::SetBorderColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_SetBorderColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkTextureObject_SetBorderColor_s1(self, args);
    case 1:
      return PyvtkTextureObject_SetBorderColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBorderColor");
  return NULL;
}



static PyObject *
PyvtkTextureObject_GetBorderColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBorderColor() :
      op->vtkTextureObject::GetBorderColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriority(temp0);
      }
    else
      {
      op->vtkTextureObject::SetPriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPriority() :
      op->vtkTextureObject::GetPriority());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMinLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinLOD(temp0);
      }
    else
      {
      op->vtkTextureObject::SetMinLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMinLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinLOD() :
      op->vtkTextureObject::GetMinLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMaxLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLOD(temp0);
      }
    else
      {
      op->vtkTextureObject::SetMaxLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaxLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxLOD() :
      op->vtkTextureObject::GetMaxLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetBaseLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseLevel(temp0);
      }
    else
      {
      op->vtkTextureObject::SetBaseLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetBaseLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBaseLevel() :
      op->vtkTextureObject::GetBaseLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkTextureObject::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkTextureObject::GetMaxLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepthTextureCompare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTextureCompare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDepthTextureCompare() :
      op->vtkTextureObject::GetDepthTextureCompare());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDepthTextureCompare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthTextureCompare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthTextureCompare(temp0);
      }
    else
      {
      op->vtkTextureObject::SetDepthTextureCompare(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepthTextureCompareFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTextureCompareFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthTextureCompareFunction() :
      op->vtkTextureObject::GetDepthTextureCompareFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDepthTextureCompareFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthTextureCompareFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthTextureCompareFunction(temp0);
      }
    else
      {
      op->vtkTextureObject::SetDepthTextureCompareFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepthTextureMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTextureMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthTextureMode() :
      op->vtkTextureObject::GetDepthTextureMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDepthTextureMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthTextureMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthTextureMode(temp0);
      }
    else
      {
      op->vtkTextureObject::SetDepthTextureMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_GetGenerateMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateMipmap() :
      op->vtkTextureObject::GetGenerateMipmap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_SetGenerateMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateMipmap(temp0);
      }
    else
      {
      op->vtkTextureObject::SetGenerateMipmap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_IsSupported_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    bool tempr = vtkTextureObject::IsSupported(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_IsSupported_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkTextureObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextureObject_IsSupported(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkTextureObject_IsSupported_s1(self, args);
    case 1:
      return PyvtkTextureObject_IsSupported_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsSupported");
  return NULL;
}



static PyObject *
PyvtkTextureObject_CopyToFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkTextureObject::CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureObject_CopyFromFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->CopyFromFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTextureObject::CopyFromFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureObject_Methods[] = {
  {(char*)"GetClassName", PyvtkTextureObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextureObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextureObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextureObject\nC++: vtkTextureObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextureObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextureObject\nC++: vtkTextureObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkTextureObject_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *)\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops. SetContext() may raise\nan error is the OpenGL context does not support the required\nOpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkTextureObject_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops. SetContext() may raise\nan error is the OpenGL context does not support the required\nOpenGL extensions.\n"},
  {(char*)"GetWidth", PyvtkTextureObject_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> int\nC++: unsigned int GetWidth()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {(char*)"GetHeight", PyvtkTextureObject_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> int\nC++: unsigned int GetHeight()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {(char*)"GetDepth", PyvtkTextureObject_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> int\nC++: unsigned int GetDepth()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {(char*)"GetComponents", PyvtkTextureObject_GetComponents, METH_VARARGS,
   (char*)"V.GetComponents() -> int\nC++: int GetComponents()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {(char*)"GetTuples", PyvtkTextureObject_GetTuples, METH_VARARGS,
   (char*)"V.GetTuples() -> int\nC++: unsigned int GetTuples()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {(char*)"GetNumberOfDimensions", PyvtkTextureObject_GetNumberOfDimensions, METH_VARARGS,
   (char*)"V.GetNumberOfDimensions() -> int\nC++: int GetNumberOfDimensions()\n\n"},
  {(char*)"GetTarget", PyvtkTextureObject_GetTarget, METH_VARARGS,
   (char*)"V.GetTarget() -> int\nC++: unsigned int GetTarget()\n\nReturns OpenGL texture target to which the texture is/can be\nbound.\n"},
  {(char*)"GetHandle", PyvtkTextureObject_GetHandle, METH_VARARGS,
   (char*)"V.GetHandle() -> int\nC++: unsigned int GetHandle()\n\nReturns the OpenGL handle.\n"},
  {(char*)"Bind", PyvtkTextureObject_Bind, METH_VARARGS,
   (char*)"V.Bind()\nC++: void Bind()\n\nActivate the texture. The texture must have been created using\nCreate(). A side affect is that tex paramteres are sent.\nRenderWindow must be set before calling this.\n"},
  {(char*)"UnBind", PyvtkTextureObject_UnBind, METH_VARARGS,
   (char*)"V.UnBind()\nC++: void UnBind()\n\nActivate the texture. The texture must have been created using\nCreate(). A side affect is that tex paramteres are sent.\nRenderWindow must be set before calling this.\n"},
  {(char*)"Activate", PyvtkTextureObject_Activate, METH_VARARGS,
   (char*)"V.Activate(int)\nC++: void Activate(unsigned int texUnit)\n\nSet the active tex unit and bind (using our bind).\n"},
  {(char*)"Deactivate", PyvtkTextureObject_Deactivate, METH_VARARGS,
   (char*)"V.Deactivate(int)\nC++: void Deactivate(unsigned int texUnit)\n\nSet the active tex unit and bind (using our bind).\n"},
  {(char*)"IsBound", PyvtkTextureObject_IsBound, METH_VARARGS,
   (char*)"V.IsBound() -> bool\nC++: bool IsBound()\n\nTells if the texture object is bound to the active texture image\nunit. (a texture object can be bound to multiple texture image\nunit).\n"},
  {(char*)"SendParameters", PyvtkTextureObject_SendParameters, METH_VARARGS,
   (char*)"V.SendParameters()\nC++: void SendParameters()\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {(char*)"SetAutoParameters", PyvtkTextureObject_SetAutoParameters, METH_VARARGS,
   (char*)"V.SetAutoParameters(int)\nC++: void SetAutoParameters(int a)\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {(char*)"GetAutoParameters", PyvtkTextureObject_GetAutoParameters, METH_VARARGS,
   (char*)"V.GetAutoParameters() -> int\nC++: int GetAutoParameters()\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {(char*)"Create1D", PyvtkTextureObject_Create1D, METH_VARARGS,
   (char*)"V.Create1D(int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create1D(int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\n\nCreate a 1D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4]. shaderSupportsTextureInt is true if the shader has an\nalternate implementation supporting sampler with integer values.\nEven if the card supports texture int, it does not mean that the\nimplementor of the shader made a version that supports texture\nint.\n"},
  {(char*)"Create2D", PyvtkTextureObject_Create2D, METH_VARARGS,
   (char*)"V.Create2D(int, int, int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create2D(unsigned int width, unsigned int height,\n    int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\nV.Create2D(int, int, int, int, bool) -> bool\nC++: bool Create2D(unsigned int width, unsigned int height,\n    int numComps, int vtktype, bool shaderSupportsTextureInt)\n\nCreate a 2D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4].\n"},
  {(char*)"CreateDepth", PyvtkTextureObject_CreateDepth, METH_VARARGS,
   (char*)"V.CreateDepth(int, int, int, vtkPixelBufferObject) -> bool\nC++: bool CreateDepth(unsigned int width, unsigned int height,\n    int internalFormat, vtkPixelBufferObject *pbo)\n\nCreate a 2D depth texture using a PBO.\n\\pre: valid_internalFormat: internalFormat>=0 &&\n    internalFormat<NumberOfDepthFormats\n"},
  {(char*)"CreateDepthFromRaw", PyvtkTextureObject_CreateDepthFromRaw, METH_VARARGS,
   (char*)"V.CreateDepthFromRaw(int, int, int, int, ) -> bool\nC++: bool CreateDepthFromRaw(unsigned int width,\n    unsigned int height, int internalFormat, int rawType,\n    void *raw)\n\nCreate a 2D depth texture using a raw pointer. This is a blocking\ncall. If you can, use PBO instead.\n"},
  {(char*)"AllocateDepth", PyvtkTextureObject_AllocateDepth, METH_VARARGS,
   (char*)"V.AllocateDepth(int, int, int) -> bool\nC++: bool AllocateDepth(unsigned int width, unsigned int height,\n    int internalFormat)\n\nCreate a 2D depth texture but does not initialize its values.\n"},
  {(char*)"Allocate1D", PyvtkTextureObject_Allocate1D, METH_VARARGS,
   (char*)"V.Allocate1D(int, int, int) -> bool\nC++: bool Allocate1D(unsigned int width, int numComps,\n    int vtkType)\n\nCreate a 1D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {(char*)"Allocate2D", PyvtkTextureObject_Allocate2D, METH_VARARGS,
   (char*)"V.Allocate2D(int, int, int, int) -> bool\nC++: bool Allocate2D(unsigned int width, unsigned int height,\n    int numComps, int vtkType)\n\nCreate a 2D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {(char*)"Allocate3D", PyvtkTextureObject_Allocate3D, METH_VARARGS,
   (char*)"V.Allocate3D(int, int, int, int, int) -> bool\nC++: bool Allocate3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, int vtkType)\n\nCreate a 3D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {(char*)"Create3D", PyvtkTextureObject_Create3D, METH_VARARGS,
   (char*)"V.Create3D(int, int, int, int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\nV.Create3D(int, int, int, int, int, bool) -> bool\nC++: bool Create3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, int vtktype,\n    bool shaderSupportsTextureInt)\n\nCreate a 3D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4].\n"},
  {(char*)"Download", PyvtkTextureObject_Download, METH_VARARGS,
   (char*)"V.Download() -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *Download()\n\nThis is used to download raw data from the texture into a pixel\nbufer. The pixel buffer API can then be used to download the\npixel buffer data to CPU arrays. The caller takes on the\nresponsibility of deleting the returns vtkPixelBufferObject once\nit done with it.\n"},
  {(char*)"GetDataType", PyvtkTextureObject_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type for the texture as a vtk type int i.e. VTK_INT\netc.\n"},
  {(char*)"GetInternalFormat", PyvtkTextureObject_GetInternalFormat, METH_VARARGS,
   (char*)"V.GetInternalFormat(int, int, bool) -> int\nC++: unsigned int GetInternalFormat(int vtktype, int numComps,\n    bool shaderSupportsTextureInt)\n\n"},
  {(char*)"GetFormat", PyvtkTextureObject_GetFormat, METH_VARARGS,
   (char*)"V.GetFormat(int, int, bool) -> int\nC++: unsigned int GetFormat(int vtktype, int numComps,\n    bool shaderSupportsTextureInt)\n\n"},
  {(char*)"SetRequireDepthBufferFloat", PyvtkTextureObject_SetRequireDepthBufferFloat, METH_VARARGS,
   (char*)"V.SetRequireDepthBufferFloat(bool)\nC++: void SetRequireDepthBufferFloat(bool a)\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {(char*)"GetRequireDepthBufferFloat", PyvtkTextureObject_GetRequireDepthBufferFloat, METH_VARARGS,
   (char*)"V.GetRequireDepthBufferFloat() -> bool\nC++: bool GetRequireDepthBufferFloat()\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {(char*)"GetSupportsDepthBufferFloat", PyvtkTextureObject_GetSupportsDepthBufferFloat, METH_VARARGS,
   (char*)"V.GetSupportsDepthBufferFloat() -> bool\nC++: bool GetSupportsDepthBufferFloat()\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {(char*)"SetRequireTextureFloat", PyvtkTextureObject_SetRequireTextureFloat, METH_VARARGS,
   (char*)"V.SetRequireTextureFloat(bool)\nC++: void SetRequireTextureFloat(bool a)\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"GetRequireTextureFloat", PyvtkTextureObject_GetRequireTextureFloat, METH_VARARGS,
   (char*)"V.GetRequireTextureFloat() -> bool\nC++: bool GetRequireTextureFloat()\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"GetSupportsTextureFloat", PyvtkTextureObject_GetSupportsTextureFloat, METH_VARARGS,
   (char*)"V.GetSupportsTextureFloat() -> bool\nC++: bool GetSupportsTextureFloat()\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"SetRequireTextureInteger", PyvtkTextureObject_SetRequireTextureInteger, METH_VARARGS,
   (char*)"V.SetRequireTextureInteger(bool)\nC++: void SetRequireTextureInteger(bool a)\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"GetRequireTextureInteger", PyvtkTextureObject_GetRequireTextureInteger, METH_VARARGS,
   (char*)"V.GetRequireTextureInteger() -> bool\nC++: bool GetRequireTextureInteger()\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"GetSupportsTextureInteger", PyvtkTextureObject_GetSupportsTextureInteger, METH_VARARGS,
   (char*)"V.GetSupportsTextureInteger() -> bool\nC++: bool GetSupportsTextureInteger()\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {(char*)"GetWrapS", PyvtkTextureObject_GetWrapS, METH_VARARGS,
   (char*)"V.GetWrapS() -> int\nC++: int GetWrapS()\n\nWrap mode for the first texture coordinate \"s\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"SetWrapS", PyvtkTextureObject_SetWrapS, METH_VARARGS,
   (char*)"V.SetWrapS(int)\nC++: void SetWrapS(int a)\n\nWrap mode for the first texture coordinate \"s\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"GetWrapT", PyvtkTextureObject_GetWrapT, METH_VARARGS,
   (char*)"V.GetWrapT() -> int\nC++: int GetWrapT()\n\nWrap mode for the first texture coordinate \"t\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"SetWrapT", PyvtkTextureObject_SetWrapT, METH_VARARGS,
   (char*)"V.SetWrapT(int)\nC++: void SetWrapT(int a)\n\nWrap mode for the first texture coordinate \"t\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"GetWrapR", PyvtkTextureObject_GetWrapR, METH_VARARGS,
   (char*)"V.GetWrapR() -> int\nC++: int GetWrapR()\n\nWrap mode for the first texture coordinate \"r\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"SetWrapR", PyvtkTextureObject_SetWrapR, METH_VARARGS,
   (char*)"V.SetWrapR(int)\nC++: void SetWrapR(int a)\n\nWrap mode for the first texture coordinate \"r\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {(char*)"GetMinificationFilter", PyvtkTextureObject_GetMinificationFilter, METH_VARARGS,
   (char*)"V.GetMinificationFilter() -> int\nC++: int GetMinificationFilter()\n\nMinification filter mode. Valid values are:\n- Nearest\n- Linear\n- NearestMipmapNearest\n- NearestMipmapLinear\n- LinearMipmapNearest\n- LinearMipmapLinear Initial value is Nearest (note initial value\nin OpenGL spec is NearestMipMapLinear but this is error-prone\n  because it makes the texture object incomplete. ).\n"},
  {(char*)"SetMinificationFilter", PyvtkTextureObject_SetMinificationFilter, METH_VARARGS,
   (char*)"V.SetMinificationFilter(int)\nC++: void SetMinificationFilter(int a)\n\nMinification filter mode. Valid values are:\n- Nearest\n- Linear\n- NearestMipmapNearest\n- NearestMipmapLinear\n- LinearMipmapNearest\n- LinearMipmapLinear Initial value is Nearest (note initial value\nin OpenGL spec is NearestMipMapLinear but this is error-prone\n  because it makes the texture object incomplete. ).\n"},
  {(char*)"GetMagnificationFilter", PyvtkTextureObject_GetMagnificationFilter, METH_VARARGS,
   (char*)"V.GetMagnificationFilter() -> int\nC++: int GetMagnificationFilter()\n\nMagnification filter mode. Valid values are:\n- Nearest\n- Linear Initial value is Nearest\n"},
  {(char*)"SetMagnificationFilter", PyvtkTextureObject_SetMagnificationFilter, METH_VARARGS,
   (char*)"V.SetMagnificationFilter(int)\nC++: void SetMagnificationFilter(int a)\n\nMagnification filter mode. Valid values are:\n- Nearest\n- Linear Initial value is Nearest\n"},
  {(char*)"SetLinearMagnification", PyvtkTextureObject_SetLinearMagnification, METH_VARARGS,
   (char*)"V.SetLinearMagnification(bool)\nC++: void SetLinearMagnification(bool val)\n\nTells if the magnification mode is linear (true) or nearest\n(false). Initial value is false (initial value in OpenGL spec is\ntrue).\n"},
  {(char*)"GetLinearMagnification", PyvtkTextureObject_GetLinearMagnification, METH_VARARGS,
   (char*)"V.GetLinearMagnification() -> bool\nC++: bool GetLinearMagnification()\n\n"},
  {(char*)"SetBorderColor", PyvtkTextureObject_SetBorderColor, METH_VARARGS,
   (char*)"V.SetBorderColor(float, float, float, float)\nC++: void SetBorderColor(float, float, float, float)\nV.SetBorderColor((float, float, float, float))\nC++: void SetBorderColor(float a[4])\n\n"},
  {(char*)"GetBorderColor", PyvtkTextureObject_GetBorderColor, METH_VARARGS,
   (char*)"V.GetBorderColor() -> (float, float, float, float)\nC++: float *GetBorderColor()\n\n"},
  {(char*)"SetPriority", PyvtkTextureObject_SetPriority, METH_VARARGS,
   (char*)"V.SetPriority(float)\nC++: void SetPriority(float a)\n\nPriority of the texture object to be resident on the card for\nhigher performance in the range [0.0f,1.0f]. Initial value is\n1.0f, as in OpenGL spec.\n"},
  {(char*)"GetPriority", PyvtkTextureObject_GetPriority, METH_VARARGS,
   (char*)"V.GetPriority() -> float\nC++: float GetPriority()\n\nPriority of the texture object to be resident on the card for\nhigher performance in the range [0.0f,1.0f]. Initial value is\n1.0f, as in OpenGL spec.\n"},
  {(char*)"SetMinLOD", PyvtkTextureObject_SetMinLOD, METH_VARARGS,
   (char*)"V.SetMinLOD(float)\nC++: void SetMinLOD(float a)\n\nLower-clamp the computed LOD against this value. Any float value\nis valid. Initial value is -1000.0f, as in OpenGL spec.\n"},
  {(char*)"GetMinLOD", PyvtkTextureObject_GetMinLOD, METH_VARARGS,
   (char*)"V.GetMinLOD() -> float\nC++: float GetMinLOD()\n\nLower-clamp the computed LOD against this value. Any float value\nis valid. Initial value is -1000.0f, as in OpenGL spec.\n"},
  {(char*)"SetMaxLOD", PyvtkTextureObject_SetMaxLOD, METH_VARARGS,
   (char*)"V.SetMaxLOD(float)\nC++: void SetMaxLOD(float a)\n\nUpper-clamp the computed LOD against this value. Any float value\nis valid. Initial value is 1000.0f, as in OpenGL spec.\n"},
  {(char*)"GetMaxLOD", PyvtkTextureObject_GetMaxLOD, METH_VARARGS,
   (char*)"V.GetMaxLOD() -> float\nC++: float GetMaxLOD()\n\nUpper-clamp the computed LOD against this value. Any float value\nis valid. Initial value is 1000.0f, as in OpenGL spec.\n"},
  {(char*)"SetBaseLevel", PyvtkTextureObject_SetBaseLevel, METH_VARARGS,
   (char*)"V.SetBaseLevel(int)\nC++: void SetBaseLevel(int a)\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 0, as in OpenGL spec.\n"},
  {(char*)"GetBaseLevel", PyvtkTextureObject_GetBaseLevel, METH_VARARGS,
   (char*)"V.GetBaseLevel() -> int\nC++: int GetBaseLevel()\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 0, as in OpenGL spec.\n"},
  {(char*)"SetMaxLevel", PyvtkTextureObject_SetMaxLevel, METH_VARARGS,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int a)\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 1000, as in OpenGL spec.\n"},
  {(char*)"GetMaxLevel", PyvtkTextureObject_GetMaxLevel, METH_VARARGS,
   (char*)"V.GetMaxLevel() -> int\nC++: int GetMaxLevel()\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 1000, as in OpenGL spec.\n"},
  {(char*)"GetDepthTextureCompare", PyvtkTextureObject_GetDepthTextureCompare, METH_VARARGS,
   (char*)"V.GetDepthTextureCompare() -> bool\nC++: bool GetDepthTextureCompare()\n\nTells if the output of a texture unit with a depth texture uses\ncomparison or not. Comparison happens between D_t the depth\ntexture value in the range [0,1] and with R the interpolated\nthird texture coordinate clamped to range [0,1]. The result of\nthe comparison is noted `r'. If this flag is false, r=D_t.\nInitial value is false, as in OpenGL spec. Ignored if the texture\nobject is not a depth texture.\n"},
  {(char*)"SetDepthTextureCompare", PyvtkTextureObject_SetDepthTextureCompare, METH_VARARGS,
   (char*)"V.SetDepthTextureCompare(bool)\nC++: void SetDepthTextureCompare(bool a)\n\nTells if the output of a texture unit with a depth texture uses\ncomparison or not. Comparison happens between D_t the depth\ntexture value in the range [0,1] and with R the interpolated\nthird texture coordinate clamped to range [0,1]. The result of\nthe comparison is noted `r'. If this flag is false, r=D_t.\nInitial value is false, as in OpenGL spec. Ignored if the texture\nobject is not a depth texture.\n"},
  {(char*)"GetDepthTextureCompareFunction", PyvtkTextureObject_GetDepthTextureCompareFunction, METH_VARARGS,
   (char*)"V.GetDepthTextureCompareFunction() -> int\nC++: int GetDepthTextureCompareFunction()\n\nIn case DepthTextureCompare is true, specify the comparison\nfunction in use. The result of the comparison is noted `r'. Valid\nvalues are:\n- Value\n- Lequal: r=R<=Dt ? 1.0 : 0.0\n- Gequal: r=R>=Dt ? 1.0 : 0.0\n- Less: r=R<D_t ? 1.0 : 0.0\n- Greater: r=R>Dt ? 1.0 : 0.0\n- Equal: r=R==Dt ? 1.0 : 0.0\n- NotEqual: r=R!=Dt ? 1.0 : 0.0\n- AlwaysTrue: r=1.0\n- Never: r=0.0 If the magnification of minification factor are\n  not nearest, percentage closer filtering (PCF) is used: R is\n  compared to several D_t and r is the average of the comparisons\n(it is NOT the average of D_t compared once to R). Initial value\n  is Lequal, as in OpenGL spec. Ignored if the texture object is\n  not a depth texture.\n"},
  {(char*)"SetDepthTextureCompareFunction", PyvtkTextureObject_SetDepthTextureCompareFunction, METH_VARARGS,
   (char*)"V.SetDepthTextureCompareFunction(int)\nC++: void SetDepthTextureCompareFunction(int a)\n\nIn case DepthTextureCompare is true, specify the comparison\nfunction in use. The result of the comparison is noted `r'. Valid\nvalues are:\n- Value\n- Lequal: r=R<=Dt ? 1.0 : 0.0\n- Gequal: r=R>=Dt ? 1.0 : 0.0\n- Less: r=R<D_t ? 1.0 : 0.0\n- Greater: r=R>Dt ? 1.0 : 0.0\n- Equal: r=R==Dt ? 1.0 : 0.0\n- NotEqual: r=R!=Dt ? 1.0 : 0.0\n- AlwaysTrue: r=1.0\n- Never: r=0.0 If the magnification of minification factor are\n  not nearest, percentage closer filtering (PCF) is used: R is\n  compared to several D_t and r is the average of the comparisons\n(it is NOT the average of D_t compared once to R). Initial value\n  is Lequal, as in OpenGL spec. Ignored if the texture object is\n  not a depth texture.\n"},
  {(char*)"GetDepthTextureMode", PyvtkTextureObject_GetDepthTextureMode, METH_VARARGS,
   (char*)"V.GetDepthTextureMode() -> int\nC++: int GetDepthTextureMode()\n\nDefines the mapping from depth component `r' to RGBA components.\nIgnored if the texture object is not a depth texture. Valid modes\nare:\n- Luminance: (R,G,B,A)=(r,r,r,1)\n- Intensity: (R,G,B,A)=(r,r,r,r)\n- Alpha: (R.G.B.A)=(0,0,0,r) Initial value is Luminance, as in\n  OpenGL spec.\n"},
  {(char*)"SetDepthTextureMode", PyvtkTextureObject_SetDepthTextureMode, METH_VARARGS,
   (char*)"V.SetDepthTextureMode(int)\nC++: void SetDepthTextureMode(int a)\n\nDefines the mapping from depth component `r' to RGBA components.\nIgnored if the texture object is not a depth texture. Valid modes\nare:\n- Luminance: (R,G,B,A)=(r,r,r,1)\n- Intensity: (R,G,B,A)=(r,r,r,r)\n- Alpha: (R.G.B.A)=(0,0,0,r) Initial value is Luminance, as in\n  OpenGL spec.\n"},
  {(char*)"GetGenerateMipmap", PyvtkTextureObject_GetGenerateMipmap, METH_VARARGS,
   (char*)"V.GetGenerateMipmap() -> bool\nC++: bool GetGenerateMipmap()\n\nTells the hardware to generate mipmap textures from the first\ntexture image at BaseLevel. Initial value is false, as in OpenGL\nspec.\n"},
  {(char*)"SetGenerateMipmap", PyvtkTextureObject_SetGenerateMipmap, METH_VARARGS,
   (char*)"V.SetGenerateMipmap(bool)\nC++: void SetGenerateMipmap(bool a)\n\nTells the hardware to generate mipmap textures from the first\ntexture image at BaseLevel. Initial value is false, as in OpenGL\nspec.\n"},
  {(char*)"IsSupported", PyvtkTextureObject_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow, bool, bool, bool) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin,\n    bool requireTexFloat, bool requireDepthFloat,\n    bool requireTexInt)\nV.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions. If flags\nfor optional extenisons are set then the test fails when support\nfor them is not found.\n"},
  {(char*)"CopyToFrameBuffer", PyvtkTextureObject_CopyToFrameBuffer, METH_VARARGS,
   (char*)"V.CopyToFrameBuffer(int, int, int, int, int, int, int, int)\nC++: void CopyToFrameBuffer(int srcXmin, int srcYmin, int srcXmax,\n     int srcYmax, int dstXmin, int dstYmin, int width, int height)\n\nCopy a sub-part of the texture (src) in the current framebuffer\nat location (dstXmin,dstYmin). (dstXmin,dstYmin) is the location\nof the lower left corner of the rectangle. width and height are\nthe dimensions of the framebuffer.\n- texture coordinates are sent on texture coordinate processing\n  unit 0.\n- if the fixed-pipeline fragment shader is used, texturing has to\nbe set on texture image unit 0 and the texture object has to be\n  bound on texture image unit 0.\n- if a customized fragment shader is used, you are free to pick\n  the texture image unit you want. You can even have multiple\n  texture objects attached on multiple texture image units. In\n  this case, you call this method only on one of them.\n\\pre positive_srcXmin: srcXmin>=0\n\\pre max_srcXmax: srcXmax<this->GetWidth()\n\\pre increasing_x: srcXmin<=srcXmax\n\\pre positive_srcYmin: srcYmin>=0\n\\pre max_srcYmax: srcYmax<this->GetHeight()\n\\pre increasing_y: srcYmin<=srcYmax\n\\pre positive_dstXmin: dstXmin>=0\n\\pre positive_dstYmin: dstYmin>=0\n\\pre positive_width: width>0\n\\pre positive_height: height>0\n\\pre x_fit: destXmin+(srcXmax-srcXmin)<width\n\\pre y_fit: destYmin+(srcYmax-srcYmin)<height\n"},
  {(char*)"CopyFromFrameBuffer", PyvtkTextureObject_CopyFromFrameBuffer, METH_VARARGS,
   (char*)"V.CopyFromFrameBuffer(int, int, int, int, int, int)\nC++: void CopyFromFrameBuffer(int srcXmin, int srcYmin,\n    int dstXmin, int dstYmin, int width, int height)\n\nCopy a sub-part of a logical buffer of the framebuffer (color or\ndepth) to the texture object. src is the framebuffer, dst is the\ntexture. (srcXmin,srcYmin) is the location of the lower left\ncorner of the rectangle in the framebuffer. (dstXmin,dstYmin) is\nthe location of the lower left corner of the rectangle in the\ntexture. width and height specifies the size of the rectangle in\npixels. If the logical buffer is a color buffer, it has to be\nselected first with glReadBuffer().\n\\pre is2D: GetNumberOfDimensions()==2\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextureObject_StaticNew()
{
  return vtkTextureObject::New();
}

PyObject *PyVTKClass_vtkTextureObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextureObject_StaticNew,
    PyvtkTextureObject_Methods,
    "vtkTextureObject", modulename,
    NULL, NULL,
    PyvtkTextureObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 32; c++)
      {
      static const struct { const char *name; int value; }
        constants[32] = {
          { "Lequal", vtkTextureObject::Lequal },
          { "Gequal", vtkTextureObject::Gequal },
          { "Less", vtkTextureObject::Less },
          { "Greater", vtkTextureObject::Greater },
          { "Equal", vtkTextureObject::Equal },
          { "NotEqual", vtkTextureObject::NotEqual },
          { "AlwaysTrue", vtkTextureObject::AlwaysTrue },
          { "Never", vtkTextureObject::Never },
          { "NumberOfDepthTextureCompareFunctions", vtkTextureObject::NumberOfDepthTextureCompareFunctions },
          { "Luminance", vtkTextureObject::Luminance },
          { "Intensity", vtkTextureObject::Intensity },
          { "Alpha", vtkTextureObject::Alpha },
          { "NumberOfDepthTextureModes", vtkTextureObject::NumberOfDepthTextureModes },
          { "Clamp", vtkTextureObject::Clamp },
          { "ClampToEdge", vtkTextureObject::ClampToEdge },
          { "Repeat", vtkTextureObject::Repeat },
          { "ClampToBorder", vtkTextureObject::ClampToBorder },
          { "MirroredRepeat", vtkTextureObject::MirroredRepeat },
          { "NumberOfWrapModes", vtkTextureObject::NumberOfWrapModes },
          { "Nearest", vtkTextureObject::Nearest },
          { "Linear", vtkTextureObject::Linear },
          { "NearestMipmapNearest", vtkTextureObject::NearestMipmapNearest },
          { "NearestMipmapLinear", vtkTextureObject::NearestMipmapLinear },
          { "LinearMipmapNearest", vtkTextureObject::LinearMipmapNearest },
          { "LinearMipmapLinear", vtkTextureObject::LinearMipmapLinear },
          { "NumberOfMinificationModes", vtkTextureObject::NumberOfMinificationModes },
          { "Native", vtkTextureObject::Native },
          { "Fixed16", vtkTextureObject::Fixed16 },
          { "Fixed24", vtkTextureObject::Fixed24 },
          { "Fixed32", vtkTextureObject::Fixed32 },
          { "Float32", vtkTextureObject::Float32 },
          { "NumberOfDepthFormats", vtkTextureObject::NumberOfDepthFormats },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTextureObject_Doc()
{
  static const char *docstring[] = {
    "vtkTextureObject - abstracts an OpenGL texture object.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTextureObject represents an OpenGL texture object. It provides API\nto create textures using data already loaded into pixel buffer\nobjects. It can also be used to create textures without uploading any\ndata.\n\nCaveats:\n\nDON'T PLAY WITH IT YET.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextureObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextureObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextureObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

