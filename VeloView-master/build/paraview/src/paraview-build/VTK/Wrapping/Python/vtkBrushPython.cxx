// python wrapper for vtkBrush
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkBrush.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBrush(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBrushNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBrush_Doc();

#ifndef DECLARED_PyvtkBrush_TextureProperty_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkBrush_TextureProperty_Type;
#define DECLARED_PyvtkBrush_TextureProperty_Type
#endif

PyTypeObject PyvtkBrush_TextureProperty_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"TextureProperty", // tp_name
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

PyObject *PyvtkBrush_TextureProperty_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBrush_TextureProperty_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkBrush_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBrush::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrush::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrush::NewInstance());

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
PyvtkBrush_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBrush *tempr = vtkBrush::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColorF(temp0);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColorF(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

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
    if (ap.IsBound())
      {
      op->SetColorF(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBrush_SetColorF_s1(self, args);
    case 3:
      return PyvtkBrush_SetColorF_s2(self, args);
    case 4:
      return PyvtkBrush_SetColorF_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return NULL;
}



static PyObject *
PyvtkBrush_SetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacityF(temp0);
      }
    else
      {
      op->vtkBrush::SetOpacityF(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacityF() :
      op->vtkBrush::GetOpacityF());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0[3];
  unsigned char save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkBrush::SetColor(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBrush::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBrush::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkColor4ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(*temp0);
      }
    else
      {
      op->vtkBrush::SetColor(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBrush_SetColor_Methods[] = {
  {NULL, PyvtkBrush_SetColor_s1, METH_VARARGS,
   (char*)"@O *b"},
  {NULL, PyvtkBrush_SetColor_s4, METH_VARARGS,
   (char*)"@O &vtkColor4ub"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBrush_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBrush_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBrush_SetColor_s2(self, args);
    case 4:
      return PyvtkBrush_SetColor_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkBrush_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkBrush::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkBrush::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColorF(temp0);
      }
    else
      {
      op->vtkBrush::GetColorF(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0[4];
  unsigned char save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkBrush::GetColor(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkBrush::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBrush_GetColor_s1(self, args);
    case 0:
      return PyvtkBrush_GetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkBrush_GetColorObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetColorObject() :
      op->vtkBrush::GetColorObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkBrush::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkBrush::GetTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureProperties(temp0);
      }
    else
      {
      op->vtkBrush::SetTextureProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureProperties() :
      op->vtkBrush::GetTextureProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkBrush::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBrush_Methods[] = {
  {(char*)"GetClassName", PyvtkBrush_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBrush_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBrush_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBrush\nC++: vtkBrush *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBrush_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBrush\nC++: vtkBrush *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorF", PyvtkBrush_SetColorF, METH_VARARGS,
   (char*)"V.SetColorF([float, float, float])\nC++: void SetColorF(double color[3])\nV.SetColorF(float, float, float)\nC++: void SetColorF(double r, double g, double b)\nV.SetColorF(float, float, float, float)\nC++: void SetColorF(double r, double g, double b, double a)\n\nSet the color of the brush with three component doubles (RGB),\nranging from 0.0 to 1.0.\n"},
  {(char*)"SetOpacityF", PyvtkBrush_SetOpacityF, METH_VARARGS,
   (char*)"V.SetOpacityF(float)\nC++: void SetOpacityF(double a)\n\nSet the opacity with a double, ranging from 0.0 (transparent) to\n1.0 (opaque).\n"},
  {(char*)"GetOpacityF", PyvtkBrush_GetOpacityF, METH_VARARGS,
   (char*)"V.GetOpacityF() -> float\nC++: double GetOpacityF()\n\nGet the opacity ranging from 0.0 (transparent) to 1.0(opaque).\n"},
  {(char*)"SetColor", PyvtkBrush_SetColor, METH_VARARGS,
   (char*)"V.SetColor([int, int, int])\nC++: void SetColor(unsigned char color[3])\nV.SetColor(int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b)\nV.SetColor(int, int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(vtkColor4ub)\nC++: void SetColor(const vtkColor4ub &color)\n\nSet the color of the brush with three component unsigned chars\n(RGB), ranging from 0 to 255.\n"},
  {(char*)"SetOpacity", PyvtkBrush_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(int)\nC++: void SetOpacity(unsigned char a)\n\nSet the opacity with an unsigned char, ranging from 0\n(transparent) to 255 (opaque).\n"},
  {(char*)"GetOpacity", PyvtkBrush_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> int\nC++: unsigned char GetOpacity()\n\nGet the opacity ranging from 0 (transparent) to 255(opaque).\n"},
  {(char*)"GetColorF", PyvtkBrush_GetColorF, METH_VARARGS,
   (char*)"V.GetColorF([float, float, float, float])\nC++: void GetColorF(double color[4])\n\nGet the color of the brush - expects a double of length 4 to copy\ninto.\n"},
  {(char*)"GetColor", PyvtkBrush_GetColor, METH_VARARGS,
   (char*)"V.GetColor([int, int, int, int])\nC++: void GetColor(unsigned char color[4])\nV.GetColor() -> (int, ...)\nC++: unsigned char *GetColor()\n\nGet the color of the brush - expects an unsigned char of length\n4.\n"},
  {(char*)"GetColorObject", PyvtkBrush_GetColorObject, METH_VARARGS,
   (char*)"V.GetColorObject() -> vtkColor4ub\nC++: vtkColor4ub GetColorObject()\n\nGet the color of the brush.\n"},
  {(char*)"SetTexture", PyvtkBrush_SetTexture, METH_VARARGS,
   (char*)"V.SetTexture(vtkImageData)\nC++: void SetTexture(vtkImageData *image)\n\nSet the texture that will be used to fill polygons By default, no\ntexture is set. The image will be registered with the brush (ref\ncount is incremented) To disable the texture, set Texture to 0.\n"},
  {(char*)"GetTexture", PyvtkBrush_GetTexture, METH_VARARGS,
   (char*)"V.GetTexture() -> vtkImageData\nC++: vtkImageData *GetTexture()\n\n"},
  {(char*)"SetTextureProperties", PyvtkBrush_SetTextureProperties, METH_VARARGS,
   (char*)"V.SetTextureProperties(int)\nC++: void SetTextureProperties(int a)\n\n"},
  {(char*)"GetTextureProperties", PyvtkBrush_GetTextureProperties, METH_VARARGS,
   (char*)"V.GetTextureProperties() -> int\nC++: int GetTextureProperties()\n\n"},
  {(char*)"DeepCopy", PyvtkBrush_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkBrush)\nC++: void DeepCopy(vtkBrush *brush)\n\nMake a deep copy of the supplied brush.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBrush_StaticNew()
{
  return vtkBrush::New();
}

PyObject *PyVTKClass_vtkBrushNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBrush_StaticNew,
    PyvtkBrush_Methods,
    "vtkBrush", modulename,
    NULL, NULL,
    PyvtkBrush_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkBrush_TextureProperty_Type);
    PyvtkBrush_TextureProperty_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkBrush_TextureProperty_Type;
    if (o && PyDict_SetItemString(d, (char *)"TextureProperty", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkBrush::TextureProperty cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "Nearest", vtkBrush::Nearest },
          { "Linear", vtkBrush::Linear },
          { "Stretch", vtkBrush::Stretch },
          { "Repeat", vtkBrush::Repeat },
        };

      o = PyvtkBrush_TextureProperty_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBrush_Doc()
{
  static const char *docstring[] = {
    "vtkBrush - provides a brush that fills shapes drawn by vtkContext2D.\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkBrush defines the fill (or pattern) of shapes that are drawn\nby vtkContext2D. The color is stored as four unsigned chars (RGBA),\nwhere the opacity defaults to 255, but can be modified separately to\nthe other components. Ideally we would use a lightweight color class\nto store and pass around colors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBrush(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBrushNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBrush", o) != 0)
    {
    Py_DECREF(o);
    }

}

