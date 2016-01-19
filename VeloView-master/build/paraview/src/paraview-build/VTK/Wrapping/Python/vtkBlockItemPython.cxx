// python wrapper for vtkBlockItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkStdString.h"
#include "vtkBlockItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBlockItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBlockItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkBlockItem_Doc();


static PyObject *
PyvtkBlockItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBlockItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlockItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockItem::NewInstance());

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
PyvtkBlockItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBlockItem *tempr = vtkBlockItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkBlockItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0);
      }
    else
      {
      op->vtkBlockItem::SetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkBlockItem::GetLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

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
      op->SetDimensions(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBlockItem::SetDimensions(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkBlockItem::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkBlockItem_SetDimensions_s1(self, args);
    case 1:
      return PyvtkBlockItem_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkBlockItem_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkBlockItem::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlockItem_Methods[] = {
  {(char*)"GetClassName", PyvtkBlockItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlockItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlockItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBlockItem\nC++: vtkBlockItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlockItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlockItem\nC++: vtkBlockItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkBlockItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"SetLabel", PyvtkBlockItem_SetLabel, METH_VARARGS,
   (char*)"V.SetLabel(string)\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the block label.\n"},
  {(char*)"GetLabel", PyvtkBlockItem_GetLabel, METH_VARARGS,
   (char*)"V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\n\nGet the block label.\n"},
  {(char*)"SetDimensions", PyvtkBlockItem_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(float, float, float, float)\nC++: void SetDimensions(float, float, float, float)\nV.SetDimensions((float, float, float, float))\nC++: void SetDimensions(float a[4])\n\n"},
  {(char*)"GetDimensions", PyvtkBlockItem_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> (float, float, float, float)\nC++: float *GetDimensions()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlockItem_StaticNew()
{
  return vtkBlockItem::New();
}

PyObject *PyVTKClass_vtkBlockItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlockItem_StaticNew,
    PyvtkBlockItem_Methods,
    "vtkBlockItem", modulename,
    NULL, NULL,
    PyvtkBlockItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkBlockItem_Doc()
{
  static const char *docstring[] = {
    "vtkBlockItem - a vtkContextItem that draws a block (optional label).\n\n",
    "Superclass: vtkContextItem\n\n",
    "This is a vtkContextItem that can be placed into a vtkContextScene.\nIt draws a block of the given dimensions, and reacts to mouse events.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlockItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlockItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlockItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

