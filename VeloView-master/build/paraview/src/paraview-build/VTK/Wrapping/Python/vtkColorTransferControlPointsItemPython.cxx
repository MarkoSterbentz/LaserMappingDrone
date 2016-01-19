// python wrapper for vtkColorTransferControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColorTransferControlPointsItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorTransferControlPointsItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkControlPointsItemNew
#endif

static const char **PyvtkColorTransferControlPointsItem_Doc();


static PyObject *
PyvtkColorTransferControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorTransferControlPointsItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorTransferControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferControlPointsItem::NewInstance());

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
PyvtkColorTransferControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorTransferControlPointsItem *tempr = vtkColorTransferControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkColorTransferControlPointsItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkColorTransferControlPointsItem::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetControlPoint(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferControlPointsItem::GetControlPoint(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetControlPoint(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferControlPointsItem::SetControlPoint(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::AddPoint(temp0));

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
PyvtkColorTransferControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::RemovePoint(temp0));

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
PyvtkColorTransferControlPointsItem_SetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorFill(temp0);
      }
    else
      {
      op->vtkColorTransferControlPointsItem::SetColorFill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColorFill() :
      op->vtkColorTransferControlPointsItem::GetColorFill());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkColorTransferControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferControlPointsItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferControlPointsItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferControlPointsItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferControlPointsItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorTransferFunction", PyvtkColorTransferControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {(char*)"GetColorTransferFunction", PyvtkColorTransferControlPointsItem_GetColorTransferFunction, METH_VARARGS,
   (char*)"V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkColorTransferControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\n"},
  {(char*)"GetControlPoint", PyvtkColorTransferControlPointsItem_GetControlPoint, METH_VARARGS,
   (char*)"V.GetControlPoint(int, [float, ...])\nC++: virtual void GetControlPoint(vtkIdType index, double *point)\n\n"},
  {(char*)"SetControlPoint", PyvtkColorTransferControlPointsItem_SetControlPoint, METH_VARARGS,
   (char*)"V.SetControlPoint(int, [float, ...])\nC++: virtual void SetControlPoint(vtkIdType index, double *point)\n\nSets the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index.\nChanging the y has no effect, it will always be 0.5\n"},
  {(char*)"AddPoint", PyvtkColorTransferControlPointsItem_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint([float, ...]) -> int\nC++: virtual vtkIdType AddPoint(double *newPos)\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"RemovePoint", PyvtkColorTransferControlPointsItem_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint([float, ...]) -> int\nC++: virtual vtkIdType RemovePoint(double *pos)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"SetColorFill", PyvtkColorTransferControlPointsItem_SetColorFill, METH_VARARGS,
   (char*)"V.SetColorFill(bool)\nC++: void SetColorFill(bool a)\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {(char*)"GetColorFill", PyvtkColorTransferControlPointsItem_GetColorFill, METH_VARARGS,
   (char*)"V.GetColorFill() -> bool\nC++: bool GetColorFill()\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferControlPointsItem_StaticNew()
{
  return vtkColorTransferControlPointsItem::New();
}

PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferControlPointsItem_StaticNew,
    PyvtkColorTransferControlPointsItem_Methods,
    "vtkColorTransferControlPointsItem", modulename,
    NULL, NULL,
    PyvtkColorTransferControlPointsItem_Doc(),
    PyVTKClass_vtkControlPointsItemNew(modulename));
  return cls;
}

const char **PyvtkColorTransferControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferControlPointsItem - Control points for\n\n",
    "Superclass: vtkControlPointsItem\n\n",
    "vtkColorTransferControlPointsItem draws the control points of a\nvtkColorTransferFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkColorTransferFunctionItem\nvtkCompositeTransferFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

