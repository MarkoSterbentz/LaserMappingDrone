// python wrapper for vtkOpenGLPainterDeviceAdapter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLPainterDeviceAdapter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLPainterDeviceAdapter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterDeviceAdapterNew
extern "C" { PyObject *PyVTKClass_vtkPainterDeviceAdapterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterDeviceAdapterNew
#endif

static const char **PyvtkOpenGLPainterDeviceAdapter_Doc();


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLPainterDeviceAdapter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLPainterDeviceAdapter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLPainterDeviceAdapter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLPainterDeviceAdapter::NewInstance());

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
PyvtkOpenGLPainterDeviceAdapter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLPainterDeviceAdapter *tempr = vtkOpenGLPainterDeviceAdapter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_BeginPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BeginPrimitive(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::BeginPrimitive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_EndPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPrimitive();
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::EndPrimitive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_IsAttributesSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributesSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAttributesSupported(temp0) :
      op->vtkOpenGLPainterDeviceAdapter::IsAttributesSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  vtkIdType temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SendMultiTextureCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendMultiTextureCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  void  *temp2 = NULL;
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
    if (ap.IsBound())
      {
      op->SendMultiTextureCoords(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SendMultiTextureCoords(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SetAttributePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
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
    if (ap.IsBound())
      {
      op->SetAttributePointer(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SetAttributePointer(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableAttributeArray(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::EnableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DisableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableAttributeArray(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DisableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DrawArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawArrays(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DrawArrays(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DrawElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  int temp2;
  void  *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawElements(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DrawElements(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_Compatible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compatible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    int tempr = (ap.IsBound() ?
      op->Compatible(temp0) :
      op->vtkOpenGLPainterDeviceAdapter::Compatible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeLighting(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeLighting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->QueryLighting() :
      op->vtkOpenGLPainterDeviceAdapter::QueryLighting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeMultisampling(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeMultisampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->QueryMultisampling() :
      op->vtkOpenGLPainterDeviceAdapter::QueryMultisampling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeBlending(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeBlending(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->QueryBlending() :
      op->vtkOpenGLPainterDeviceAdapter::QueryBlending());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeVertexEmphasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeVertexEmphasis(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeVertexEmphasis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_Stencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Stencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::Stencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_WriteStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteStencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::WriteStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_TestStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->TestStencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::TestStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLPainterDeviceAdapter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLPainterDeviceAdapter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLPainterDeviceAdapter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLPainterDeviceAdapter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLPainterDeviceAdapter\nC++: vtkOpenGLPainterDeviceAdapter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLPainterDeviceAdapter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLPainterDeviceAdapter\nC++: vtkOpenGLPainterDeviceAdapter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BeginPrimitive", PyvtkOpenGLPainterDeviceAdapter_BeginPrimitive, METH_VARARGS,
   (char*)"V.BeginPrimitive(int)\nC++: virtual void BeginPrimitive(int mode)\n\nConverts mode from VTK_* to GL_* and calls glBegin.\n"},
  {(char*)"EndPrimitive", PyvtkOpenGLPainterDeviceAdapter_EndPrimitive, METH_VARARGS,
   (char*)"V.EndPrimitive()\nC++: virtual void EndPrimitive()\n\nCalls glEnd.\n"},
  {(char*)"IsAttributesSupported", PyvtkOpenGLPainterDeviceAdapter_IsAttributesSupported, METH_VARARGS,
   (char*)"V.IsAttributesSupported(int) -> int\nC++: virtual int IsAttributesSupported(int attribute)\n\nReturns if the given attribute type is supported by the device.\nReturns 1 is supported, 0 otherwise.\n"},
  {(char*)"SendAttribute", PyvtkOpenGLPainterDeviceAdapter_SendAttribute, METH_VARARGS,
   (char*)"V.SendAttribute(int, int, int, , int)\nC++: virtual void SendAttribute(int index, int components,\n    int type, const void *attribute, vtkIdType offset=0)\n\nCalls one of glVertex*, glNormal*, glColor*, or glTexCoord*.\n"},
  {(char*)"SendMultiTextureCoords", PyvtkOpenGLPainterDeviceAdapter_SendMultiTextureCoords, METH_VARARGS,
   (char*)"V.SendMultiTextureCoords(int, int, , int, int)\nC++: virtual void SendMultiTextureCoords(int numcomp, int type,\n    const void *attribute, int idx, vtkIdType offset)\n\nCalls glMultiTex\n"},
  {(char*)"SetAttributePointer", PyvtkOpenGLPainterDeviceAdapter_SetAttributePointer, METH_VARARGS,
   (char*)"V.SetAttributePointer(int, int, int, int, )\nC++: virtual void SetAttributePointer(int index,\n    int numcomponents, int type, int stride, const void *pointer)\n\nCalls one of glVertexPointer, glNormalPointer, glColorPointer, or\nglTexCoordPointer.\n"},
  {(char*)"EnableAttributeArray", PyvtkOpenGLPainterDeviceAdapter_EnableAttributeArray, METH_VARARGS,
   (char*)"V.EnableAttributeArray(int)\nC++: virtual void EnableAttributeArray(int index)\n\nCalls glEnableClientState or glDisableClientState.\n"},
  {(char*)"DisableAttributeArray", PyvtkOpenGLPainterDeviceAdapter_DisableAttributeArray, METH_VARARGS,
   (char*)"V.DisableAttributeArray(int)\nC++: virtual void DisableAttributeArray(int index)\n\nCalls glEnableClientState or glDisableClientState.\n"},
  {(char*)"DrawArrays", PyvtkOpenGLPainterDeviceAdapter_DrawArrays, METH_VARARGS,
   (char*)"V.DrawArrays(int, int, int)\nC++: virtual void DrawArrays(int mode, vtkIdType first,\n    vtkIdType count)\n\nCalls glDrawArrays.  Mode is converted from VTK_* to GL_*.\n"},
  {(char*)"DrawElements", PyvtkOpenGLPainterDeviceAdapter_DrawElements, METH_VARARGS,
   (char*)"V.DrawElements(int, int, int, )\nC++: virtual void DrawElements(int mode, vtkIdType count,\n    int type, void *indices)\n\nCalls glDrawElements.  Mode and type are converted from VTK_* to\nGL_*.\n"},
  {(char*)"Compatible", PyvtkOpenGLPainterDeviceAdapter_Compatible, METH_VARARGS,
   (char*)"V.Compatible(vtkRenderer) -> int\nC++: virtual int Compatible(vtkRenderer *renderer)\n\nReturns true if renderer is a vtkOpenGLRenderer.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"MakeLighting", PyvtkOpenGLPainterDeviceAdapter_MakeLighting, METH_VARARGS,
   (char*)"V.MakeLighting(int)\nC++: virtual void MakeLighting(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns lighting on and off.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"QueryLighting", PyvtkOpenGLPainterDeviceAdapter_QueryLighting, METH_VARARGS,
   (char*)"V.QueryLighting() -> int\nC++: virtual int QueryLighting()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current lighting setting.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"MakeMultisampling", PyvtkOpenGLPainterDeviceAdapter_MakeMultisampling, METH_VARARGS,
   (char*)"V.MakeMultisampling(int)\nC++: virtual void MakeMultisampling(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns antialiasing on and off.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"QueryMultisampling", PyvtkOpenGLPainterDeviceAdapter_QueryMultisampling, METH_VARARGS,
   (char*)"V.QueryMultisampling() -> int\nC++: virtual int QueryMultisampling()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current antialiasing setting.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"MakeBlending", PyvtkOpenGLPainterDeviceAdapter_MakeBlending, METH_VARARGS,
   (char*)"V.MakeBlending(int)\nC++: virtual void MakeBlending(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns blending on and off.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"QueryBlending", PyvtkOpenGLPainterDeviceAdapter_QueryBlending, METH_VARARGS,
   (char*)"V.QueryBlending() -> int\nC++: virtual int QueryBlending()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current blending setting.\n"},
#endif
  {(char*)"MakeVertexEmphasis", PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasis, METH_VARARGS,
   (char*)"V.MakeVertexEmphasis(bool)\nC++: virtual void MakeVertexEmphasis(bool mode)\n\nTurns emphasis of vertices on or off for vertex selection. When\nemphasized verts are drawn nearer to the camera and are drawn\nlarger than normal to make selection of them more reliable.\n"},
  {(char*)"Stencil", PyvtkOpenGLPainterDeviceAdapter_Stencil, METH_VARARGS,
   (char*)"V.Stencil(int)\nC++: virtual void Stencil(int on)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"WriteStencil", PyvtkOpenGLPainterDeviceAdapter_WriteStencil, METH_VARARGS,
   (char*)"V.WriteStencil(int)\nC++: virtual void WriteStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"TestStencil", PyvtkOpenGLPainterDeviceAdapter_TestStencil, METH_VARARGS,
   (char*)"V.TestStencil(int)\nC++: virtual void TestStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLPainterDeviceAdapter_StaticNew()
{
  return vtkOpenGLPainterDeviceAdapter::New();
}

PyObject *PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLPainterDeviceAdapter_StaticNew,
    PyvtkOpenGLPainterDeviceAdapter_Methods,
    "vtkOpenGLPainterDeviceAdapter", modulename,
    NULL, NULL,
    PyvtkOpenGLPainterDeviceAdapter_Doc(),
    PyVTKClass_vtkPainterDeviceAdapterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLPainterDeviceAdapter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLPainterDeviceAdapter - An adapter between a vtkPainter and a\nrendering device.\n\n",
    "Superclass: vtkPainterDeviceAdapter\n\n",
    "An adapter between vtkPainter and the OpenGL rendering system.  Only\na handful of attributes with special meaning are supported.  The\nOpenGL attribute used for each attribute is given below.\n\n\n vtkDataSetAttributes::NORMALS          glNormal\n vtkDataSetAttributes:::SCALARS         glColor\n vtkDataSetAttributes::TCOORDS          glTexCoord\n vtkDataSetAttributes::NUM_ATTRIBUTES   glVertex\n \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLPainterDeviceAdapter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLPainterDeviceAdapter", o) != 0)
    {
    Py_DECREF(o);
    }

}

