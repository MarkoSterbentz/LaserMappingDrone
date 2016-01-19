// python wrapper for vtkCompositeControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkCompositeControlPointsItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeControlPointsItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeControlPointsItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkColorTransferControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferControlPointsItemNew
#endif

static const char **PyvtkCompositeControlPointsItem_Doc();

#ifndef DECLARED_PyvtkCompositeControlPointsItem_PointsFunctionType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCompositeControlPointsItem_PointsFunctionType_Type;
#define DECLARED_PyvtkCompositeControlPointsItem_PointsFunctionType_Type
#endif

PyTypeObject PyvtkCompositeControlPointsItem_PointsFunctionType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"PointsFunctionType", // tp_name
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

PyObject *PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeControlPointsItem_PointsFunctionType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeControlPointsItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeControlPointsItem::NewInstance());

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
PyvtkCompositeControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeControlPointsItem *tempr = vtkCompositeControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColorTransferFunction(temp0);
      }
    else
      {
      op->vtkCompositeControlPointsItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetOpacityFunction(temp0);
      }
    else
      {
      op->vtkCompositeControlPointsItem::SetOpacityFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetOpacityFunction() :
      op->vtkCompositeControlPointsItem::GetOpacityFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointsFunction(temp0);
      }
    else
      {
      op->vtkCompositeControlPointsItem::SetPointsFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointsFunction() :
      op->vtkCompositeControlPointsItem::GetPointsFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->AddPoint(temp0) :
      op->vtkCompositeControlPointsItem::AddPoint(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkCompositeControlPointsItem::RemovePoint(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOpacityPointHandles(temp0);
      }
    else
      {
      op->vtkCompositeControlPointsItem::SetUseOpacityPointHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOpacityPointHandles() :
      op->vtkCompositeControlPointsItem::GetUseOpacityPointHandles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeControlPointsItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeControlPointsItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeControlPointsItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeControlPointsItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorTransferFunction", PyvtkCompositeControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: virtual void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the color transfer function to draw its points\n"},
  {(char*)"SetOpacityFunction", PyvtkCompositeControlPointsItem_SetOpacityFunction, METH_VARARGS,
   (char*)"V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\n"},
  {(char*)"GetOpacityFunction", PyvtkCompositeControlPointsItem_GetOpacityFunction, METH_VARARGS,
   (char*)"V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {(char*)"SetPointsFunction", PyvtkCompositeControlPointsItem_SetPointsFunction, METH_VARARGS,
   (char*)"V.SetPointsFunction(int)\nC++: void SetPointsFunction(int a)\n\nPointsFunction controls wether the points represent the\nColorTransferFunction, OpacityTransferFunction or both. If\nColorPointsFunction, only the points of the ColorTransfer\nfunction are used. If OpacityPointsFunction, only the points of\nthe Opacity function are used If ColorAndOpacityPointsFunction,\nthe points of both functions are shared by both functions.\nColorAndOpacityPointsFunction by default. Note: Set the mode\nbefore the functions are set. ColorPointsFunction is not fully\nsupported.\n"},
  {(char*)"GetPointsFunction", PyvtkCompositeControlPointsItem_GetPointsFunction, METH_VARARGS,
   (char*)"V.GetPointsFunction() -> int\nC++: int GetPointsFunction()\n\nPointsFunction controls wether the points represent the\nColorTransferFunction, OpacityTransferFunction or both. If\nColorPointsFunction, only the points of the ColorTransfer\nfunction are used. If OpacityPointsFunction, only the points of\nthe Opacity function are used If ColorAndOpacityPointsFunction,\nthe points of both functions are shared by both functions.\nColorAndOpacityPointsFunction by default. Note: Set the mode\nbefore the functions are set. ColorPointsFunction is not fully\nsupported.\n"},
  {(char*)"AddPoint", PyvtkCompositeControlPointsItem_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint([float, ...]) -> int\nC++: virtual vtkIdType AddPoint(double *newPos)\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"RemovePoint", PyvtkCompositeControlPointsItem_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint([float, ...]) -> int\nC++: virtual vtkIdType RemovePoint(double *pos)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"SetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles, METH_VARARGS,
   (char*)"V.SetUseOpacityPointHandles(bool)\nC++: void SetUseOpacityPointHandles(bool a)\n\nIf UseOpacityPointHandles is true, when the current point is\ndouble clicked, a vtkPiecewisePointHandleItem will show up so\nthat the sharpness and mid point can be adjusted in the scene\nwith those handles False by default.\n"},
  {(char*)"GetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles, METH_VARARGS,
   (char*)"V.GetUseOpacityPointHandles() -> bool\nC++: bool GetUseOpacityPointHandles()\n\nIf UseOpacityPointHandles is true, when the current point is\ndouble clicked, a vtkPiecewisePointHandleItem will show up so\nthat the sharpness and mid point can be adjusted in the scene\nwith those handles False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeControlPointsItem_StaticNew()
{
  return vtkCompositeControlPointsItem::New();
}

PyObject *PyVTKClass_vtkCompositeControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeControlPointsItem_StaticNew,
    PyvtkCompositeControlPointsItem_Methods,
    "vtkCompositeControlPointsItem", modulename,
    NULL, NULL,
    PyvtkCompositeControlPointsItem_Doc(),
    PyVTKClass_vtkColorTransferControlPointsItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type);
    PyvtkCompositeControlPointsItem_PointsFunctionType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCompositeControlPointsItem_PointsFunctionType_Type;
    if (o && PyDict_SetItemString(d, (char *)"PointsFunctionType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkCompositeControlPointsItem::PointsFunctionType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "ColorPointsFunction", vtkCompositeControlPointsItem::ColorPointsFunction },
          { "OpacityPointsFunction", vtkCompositeControlPointsItem::OpacityPointsFunction },
          { "ColorAndOpacityPointsFunction", vtkCompositeControlPointsItem::ColorAndOpacityPointsFunction },
        };

      o = PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCompositeControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeControlPointsItem - Control points for\n\n",
    "Superclass: vtkColorTransferControlPointsItem\n\n",
    "vtkCompositeControlPointsItem draws the control points of a\nvtkPiecewiseFunction and a vtkColorTransferFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkColorTransferControlPointsItem\nvtkCompositeTransferFunctionItem vtkPiecewisePointHandleItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

