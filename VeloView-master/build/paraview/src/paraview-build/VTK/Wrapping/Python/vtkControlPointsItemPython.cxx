// python wrapper for vtkControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkControlPointsItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkControlPointsItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkControlPointsItem_Doc();


static PyObject *
PyvtkControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkControlPointsItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkControlPointsItem::NewInstance());

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
PyvtkControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkControlPointsItem *tempr = vtkControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkControlPointsItem::GetBounds(temp0);
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
PyvtkControlPointsItem_SetUserBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->SetUserBounds(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkControlPointsItem::SetUserBounds(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUserBounds(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetUserBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkControlPointsItem_SetUserBounds_s1(self, args);
    case 1:
      return PyvtkControlPointsItem_SetUserBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUserBounds");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_GetUserBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetUserBounds() :
      op->vtkControlPointsItem::GetUserBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetValidBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->SetValidBounds(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkControlPointsItem::SetValidBounds(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetValidBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetValidBounds(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetValidBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetValidBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkControlPointsItem_SetValidBounds_s1(self, args);
    case 1:
      return PyvtkControlPointsItem_SetValidBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValidBounds");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_GetValidBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValidBounds() :
      op->vtkControlPointsItem::GetValidBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetScreenPointRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenPointRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetScreenPointRadius() :
      op->vtkControlPointsItem::GetScreenPointRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetScreenPointRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenPointRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenPointRadius(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetScreenPointRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkControlPointsItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SelectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SelectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SelectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

    if (ap.IsBound())
      {
      op->SelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SelectPoint(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_SelectPoint_Methods[] = {
  {NULL, PyvtkControlPointsItem_SelectPoint_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkControlPointsItem_SelectPoint_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_SelectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_SelectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectPoint");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_SelectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectAllPoints();
      }
    else
      {
      op->vtkControlPointsItem::SelectAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DeselectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeselectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::DeselectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_DeselectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

    if (ap.IsBound())
      {
      op->DeselectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::DeselectPoint(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_DeselectPoint_Methods[] = {
  {NULL, PyvtkControlPointsItem_DeselectPoint_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkControlPointsItem_DeselectPoint_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_DeselectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_DeselectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DeselectPoint");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_DeselectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeselectAllPoints();
      }
    else
      {
      op->vtkControlPointsItem::DeselectAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleSelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ToggleSelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::ToggleSelectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleSelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

    if (ap.IsBound())
      {
      op->ToggleSelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::ToggleSelectPoint(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_ToggleSelectPoint_Methods[] = {
  {NULL, PyvtkControlPointsItem_ToggleSelectPoint_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkControlPointsItem_ToggleSelectPoint_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_ToggleSelectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToggleSelectPoint");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkControlPointsItem::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetNumberOfSelectedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfSelectedPoints() :
      op->vtkControlPointsItem::GetNumberOfSelectedPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->FindPoint(temp0) :
      op->vtkControlPointsItem::FindPoint(temp0));

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
PyvtkControlPointsItem_IsOverPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOverPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdType temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->IsOverPoint(temp0, temp1) :
      op->vtkControlPointsItem::IsOverPoint(temp0, temp1));

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
PyvtkControlPointsItem_GetControlPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->GetControlPointId(temp0) :
      op->vtkControlPointsItem::GetControlPointId(temp0));

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
PyvtkControlPointsItem_GetControlPointsIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointsIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->GetControlPointsIds(temp0, temp1);
      }
    else
      {
      op->vtkControlPointsItem::GetControlPointsIds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetStrokeMode() :
      op->vtkControlPointsItem::GetStrokeMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwitchPointsMode(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetSwitchPointsMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSwitchPointsMode() :
      op->vtkControlPointsItem::GetSwitchPointsMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsXMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsXMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPointsXMovable(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetEndPointsXMovable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsXMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsXMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsXMovable() :
      op->vtkControlPointsItem::GetEndPointsXMovable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsYMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsYMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPointsYMovable(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetEndPointsYMovable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsYMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsYMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsYMovable() :
      op->vtkControlPointsItem::GetEndPointsYMovable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsMovable() :
      op->vtkControlPointsItem::GetEndPointsMovable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsRemovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsRemovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPointsRemovable(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetEndPointsRemovable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsRemovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsRemovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsRemovable() :
      op->vtkControlPointsItem::GetEndPointsRemovable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetShowLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLabels(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetShowLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetShowLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowLabels() :
      op->vtkControlPointsItem::GetShowLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkControlPointsItem::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = op->AddPoint(temp0);

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
PyvtkControlPointsItem_RemovePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = op->RemovePoint(temp0);

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
PyvtkControlPointsItem_RemovePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkControlPointsItem::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_RemovePoint_Methods[] = {
  {NULL, PyvtkControlPointsItem_RemovePoint_s1, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkControlPointsItem_RemovePoint_s2, METH_VARARGS,
   (char*)"@L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_RemovePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemovePoint");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_RemoveCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveCurrentPoint();
      }
    else
      {
      op->vtkControlPointsItem::RemoveCurrentPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetControlPoint(temp0, temp1);

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
PyvtkControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->SetControlPoint(temp0, temp1);

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
PyvtkControlPointsItem_MovePoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->MovePoints(*temp0, temp1);
      }
    else
      {
      op->vtkControlPointsItem::MovePoints(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkControlPointsItem_MovePoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->MovePoints(*temp0, temp1);
      }
    else
      {
      op->vtkControlPointsItem::MovePoints(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkControlPointsItem_MovePoints_Methods[] = {
  {NULL, PyvtkControlPointsItem_MovePoints_s1, METH_VARARGS,
   (char*)"@OO &vtkVector2f *vtkIdTypeArray"},
  {NULL, PyvtkControlPointsItem_MovePoints_s2, METH_VARARGS,
   (char*)"@O|O &vtkVector2f bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_MovePoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_MovePoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkControlPointsItem_MovePoints_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MovePoints");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_SpreadPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpreadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SpreadPoints(temp0, temp1);
      }
    else
      {
      op->vtkControlPointsItem::SpreadPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SpreadPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpreadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SpreadPoints(temp0, temp1);
      }
    else
      {
      op->vtkControlPointsItem::SpreadPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_SpreadPoints_Methods[] = {
  {NULL, PyvtkControlPointsItem_SpreadPoints_s1, METH_VARARGS,
   (char*)"@fO *vtkIdTypeArray"},
  {NULL, PyvtkControlPointsItem_SpreadPoints_s2, METH_VARARGS,
   (char*)"@f|O bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkControlPointsItem_SpreadPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_SpreadPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkControlPointsItem_SpreadPoints_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SpreadPoints");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_GetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCurrentPoint() :
      op->vtkControlPointsItem::GetCurrentPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetCurrentPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSelectedPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectedPointPen() :
      op->vtkControlPointsItem::GetSelectedPointPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSelectedPointBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetSelectedPointBrush() :
      op->vtkControlPointsItem::GetSelectedPointBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ResetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetBounds();
      }
    else
      {
      op->vtkControlPointsItem::ResetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkControlPointsItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkControlPointsItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkControlPointsItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkControlPointsItem\nC++: vtkControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkControlPointsItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkControlPointsItem\nC++: vtkControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkControlPointsItem_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, typically the bound of all the control points\nexcept if custom bounds have been set \\sa SetUserBounds.\n"},
  {(char*)"SetUserBounds", PyvtkControlPointsItem_SetUserBounds, METH_VARARGS,
   (char*)"V.SetUserBounds(float, float, float, float)\nC++: void SetUserBounds(double, double, double, double)\nV.SetUserBounds((float, float, float, float))\nC++: void SetUserBounds(double a[4])\n\n"},
  {(char*)"GetUserBounds", PyvtkControlPointsItem_GetUserBounds, METH_VARARGS,
   (char*)"V.GetUserBounds() -> (float, float, float, float)\nC++: double *GetUserBounds()\n\n"},
  {(char*)"SetValidBounds", PyvtkControlPointsItem_SetValidBounds, METH_VARARGS,
   (char*)"V.SetValidBounds(float, float, float, float)\nC++: void SetValidBounds(double, double, double, double)\nV.SetValidBounds((float, float, float, float))\nC++: void SetValidBounds(double a[4])\n\n"},
  {(char*)"GetValidBounds", PyvtkControlPointsItem_GetValidBounds, METH_VARARGS,
   (char*)"V.GetValidBounds() -> (float, float, float, float)\nC++: double *GetValidBounds()\n\n"},
  {(char*)"GetScreenPointRadius", PyvtkControlPointsItem_GetScreenPointRadius, METH_VARARGS,
   (char*)"V.GetScreenPointRadius() -> float\nC++: float GetScreenPointRadius()\n\nGet/set the radius for screen points. Default is 6.f\n"},
  {(char*)"SetScreenPointRadius", PyvtkControlPointsItem_SetScreenPointRadius, METH_VARARGS,
   (char*)"V.SetScreenPointRadius(float)\nC++: void SetScreenPointRadius(float a)\n\nGet/set the radius for screen points. Default is 6.f\n"},
  {(char*)"Paint", PyvtkControlPointsItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the points with a fixed size (cosmetic) which doesn't\ndepend on the scene zoom factor. Selected and unselected points\nare drawn with a different color.\n"},
  {(char*)"SelectPoint", PyvtkControlPointsItem_SelectPoint, METH_VARARGS,
   (char*)"V.SelectPoint(int)\nC++: void SelectPoint(vtkIdType pointId)\nV.SelectPoint([float, ...])\nC++: void SelectPoint(double *currentPoint)\n\nSelect a point by its ID\n"},
  {(char*)"SelectAllPoints", PyvtkControlPointsItem_SelectAllPoints, METH_VARARGS,
   (char*)"V.SelectAllPoints()\nC++: void SelectAllPoints()\n\nSelect all the points\n"},
  {(char*)"DeselectPoint", PyvtkControlPointsItem_DeselectPoint, METH_VARARGS,
   (char*)"V.DeselectPoint(int)\nC++: void DeselectPoint(vtkIdType pointId)\nV.DeselectPoint([float, ...])\nC++: void DeselectPoint(double *currentPoint)\n\nUnselect a point by its ID\n"},
  {(char*)"DeselectAllPoints", PyvtkControlPointsItem_DeselectAllPoints, METH_VARARGS,
   (char*)"V.DeselectAllPoints()\nC++: void DeselectAllPoints()\n\nUnselect all the previously selected points\n"},
  {(char*)"ToggleSelectPoint", PyvtkControlPointsItem_ToggleSelectPoint, METH_VARARGS,
   (char*)"V.ToggleSelectPoint(int)\nC++: void ToggleSelectPoint(vtkIdType pointId)\nV.ToggleSelectPoint([float, ...])\nC++: void ToggleSelectPoint(double *currentPoint)\n\nToggle the selection of a point by its ID. If the point was\nselected then unselect it, otherwise select it.\n"},
  {(char*)"SelectPoints", PyvtkControlPointsItem_SelectPoints, METH_VARARGS,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"GetNumberOfSelectedPoints", PyvtkControlPointsItem_GetNumberOfSelectedPoints, METH_VARARGS,
   (char*)"V.GetNumberOfSelectedPoints() -> int\nC++: vtkIdType GetNumberOfSelectedPoints()\n\nReturn the number of selected points.\n"},
  {(char*)"FindPoint", PyvtkControlPointsItem_FindPoint, METH_VARARGS,
   (char*)"V.FindPoint([float, ...]) -> int\nC++: vtkIdType FindPoint(double *pos)\n\nReturns the vtkIdType of the point given its coordinates and a\ntolerance based on the screen point size.\n"},
  {(char*)"IsOverPoint", PyvtkControlPointsItem_IsOverPoint, METH_VARARGS,
   (char*)"V.IsOverPoint([float, ...], int) -> bool\nC++: bool IsOverPoint(double *pos, vtkIdType pointId)\n\nReturns true if pos is above the pointId point, false otherwise.\nIt uses the size of the drawn point. To search what point is\nunder the pos, use the more efficient \\sa FindPoint() instead.\n"},
  {(char*)"GetControlPointId", PyvtkControlPointsItem_GetControlPointId, METH_VARARGS,
   (char*)"V.GetControlPointId([float, ...]) -> int\nC++: vtkIdType GetControlPointId(double *pos)\n\nReturns the id of the control point exactly matching pos, -1 if\nnot found.\n"},
  {(char*)"GetControlPointsIds", PyvtkControlPointsItem_GetControlPointsIds, METH_VARARGS,
   (char*)"V.GetControlPointsIds(vtkIdTypeArray, bool)\nC++: void GetControlPointsIds(vtkIdTypeArray *ids,\n    bool excludeFirstAndLast=false)\n\nUtility function that returns an array of all the control points\nIDs Typically: [0, 1, 2, ... n -1] where n is the point count Can\nexclude the first and last point ids from the array.\n"},
  {(char*)"GetStrokeMode", PyvtkControlPointsItem_GetStrokeMode, METH_VARARGS,
   (char*)"V.GetStrokeMode() -> bool\nC++: bool GetStrokeMode()\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {(char*)"SetSwitchPointsMode", PyvtkControlPointsItem_SetSwitchPointsMode, METH_VARARGS,
   (char*)"V.SetSwitchPointsMode(bool)\nC++: void SetSwitchPointsMode(bool a)\n\nIf DrawPoints is false, SwitchPoints controls the behavior when a\ncontrol point is dragged past another point. The crossed point\nbecomes current (true) or the current point is blocked/stopped\n(false). False by default.\n"},
  {(char*)"GetSwitchPointsMode", PyvtkControlPointsItem_GetSwitchPointsMode, METH_VARARGS,
   (char*)"V.GetSwitchPointsMode() -> bool\nC++: bool GetSwitchPointsMode()\n\nIf DrawPoints is false, SwitchPoints controls the behavior when a\ncontrol point is dragged past another point. The crossed point\nbecomes current (true) or the current point is blocked/stopped\n(false). False by default.\n"},
  {(char*)"SetEndPointsXMovable", PyvtkControlPointsItem_SetEndPointsXMovable, METH_VARARGS,
   (char*)"V.SetEndPointsXMovable(bool)\nC++: void SetEndPointsXMovable(bool a)\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {(char*)"GetEndPointsXMovable", PyvtkControlPointsItem_GetEndPointsXMovable, METH_VARARGS,
   (char*)"V.GetEndPointsXMovable() -> bool\nC++: bool GetEndPointsXMovable()\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {(char*)"SetEndPointsYMovable", PyvtkControlPointsItem_SetEndPointsYMovable, METH_VARARGS,
   (char*)"V.SetEndPointsYMovable(bool)\nC++: void SetEndPointsYMovable(bool a)\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {(char*)"GetEndPointsYMovable", PyvtkControlPointsItem_GetEndPointsYMovable, METH_VARARGS,
   (char*)"V.GetEndPointsYMovable() -> bool\nC++: bool GetEndPointsYMovable()\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {(char*)"GetEndPointsMovable", PyvtkControlPointsItem_GetEndPointsMovable, METH_VARARGS,
   (char*)"V.GetEndPointsMovable() -> bool\nC++: virtual bool GetEndPointsMovable()\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {(char*)"SetEndPointsRemovable", PyvtkControlPointsItem_SetEndPointsRemovable, METH_VARARGS,
   (char*)"V.SetEndPointsRemovable(bool)\nC++: void SetEndPointsRemovable(bool a)\n\nIf EndPointsRemovable is false, the two end points will not be be\nremoved. True by default.\n"},
  {(char*)"GetEndPointsRemovable", PyvtkControlPointsItem_GetEndPointsRemovable, METH_VARARGS,
   (char*)"V.GetEndPointsRemovable() -> bool\nC++: bool GetEndPointsRemovable()\n\nIf EndPointsRemovable is false, the two end points will not be be\nremoved. True by default.\n"},
  {(char*)"SetShowLabels", PyvtkControlPointsItem_SetShowLabels, METH_VARARGS,
   (char*)"V.SetShowLabels(bool)\nC++: void SetShowLabels(bool a)\n\nWhen set to true, labels are shown on the current control point\nand the end points. Default is false.\n"},
  {(char*)"GetShowLabels", PyvtkControlPointsItem_GetShowLabels, METH_VARARGS,
   (char*)"V.GetShowLabels() -> bool\nC++: bool GetShowLabels()\n\nWhen set to true, labels are shown on the current control point\nand the end points. Default is false.\n"},
  {(char*)"SetLabelFormat", PyvtkControlPointsItem_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nGet/Set the label format. Default is \"%.4f, %.4f\".\n"},
  {(char*)"GetLabelFormat", PyvtkControlPointsItem_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nGet/Set the label format. Default is \"%.4f, %.4f\".\n"},
  {(char*)"AddPoint", PyvtkControlPointsItem_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint([float, ...]) -> int\nC++: virtual vtkIdType AddPoint(double *newPos)\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"RemovePoint", PyvtkControlPointsItem_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint([float, ...]) -> int\nC++: virtual vtkIdType RemovePoint(double *pos)\nV.RemovePoint(int) -> int\nC++: vtkIdType RemovePoint(vtkIdType pointId)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {(char*)"RemoveCurrentPoint", PyvtkControlPointsItem_RemoveCurrentPoint, METH_VARARGS,
   (char*)"V.RemoveCurrentPoint()\nC++: void RemoveCurrentPoint()\n\nRemove the current point.\n"},
  {(char*)"GetNumberOfPoints", PyvtkControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points\n"},
  {(char*)"GetControlPoint", PyvtkControlPointsItem_GetControlPoint, METH_VARARGS,
   (char*)"V.GetControlPoint(int, [float, ...])\nC++: virtual void GetControlPoint(vtkIdType index, double *point)\n\nReturns the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index. point\nmust be a double array of size 4.\n"},
  {(char*)"SetControlPoint", PyvtkControlPointsItem_SetControlPoint, METH_VARARGS,
   (char*)"V.SetControlPoint(int, [float, ...])\nC++: virtual void SetControlPoint(vtkIdType index, double *point)\n\nSets the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index.\n"},
  {(char*)"MovePoints", PyvtkControlPointsItem_MovePoints, METH_VARARGS,
   (char*)"V.MovePoints(vtkVector2f, vtkIdTypeArray)\nC++: void MovePoints(const vtkVector2f &translation,\n    vtkIdTypeArray *pointIds)\nV.MovePoints(vtkVector2f, bool)\nC++: void MovePoints(const vtkVector2f &translation,\n    bool dontMoveFirstAndLast=false)\n\nMove the points referred by pointIds by a given translation. The\nnew positions won't be outside the bounds. MovePoints is\ntypically called with GetControlPointsIds() or GetSelection().\nWarning: if you pass this->GetSelection(), the array is deleted\nafter each individual point move. Increase the reference count of\nthe array. See also MoveAllPoints()\n"},
  {(char*)"SpreadPoints", PyvtkControlPointsItem_SpreadPoints, METH_VARARGS,
   (char*)"V.SpreadPoints(float, vtkIdTypeArray)\nC++: void SpreadPoints(float factor, vtkIdTypeArray *pointIds)\nV.SpreadPoints(float, bool)\nC++: void SpreadPoints(float factor,\n    bool dontSpreadFirstAndLast=false)\n\nSpread the points referred by pointIds If factor > 0, points are\nmoved away from each other. If factor < 0, points are moved\ncloser to each other SpreadPoints is typically called with\nGetControlPointsIds() or GetSelection(). Warning: if you pass\nthis->GetSelection(), the array is deleted after each individual\npoint move. Increase the reference count of the array.\n"},
  {(char*)"GetCurrentPoint", PyvtkControlPointsItem_GetCurrentPoint, METH_VARARGS,
   (char*)"V.GetCurrentPoint() -> int\nC++: vtkIdType GetCurrentPoint()\n\nReturns the current point ID selected or -1 if there is no point\ncurrent. No current point by default.\n"},
  {(char*)"SetCurrentPoint", PyvtkControlPointsItem_SetCurrentPoint, METH_VARARGS,
   (char*)"V.SetCurrentPoint(int)\nC++: void SetCurrentPoint(vtkIdType index)\n\nSets the current point selected.\n"},
  {(char*)"GetSelectedPointPen", PyvtkControlPointsItem_GetSelectedPointPen, METH_VARARGS,
   (char*)"V.GetSelectedPointPen() -> vtkPen\nC++: vtkPen *GetSelectedPointPen()\n\nGets the selected point pen and brush.\n"},
  {(char*)"GetSelectedPointBrush", PyvtkControlPointsItem_GetSelectedPointBrush, METH_VARARGS,
   (char*)"V.GetSelectedPointBrush() -> vtkBrush\nC++: vtkBrush *GetSelectedPointBrush()\n\nDepending on the control points item, the brush might not be\ntaken into account.\n"},
  {(char*)"ResetBounds", PyvtkControlPointsItem_ResetBounds, METH_VARARGS,
   (char*)"V.ResetBounds()\nC++: void ResetBounds()\n\nRecompute the bounds next time they are requested. You shouldn't\nhave to call it but it is provided for rare cases.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkControlPointsItem_Methods,
    "vtkControlPointsItem", modulename,
    NULL, NULL,
    PyvtkControlPointsItem_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "CurrentPointChangedEvent", vtkControlPointsItem::CurrentPointChangedEvent },
          { "CurrentPointEditEvent", vtkControlPointsItem::CurrentPointEditEvent },
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

const char **PyvtkControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkControlPointsItem - Abstract class for control points items.\n\n",
    "Superclass: vtkPlot\n\n",
    "vtkControlPointsItem provides control point painting and management\nfor subclasses that provide points (typically control points of a\ntransfer function)\n\nSee Also:\n\nvtkScalarsToColorsItem vtkPiecewiseControlPointsItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

