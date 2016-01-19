// python wrapper for vtkPainterDeviceAdapter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPainterDeviceAdapter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPainterDeviceAdapter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPainterDeviceAdapterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPainterDeviceAdapter_Doc();


static PyObject *
PyvtkPainterDeviceAdapter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPainterDeviceAdapter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPainterDeviceAdapter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPainterDeviceAdapter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPainterDeviceAdapter::NewInstance());

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
PyvtkPainterDeviceAdapter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPainterDeviceAdapter *tempr = vtkPainterDeviceAdapter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_BeginPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->BeginPrimitive(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_EndPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->EndPrimitive();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_IsAttributesSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributesSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->IsAttributesSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_SendMultiTextureCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendMultiTextureCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  void  *temp2 = NULL;
  int temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    op->SendMultiTextureCoords(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  vtkIdType temp4 = 0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    op->SendAttribute(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_SetAttributePointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetAttributePointer(temp0, temp1);
      }
    else
      {
      op->vtkPainterDeviceAdapter::SetAttributePointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPainterDeviceAdapter_SetAttributePointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  void  *temp4 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    op->SetAttributePointer(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPainterDeviceAdapter_SetAttributePointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPainterDeviceAdapter_SetAttributePointer_s1(self, args);
    case 5:
      return PyvtkPainterDeviceAdapter_SetAttributePointer_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAttributePointer");
  return NULL;
}



static PyObject *
PyvtkPainterDeviceAdapter_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->EnableAttributeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_DisableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->DisableAttributeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_DrawArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->DrawArrays(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_DrawElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  int temp2;
  void  *temp3 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->DrawElements(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_Compatible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compatible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    int tempr = op->Compatible(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_MakeLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->MakeLighting(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_QueryLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->QueryLighting();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_MakeMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->MakeMultisampling(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_QueryMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->QueryMultisampling();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_MakeBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->MakeBlending(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_QueryBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->QueryBlending();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_MakeVertexEmphasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeVertexEmphasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->MakeVertexEmphasis(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_Stencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->Stencil(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_WriteStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->WriteStencil(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterDeviceAdapter_TestStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterDeviceAdapter *op = static_cast<vtkPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->TestStencil(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPainterDeviceAdapter_Methods[] = {
  {(char*)"GetClassName", PyvtkPainterDeviceAdapter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPainterDeviceAdapter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPainterDeviceAdapter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPainterDeviceAdapter\nC++: vtkPainterDeviceAdapter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPainterDeviceAdapter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPainterDeviceAdapter\nC++: vtkPainterDeviceAdapter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BeginPrimitive", PyvtkPainterDeviceAdapter_BeginPrimitive, METH_VARARGS,
   (char*)"V.BeginPrimitive(int)\nC++: virtual void BeginPrimitive(int mode)\n\nSignals the start of sending a primitive to the graphics card. \nThe mode is one of VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE,\nVTK_POLY_LINE, VTK_TRIANGLE, VTK_TRIANGLE_STRIP, VTK_POLYGON, or\nVTK_QUAD.  The primitive is defined by the attributes sent\nbetween the calls to BeginPrimitive and EndPrimitive.  You do not\nneed to call EndPrimitive/BeginPrimitive between primitives that\nhave a constant number of points (i.e. VTK_VERTEX, VTK_LINE,\nVTK_TRIANGLE, and VTK_QUAD).\n"},
  {(char*)"EndPrimitive", PyvtkPainterDeviceAdapter_EndPrimitive, METH_VARARGS,
   (char*)"V.EndPrimitive()\nC++: virtual void EndPrimitive()\n\nSignals the end of sending a primitive to the graphics card.\n"},
  {(char*)"IsAttributesSupported", PyvtkPainterDeviceAdapter_IsAttributesSupported, METH_VARARGS,
   (char*)"V.IsAttributesSupported(int) -> int\nC++: virtual int IsAttributesSupported(int attribute)\n\nReturns if the given attribute type is supported by the device.\nReturns 1 is supported, 0 otherwise.\n"},
  {(char*)"SendMultiTextureCoords", PyvtkPainterDeviceAdapter_SendMultiTextureCoords, METH_VARARGS,
   (char*)"V.SendMultiTextureCoords(int, int, , int, int)\nC++: virtual void SendMultiTextureCoords(int numcomp, int type,\n    const void *attribute, int idx, vtkIdType offset)\n\nCalls glMultiTex\n"},
  {(char*)"SendAttribute", PyvtkPainterDeviceAdapter_SendAttribute, METH_VARARGS,
   (char*)"V.SendAttribute(int, int, int, , int)\nC++: virtual void SendAttribute(int index, int components,\n    int type, const void *attribute, vtkIdType offset=0)\n\nSends a single attribute to the graphics card.  The index\nparameter identifies the attribute.  Some indices have special\nmeaning (see vtkPainter for details).  The components parameter\ngives the number of components in the attribute.  In general,\ncomponents must be between 1-4, but a rendering system may impose\neven more constraints.  The type parameter is a VTK type\nenumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering system\nmay not support all types for all attributes.  The attribute\nparameter is the actual data for the attribute. If offset is\nspecified, it is added to attribute pointer after it has been\ncasted to the proper type.\n"},
  {(char*)"SetAttributePointer", PyvtkPainterDeviceAdapter_SetAttributePointer, METH_VARARGS,
   (char*)"V.SetAttributePointer(int, vtkDataArray)\nC++: void SetAttributePointer(int index,\n    vtkDataArray *attributeArray)\nV.SetAttributePointer(int, int, int, int, )\nC++: virtual void SetAttributePointer(int index,\n    int numcomponents, int type, int stride, const void *pointer)\n\nSets an array of attributes.  This allows you to send all the\ndata for a particular attribute with one call, thus greatly\nreducing function call overhead.  Once set, the array is enabled\nwith EnableAttributeArray, and the data is sent with a call to\nDrawArrays DrawElements.\n"},
  {(char*)"EnableAttributeArray", PyvtkPainterDeviceAdapter_EnableAttributeArray, METH_VARARGS,
   (char*)"V.EnableAttributeArray(int)\nC++: virtual void EnableAttributeArray(int index)\n\nEnable/disable the attribute array set with SetAttributePointer.\n"},
  {(char*)"DisableAttributeArray", PyvtkPainterDeviceAdapter_DisableAttributeArray, METH_VARARGS,
   (char*)"V.DisableAttributeArray(int)\nC++: virtual void DisableAttributeArray(int index)\n\nEnable/disable the attribute array set with SetAttributePointer.\n"},
  {(char*)"DrawArrays", PyvtkPainterDeviceAdapter_DrawArrays, METH_VARARGS,
   (char*)"V.DrawArrays(int, int, int)\nC++: virtual void DrawArrays(int mode, vtkIdType first,\n    vtkIdType count)\n\nSend a section of the enabled attribute pointers to the graphics\ncard to define a primitive.  The mode is one of VTK_VERTEX,\nVTK_POLY_VERTEX, VTK_LINE, VTK_POLY_LINE, VTK_TRIANGLE,\nVTK_TRIANGLE_STRIP, VTK_POLYGON, or VTK_QUAD.  It identifies\nwhich type of primitive the attribute data is defining.  The\nparameters first and count identify what part of the attribute\narrays define the given primitive.  If mode is a primitive that\nhas a constant number of points (i.e. VTK_VERTEX, VTK_LINE,\nVTK_TRIANGLE, and VTK_QUAD), you may draw multiple primitives\nwith one call to DrawArrays.\n"},
  {(char*)"DrawElements", PyvtkPainterDeviceAdapter_DrawElements, METH_VARARGS,
   (char*)"V.DrawElements(int, int, int, )\nC++: virtual void DrawElements(int mode, vtkIdType count,\n    int type, void *indices)\n\nSend items in the attribute pointers to the graphics card to\ndefine a primitive.  The mode is one of VTK_VERTEX,\nVTK_POLY_VERTEX, VTK_LINE, VTK_POLY_LINE, VTK_TRIANGLE,\nVTK_TRIANGLE_STRIP, VTK_POLYGON, or VTK_QUAD.  It identifies\nwhich type of primitive the attribute data is defining.  The\nindices array holds the list of attribute elements that define\nthe primitive.  The count and type parameters give the number and\ndata type of the indices array.  The type parameter is a VTK type\nenumeration (VTK_UNSIGNED_INT, ...).  The type should be an\ninteger type (for obvious reasons).  If mode is a primitive that\nhas a constant number of points (i.e. VTK_VERTEX, VTK_LINE,\nVTK_TRIANGLE, and VTK_QUAD), you may draw multiple primitives\nwith one call to DrawArrays.\n"},
  {(char*)"Compatible", PyvtkPainterDeviceAdapter_Compatible, METH_VARARGS,
   (char*)"V.Compatible(vtkRenderer) -> int\nC++: virtual int Compatible(vtkRenderer *renderer)\n\nReturns true if this device adapter is compatible with the given\nvtkRenderer.\n"},
  {(char*)"MakeLighting", PyvtkPainterDeviceAdapter_MakeLighting, METH_VARARGS,
   (char*)"V.MakeLighting(int)\nC++: virtual void MakeLighting(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns lighting on and off.\n"},
  {(char*)"QueryLighting", PyvtkPainterDeviceAdapter_QueryLighting, METH_VARARGS,
   (char*)"V.QueryLighting() -> int\nC++: virtual int QueryLighting()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current lighting setting.\n"},
  {(char*)"MakeMultisampling", PyvtkPainterDeviceAdapter_MakeMultisampling, METH_VARARGS,
   (char*)"V.MakeMultisampling(int)\nC++: virtual void MakeMultisampling(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns antialiasing on and off.\n"},
  {(char*)"QueryMultisampling", PyvtkPainterDeviceAdapter_QueryMultisampling, METH_VARARGS,
   (char*)"V.QueryMultisampling() -> int\nC++: virtual int QueryMultisampling()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current antialiasing setting.\n"},
  {(char*)"MakeBlending", PyvtkPainterDeviceAdapter_MakeBlending, METH_VARARGS,
   (char*)"V.MakeBlending(int)\nC++: virtual void MakeBlending(int mode)\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Turns blending on and off.\n"},
  {(char*)"QueryBlending", PyvtkPainterDeviceAdapter_QueryBlending, METH_VARARGS,
   (char*)"V.QueryBlending() -> int\nC++: virtual int QueryBlending()\n\n@deprecated code that needs access directly to OpenGL state\nshould manage it locally. Returns current blending setting.\n"},
  {(char*)"MakeVertexEmphasis", PyvtkPainterDeviceAdapter_MakeVertexEmphasis, METH_VARARGS,
   (char*)"V.MakeVertexEmphasis(bool)\nC++: virtual void MakeVertexEmphasis(bool mode)\n\nTurns emphasis of vertices on or off for vertex selection.\n"},
  {(char*)"Stencil", PyvtkPainterDeviceAdapter_Stencil, METH_VARARGS,
   (char*)"V.Stencil(int)\nC++: virtual void Stencil(int on)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"WriteStencil", PyvtkPainterDeviceAdapter_WriteStencil, METH_VARARGS,
   (char*)"V.WriteStencil(int)\nC++: virtual void WriteStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"TestStencil", PyvtkPainterDeviceAdapter_TestStencil, METH_VARARGS,
   (char*)"V.TestStencil(int)\nC++: virtual void TestStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPainterDeviceAdapter_StaticNew()
{
  return vtkPainterDeviceAdapter::New();
}

PyObject *PyVTKClass_vtkPainterDeviceAdapterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPainterDeviceAdapter_StaticNew,
    PyvtkPainterDeviceAdapter_Methods,
    "vtkPainterDeviceAdapter", modulename,
    NULL, NULL,
    PyvtkPainterDeviceAdapter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPainterDeviceAdapter_Doc()
{
  static const char *docstring[] = {
    "vtkPainterDeviceAdapter - An adapter between a vtkPainter and a\nrendering device.\n\n",
    "Superclass: vtkObject\n\n",
    "This class is an adapter between a vtkPainter and a rendering device\n(such as an OpenGL machine).  Having an abstract adapter allows\nvtkPainters to be re-used for any rendering system.\n\nAlthough VTK really only uses OpenGL right now, there are reasons to\nswap out the rendering functions.  Sometimes MESA with mangled names\nis used.  Also, different shader extensions use different functions.\nFurther",
    "more, Cg also has its own interface.\n\nThe interface for this class should be familier to anyone experienced\nwith OpenGL.\n\nSee Also:\n\nvtkPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPainterDeviceAdapter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPainterDeviceAdapterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPainterDeviceAdapter", o) != 0)
    {
    Py_DECREF(o);
    }

}

