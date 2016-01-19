// python wrapper for vtkPiecewisePointHandleItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkPiecewisePointHandleItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPiecewisePointHandleItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPiecewisePointHandleItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkPiecewisePointHandleItem_Doc();


static PyObject *
PyvtkPiecewisePointHandleItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPiecewisePointHandleItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewisePointHandleItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewisePointHandleItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewisePointHandleItem::NewInstance());

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
PyvtkPiecewisePointHandleItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPiecewisePointHandleItem *tempr = vtkPiecewisePointHandleItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_CallRedraw(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CallRedraw");

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  void  *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkPiecewisePointHandleItem::CallRedraw(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkPiecewisePointHandleItem::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPiecewisePointHandleItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentPointIndex(temp0);
      }
    else
      {
      op->vtkPiecewisePointHandleItem::SetCurrentPointIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_GetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCurrentPointIndex() :
      op->vtkPiecewisePointHandleItem::GetCurrentPointIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetPiecewiseFunction(temp0);
      }
    else
      {
      op->vtkPiecewisePointHandleItem::SetPiecewiseFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsOverHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOverHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IsOverHandle(temp0) :
      op->vtkPiecewisePointHandleItem::IsOverHandle(temp0));

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

static PyMethodDef PyvtkPiecewisePointHandleItem_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewisePointHandleItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewisePointHandleItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewisePointHandleItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPiecewisePointHandleItem\nC++: vtkPiecewisePointHandleItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewisePointHandleItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewisePointHandleItem\nC++: vtkPiecewisePointHandleItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CallRedraw", PyvtkPiecewisePointHandleItem_CallRedraw, METH_VARARGS | METH_STATIC,
   (char*)"V.CallRedraw(vtkObject, int, , )\nC++: static void CallRedraw(vtkObject *sender,\n    unsigned long event, void *receiver, void *params)\n\n"},
  {(char*)"SetParent", PyvtkPiecewisePointHandleItem_SetParent, METH_VARARGS,
   (char*)"V.SetParent(vtkAbstractContextItem)\nC++: virtual void SetParent(vtkAbstractContextItem *parent)\n\nSet the parent item, which should be a vtkControlPointItem\n"},
  {(char*)"Paint", PyvtkPiecewisePointHandleItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"SetCurrentPointIndex", PyvtkPiecewisePointHandleItem_SetCurrentPointIndex, METH_VARARGS,
   (char*)"V.SetCurrentPointIndex(int)\nC++: void SetCurrentPointIndex(vtkIdType a)\n\nThe current point id in the piecewise function being handled.\n"},
  {(char*)"GetCurrentPointIndex", PyvtkPiecewisePointHandleItem_GetCurrentPointIndex, METH_VARARGS,
   (char*)"V.GetCurrentPointIndex() -> int\nC++: vtkIdType GetCurrentPointIndex()\n\nThe current point id in the piecewise function being handled.\n"},
  {(char*)"SetPiecewiseFunction", PyvtkPiecewisePointHandleItem_SetPiecewiseFunction, METH_VARARGS,
   (char*)"V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *piecewiseFunc)\n\n"},
  {(char*)"IsOverHandle", PyvtkPiecewisePointHandleItem_IsOverHandle, METH_VARARGS,
   (char*)"V.IsOverHandle([float, ...]) -> int\nC++: int IsOverHandle(float *pos)\n\nReturns the index of the handle if pos is over any of the\nhandles, otherwise return -1;\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewisePointHandleItem_StaticNew()
{
  return vtkPiecewisePointHandleItem::New();
}

PyObject *PyVTKClass_vtkPiecewisePointHandleItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewisePointHandleItem_StaticNew,
    PyvtkPiecewisePointHandleItem_Methods,
    "vtkPiecewisePointHandleItem", modulename,
    NULL, NULL,
    PyvtkPiecewisePointHandleItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkPiecewisePointHandleItem_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewisePointHandleItem - a vtkContextItem that draws handles\n\n",
    "Superclass: vtkContextItem\n\n",
    "This is a vtkContextItem that can be placed into a vtkContextScene.\nIt draws handles around a given point of a piecewise function so that\nthe curve can be adjusted using these handles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewisePointHandleItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewisePointHandleItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewisePointHandleItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

