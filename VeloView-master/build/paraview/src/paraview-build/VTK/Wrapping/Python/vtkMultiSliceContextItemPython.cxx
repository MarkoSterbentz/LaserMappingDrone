// python wrapper for vtkMultiSliceContextItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkMultiSliceContextItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiSliceContextItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiSliceContextItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkMultiSliceContextItem_Doc();


static PyObject *
PyvtkMultiSliceContextItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiSliceContextItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiSliceContextItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiSliceContextItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiSliceContextItem::NewInstance());

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
PyvtkMultiSliceContextItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiSliceContextItem *tempr = vtkMultiSliceContextItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkMultiSliceContextItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkMultiSliceContextItem::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetActiveSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveSize(temp0);
      }
    else
      {
      op->vtkMultiSliceContextItem::SetActiveSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetEdgeMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeMargin(temp0);
      }
    else
      {
      op->vtkMultiSliceContextItem::SetEdgeMargin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetVisibleSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetVisibleSlices(temp0) :
      op->vtkMultiSliceContextItem::GetVisibleSlices(temp0));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  bool *temp1 = NULL;
  bool *save1 = NULL;
  bool small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new bool[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetSlices(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiSliceContextItem::SetSlices(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetSliceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliceValue(temp0) :
      op->vtkMultiSliceContextItem::GetSliceValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetNumberOfSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSlices() :
      op->vtkMultiSliceContextItem::GetNumberOfSlices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiSliceContextItem_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiSliceContextItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiSliceContextItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiSliceContextItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiSliceContextItem\nC++: vtkMultiSliceContextItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiSliceContextItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiSliceContextItem\nC++: vtkMultiSliceContextItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkMultiSliceContextItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {(char*)"GetAxis", PyvtkMultiSliceContextItem_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> vtkAxis\nC++: vtkAxis *GetAxis()\n\nReturn the Axis on which that ContextItem is based. In order to\nconfigure that item, just configure the Axis itself. (Range +\nPosition)\n"},
  {(char*)"SetActiveSize", PyvtkMultiSliceContextItem_SetActiveSize, METH_VARARGS,
   (char*)"V.SetActiveSize(int)\nC++: void SetActiveSize(int size)\n\nThe active size define the number of pixel that are going to be\nused for the slider handle.\n"},
  {(char*)"SetEdgeMargin", PyvtkMultiSliceContextItem_SetEdgeMargin, METH_VARARGS,
   (char*)"V.SetEdgeMargin(int)\nC++: void SetEdgeMargin(int margin)\n\nThe margin used on the side of the Axis.\n"},
  {(char*)"GetVisibleSlices", PyvtkMultiSliceContextItem_GetVisibleSlices, METH_VARARGS,
   (char*)"V.GetVisibleSlices(int) -> (float, ...)\nC++: const double *GetVisibleSlices(int &nbSlices)\n\nGet access to the data model. Return a pointer array to the\ndifferents visible slices\n"},
  {(char*)"SetSlices", PyvtkMultiSliceContextItem_SetSlices, METH_VARARGS,
   (char*)"V.SetSlices([float, ...], [bool, ...], int)\nC++: void SetSlices(double *values, bool *visibility,\n    int numberOfSlices)\n\nAllow user to programatically update the data model\n"},
  {(char*)"GetSliceValue", PyvtkMultiSliceContextItem_GetSliceValue, METH_VARARGS,
   (char*)"V.GetSliceValue(int) -> float\nC++: double GetSliceValue(int sliceIndex)\n\nReturn the slice position for a given index\n"},
  {(char*)"GetNumberOfSlices", PyvtkMultiSliceContextItem_GetNumberOfSlices, METH_VARARGS,
   (char*)"V.GetNumberOfSlices() -> int\nC++: int GetNumberOfSlices()\n\nReturn the number of slices\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiSliceContextItem_StaticNew()
{
  return vtkMultiSliceContextItem::New();
}

PyObject *PyVTKClass_vtkMultiSliceContextItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiSliceContextItem_StaticNew,
    PyvtkMultiSliceContextItem_Methods,
    "vtkMultiSliceContextItem", modulename,
    NULL, NULL,
    PyvtkMultiSliceContextItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkMultiSliceContextItem_Doc()
{
  static const char *docstring[] = {
    "vtkMultiSliceContextItem\n\n",
    "Superclass: vtkContextItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiSliceContextItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiSliceContextItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiSliceContextItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

