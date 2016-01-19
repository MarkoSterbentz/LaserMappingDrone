// python wrapper for vtkPiecewiseControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPiecewiseControlPointsItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPiecewiseControlPointsItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPiecewiseControlPointsItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkControlPointsItemNew
#endif

static const char **PyvtkPiecewiseControlPointsItem_Doc();


static PyObject *
PyvtkPiecewiseControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPiecewiseControlPointsItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseControlPointsItem::NewInstance());

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
PyvtkPiecewiseControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPiecewiseControlPointsItem *tempr = vtkPiecewiseControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

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
      op->vtkPiecewiseControlPointsItem::SetPiecewiseFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetPiecewiseFunction() :
      op->vtkPiecewiseControlPointsItem::GetPiecewiseFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

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
      op->vtkPiecewiseControlPointsItem::AddPoint(temp0));

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
PyvtkPiecewiseControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

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
      op->vtkPiecewiseControlPointsItem::RemovePoint(temp0));

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
PyvtkPiecewiseControlPointsItem_SetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStrokeMode(temp0);
      }
    else
      {
      op->vtkPiecewiseControlPointsItem::SetStrokeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseControlPointsItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseControlPointsItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseControlPointsItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPiecewiseControlPointsItem\nC++: vtkPiecewiseControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseControlPointsItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseControlPointsItem\nC++: vtkPiecewiseControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction, METH_VARARGS,
   (char*)"V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {(char*)"GetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction, METH_VARARGS,
   (char*)"V.GetPiecewiseFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetPiecewiseFunction()\n\n"},
  {(char*)"AddPoint", PyvtkPiecewiseControlPointsItem_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint([float, ...]) -> int\nC++: virtual vtkIdType AddPoint(double *newPos)\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"RemovePoint", PyvtkPiecewiseControlPointsItem_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint([float, ...]) -> int\nC++: virtual vtkIdType RemovePoint(double *pos)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"SetStrokeMode", PyvtkPiecewiseControlPointsItem_SetStrokeMode, METH_VARARGS,
   (char*)"V.SetStrokeMode(bool)\nC++: void SetStrokeMode(bool a)\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseControlPointsItem_StaticNew()
{
  return vtkPiecewiseControlPointsItem::New();
}

PyObject *PyVTKClass_vtkPiecewiseControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseControlPointsItem_StaticNew,
    PyvtkPiecewiseControlPointsItem_Methods,
    "vtkPiecewiseControlPointsItem", modulename,
    NULL, NULL,
    PyvtkPiecewiseControlPointsItem_Doc(),
    PyVTKClass_vtkControlPointsItemNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseControlPointsItem - Control points for\n\n",
    "Superclass: vtkControlPointsItem\n\n",
    "vtkPiecewiseControlPointsItem draws the control points of a\nvtkPiecewiseFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkPiecewiseFunctionItem\nvtkCompositeTransferFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

