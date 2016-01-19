// python wrapper for vtkKdNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkKdNode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKdNode(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKdNodeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkKdNode_Doc();


static PyObject *
PyvtkKdNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKdNode::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdNode::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdNode::NewInstance());

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
PyvtkKdNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKdNode *tempr = vtkKdNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDim(temp0);
      }
    else
      {
      op->vtkKdNode::SetDim(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDim() :
      op->vtkKdNode::GetDim());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDivisionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDivisionPosition() :
      op->vtkKdNode::GetDivisionPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkKdNode::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkKdNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkKdNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdNode_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdNode_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkKdNode_SetBounds_s1(self, args);
    case 1:
      return PyvtkKdNode_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkKdNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkKdNode::GetBounds(temp0);
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


static PyObject *
PyvtkKdNode_SetDataBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkKdNode::SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdNode_SetDataBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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

    if (ap.IsBound())
      {
      op->SetDataBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetDataBounds(temp0);
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

static PyObject *
PyvtkKdNode_SetDataBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkKdNode_SetDataBounds_s1(self, args);
    case 1:
      return PyvtkKdNode_SetDataBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataBounds");
  return NULL;
}



static PyObject *
PyvtkKdNode_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->GetDataBounds(temp0);
      }
    else
      {
      op->vtkKdNode::GetDataBounds(temp0);
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


static PyObject *
PyvtkKdNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkKdNode::GetMinBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkKdNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetMinBounds(temp0);
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


static PyObject *
PyvtkKdNode_SetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaxBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetMaxBounds(temp0);
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


static PyObject *
PyvtkKdNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkKdNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkKdNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinDataBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetMinDataBounds(temp0);
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


static PyObject *
PyvtkKdNode_SetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaxDataBounds(temp0);
      }
    else
      {
      op->vtkKdNode::SetMaxDataBounds(temp0);
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


static PyObject *
PyvtkKdNode_SetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetID(temp0);
      }
    else
      {
      op->vtkKdNode::SetID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkKdNode::GetID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinID() :
      op->vtkKdNode::GetMinID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxID() :
      op->vtkKdNode::GetMaxID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinID(temp0);
      }
    else
      {
      op->vtkKdNode::SetMinID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxID(temp0);
      }
    else
      {
      op->vtkKdNode::SetMaxID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_AddChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  vtkKdNode *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkKdNode") &&
      ap.GetVTKObject(temp1, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->AddChildNodes(temp0, temp1);
      }
    else
      {
      op->vtkKdNode::AddChildNodes(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteChildNodes();
      }
    else
      {
      op->vtkKdNode::DeleteChildNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetLeft() :
      op->vtkKdNode::GetLeft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetLeft(temp0);
      }
    else
      {
      op->vtkKdNode::SetLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetRight() :
      op->vtkKdNode::GetRight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetRight(temp0);
      }
    else
      {
      op->vtkKdNode::SetRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetUp() :
      op->vtkKdNode::GetUp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetUp(temp0);
      }
    else
      {
      op->vtkKdNode::SetUp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkKdNode::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsSphere2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdNode::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkPlanesIntersection *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanesIntersection") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsRegion(temp0, temp1) :
      op->vtkKdNode::IntersectsRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkCell *temp0 = NULL;
  int temp1;
  int temp2 = -1;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2, temp3) :
      op->vtkKdNode::IntersectsCell(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkKdNode_ContainsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    int tempr = (ap.IsBound() ?
      op->ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkKdNode::ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->ContainsPoint(temp0, temp1, temp2, temp3) :
      op->vtkKdNode::ContainsPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3) :
      op->vtkKdNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp3, save3, size3);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkKdNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkKdNode_GetDistance2ToBoundary_s1(self, args);
    case 5:
      return PyvtkKdNode_GetDistance2ToBoundary_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return NULL;
}



static PyObject *
PyvtkKdNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1, temp2) :
      op->vtkKdNode::GetDistance2ToInnerBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_PrintNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintNode(temp0);
      }
    else
      {
      op->vtkKdNode::PrintNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_PrintVerboseNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintVerboseNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintVerboseNode(temp0);
      }
    else
      {
      op->vtkKdNode::PrintVerboseNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdNode_Methods[] = {
  {(char*)"GetClassName", PyvtkKdNode_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdNode_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdNode_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKdNode\nC++: vtkKdNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdNode_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdNode\nC++: vtkKdNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDim", PyvtkKdNode_SetDim, METH_VARARGS,
   (char*)"V.SetDim(int)\nC++: void SetDim(int a)\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {(char*)"GetDim", PyvtkKdNode_GetDim, METH_VARARGS,
   (char*)"V.GetDim() -> int\nC++: int GetDim()\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {(char*)"GetDivisionPosition", PyvtkKdNode_GetDivisionPosition, METH_VARARGS,
   (char*)"V.GetDivisionPosition() -> float\nC++: virtual double GetDivisionPosition()\n\nGet the location of the division plane along the axis the region\nis divided.  See also GetDim().  The result is undertermined if\nthis node is not divided (a leaf node).\n"},
  {(char*)"SetNumberOfPoints", PyvtkKdNode_SetNumberOfPoints, METH_VARARGS,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(int a)\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"GetNumberOfPoints", PyvtkKdNode_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"SetBounds", PyvtkKdNode_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double b[6])\n\nSet/Get the bounds of the spatial region represented by this\nnode.\n  Caller allocates storage for 6-vector in GetBounds.\n"},
  {(char*)"GetBounds", PyvtkKdNode_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, ...])\nC++: void GetBounds(double *b)\n\nSet/Get the bounds of the spatial region represented by this\nnode.\n  Caller allocates storage for 6-vector in GetBounds.\n"},
  {(char*)"SetDataBounds", PyvtkKdNode_SetDataBounds, METH_VARARGS,
   (char*)"V.SetDataBounds(float, float, float, float, float, float)\nC++: void SetDataBounds(double x1, double x2, double y1,\n    double y2, double z1, double z2)\nV.SetDataBounds([float, ...])\nC++: void SetDataBounds(float *v)\n\nSet/Get the bounds of the points contained in this spatial\nregion.\n  This may be smaller than the bounds of the region itself.\n  Caller allocates storage for 6-vector in GetDataBounds.\n"},
  {(char*)"GetDataBounds", PyvtkKdNode_GetDataBounds, METH_VARARGS,
   (char*)"V.GetDataBounds([float, ...])\nC++: void GetDataBounds(double *b)\n\nSet/Get the bounds of the points contained in this spatial\nregion.\n  This may be smaller than the bounds of the region itself.\n  Caller allocates storage for 6-vector in GetDataBounds.\n"},
  {(char*)"GetMinBounds", PyvtkKdNode_GetMinBounds, METH_VARARGS,
   (char*)"V.GetMinBounds() -> (float, float, float)\nC++: double *GetMinBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n  3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {(char*)"GetMaxBounds", PyvtkKdNode_GetMaxBounds, METH_VARARGS,
   (char*)"V.GetMaxBounds() -> (float, float, float)\nC++: double *GetMaxBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n  3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {(char*)"SetMinBounds", PyvtkKdNode_SetMinBounds, METH_VARARGS,
   (char*)"V.SetMinBounds((float, ...))\nC++: void SetMinBounds(const double *mb)\n\nSet the xmin, ymin and zmin value of the bounds of this region\n"},
  {(char*)"SetMaxBounds", PyvtkKdNode_SetMaxBounds, METH_VARARGS,
   (char*)"V.SetMaxBounds((float, ...))\nC++: void SetMaxBounds(const double *mb)\n\nSet the xmax, ymax and zmax value of the bounds of this region\n"},
  {(char*)"GetMinDataBounds", PyvtkKdNode_GetMinDataBounds, METH_VARARGS,
   (char*)"V.GetMinDataBounds() -> (float, float, float)\nC++: double *GetMinDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe\n  3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {(char*)"GetMaxDataBounds", PyvtkKdNode_GetMaxDataBounds, METH_VARARGS,
   (char*)"V.GetMaxDataBounds() -> (float, float, float)\nC++: double *GetMaxDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe\n  3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {(char*)"SetMinDataBounds", PyvtkKdNode_SetMinDataBounds, METH_VARARGS,
   (char*)"V.SetMinDataBounds((float, ...))\nC++: void SetMinDataBounds(const double *mb)\n\nSet the xmin, ymin and zmin value of the bounds of this\n  data within this region\n"},
  {(char*)"SetMaxDataBounds", PyvtkKdNode_SetMaxDataBounds, METH_VARARGS,
   (char*)"V.SetMaxDataBounds((float, ...))\nC++: void SetMaxDataBounds(const double *mb)\n\nSet the xmax, ymax and zmax value of the bounds of this\n  data within this region\n"},
  {(char*)"SetID", PyvtkKdNode_SetID, METH_VARARGS,
   (char*)"V.SetID(int)\nC++: void SetID(int a)\n\nSet/Get the ID associated with the region described by this node.\n If\n  this is not a leaf node, this value should be -1.\n"},
  {(char*)"GetID", PyvtkKdNode_GetID, METH_VARARGS,
   (char*)"V.GetID() -> int\nC++: int GetID()\n\nSet/Get the ID associated with the region described by this node.\n If\n  this is not a leaf node, this value should be -1.\n"},
  {(char*)"GetMinID", PyvtkKdNode_GetMinID, METH_VARARGS,
   (char*)"V.GetMinID() -> int\nC++: int GetMinID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"GetMaxID", PyvtkKdNode_GetMaxID, METH_VARARGS,
   (char*)"V.GetMaxID() -> int\nC++: int GetMaxID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"SetMinID", PyvtkKdNode_SetMinID, METH_VARARGS,
   (char*)"V.SetMinID(int)\nC++: void SetMinID(int a)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"SetMaxID", PyvtkKdNode_SetMaxID, METH_VARARGS,
   (char*)"V.SetMaxID(int)\nC++: void SetMaxID(int a)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"AddChildNodes", PyvtkKdNode_AddChildNodes, METH_VARARGS,
   (char*)"V.AddChildNodes(vtkKdNode, vtkKdNode)\nC++: void AddChildNodes(vtkKdNode *left, vtkKdNode *right)\n\nAdd the left and right children.\n"},
  {(char*)"DeleteChildNodes", PyvtkKdNode_DeleteChildNodes, METH_VARARGS,
   (char*)"V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the left and right children.\n"},
  {(char*)"GetLeft", PyvtkKdNode_GetLeft, METH_VARARGS,
   (char*)"V.GetLeft() -> vtkKdNode\nC++: vtkKdNode *GetLeft()\n\nSet/Get a pointer to the left child of this node.\n"},
  {(char*)"SetLeft", PyvtkKdNode_SetLeft, METH_VARARGS,
   (char*)"V.SetLeft(vtkKdNode)\nC++: void SetLeft(vtkKdNode *left)\n\nSet/Get a pointer to the left child of this node.\n"},
  {(char*)"GetRight", PyvtkKdNode_GetRight, METH_VARARGS,
   (char*)"V.GetRight() -> vtkKdNode\nC++: vtkKdNode *GetRight()\n\nSet/Get a pointer to the right child of this node.\n"},
  {(char*)"SetRight", PyvtkKdNode_SetRight, METH_VARARGS,
   (char*)"V.SetRight(vtkKdNode)\nC++: void SetRight(vtkKdNode *right)\n\nSet/Get a pointer to the right child of this node.\n"},
  {(char*)"GetUp", PyvtkKdNode_GetUp, METH_VARARGS,
   (char*)"V.GetUp() -> vtkKdNode\nC++: vtkKdNode *GetUp()\n\nSet/Get a pointer to the parent of this node.\n"},
  {(char*)"SetUp", PyvtkKdNode_SetUp, METH_VARARGS,
   (char*)"V.SetUp(vtkKdNode)\nC++: void SetUp(vtkKdNode *up)\n\nSet/Get a pointer to the parent of this node.\n"},
  {(char*)"IntersectsBox", PyvtkKdNode_IntersectsBox, METH_VARARGS,
   (char*)"V.IntersectsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int IntersectsBox(double x1, double x2, double y1, double y2,\n     double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region intersects the axis-aligned box\ngiven\n  by the bounds passed in.  Use the possibly smaller bounds of\nthe points\n  within the region if useDataBounds is non-zero.\n"},
  {(char*)"IntersectsSphere2", PyvtkKdNode_IntersectsSphere2, METH_VARARGS,
   (char*)"V.IntersectsSphere2(float, float, float, float, int) -> int\nC++: int IntersectsSphere2(double x, double y, double z,\n    double rSquared, int useDataBounds)\n\nReturn 1 if this spatial region intersects a sphere described by\n  it's center and the square of it's radius. Use the possibly\nsmaller\n  bounds of the points within the region if useDataBounds is\nnon-zero.\n"},
  {(char*)"IntersectsRegion", PyvtkKdNode_IntersectsRegion, METH_VARARGS,
   (char*)"V.IntersectsRegion(vtkPlanesIntersection, int) -> int\nC++: int IntersectsRegion(vtkPlanesIntersection *pi,\n    int useDataBounds)\n\nA vtkPlanesIntersection object represents a convex 3D region\nbounded\n  by planes, and it is capable of computing intersections of\n  boxes with itself.  Return 1 if this spatial region intersects\n  the spatial region described by the vtkPlanesIntersection\nobject.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"IntersectsCell", PyvtkKdNode_IntersectsCell, METH_VARARGS,
   (char*)"V.IntersectsCell(vtkCell, int, int, [float, ...]) -> int\nC++: int IntersectsCell(vtkCell *cell, int useDataBounds,\n    int cellRegion=-1, double *cellBounds=NULL)\n\nReturn 1 if the cell specified intersects this region.  If you\n  already know the ID of the region containing the cell's\ncentroid,\n  provide that as an argument.  If you already know the bounds of\nthe\n  cell, provide that as well, in the form of\nxmin,xmax,ymin,ymax,zmin,\n  zmax.  Either of these may speed the calculation.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"ContainsBox", PyvtkKdNode_ContainsBox, METH_VARARGS,
   (char*)"V.ContainsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int ContainsBox(double x1, double x2, double y1, double y2,\n    double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region entirely contains a box specified\n  by it's bounds. Use the possibly smaller\n  bounds of the points within the region if useDataBounds is\nnon-zero.\n"},
  {(char*)"ContainsPoint", PyvtkKdNode_ContainsPoint, METH_VARARGS,
   (char*)"V.ContainsPoint(float, float, float, int) -> int\nC++: int ContainsPoint(double x, double y, double z,\n    int useDataBounds)\n\nReturn 1 if this spatial region entirely contains the given\npoint.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"GetDistance2ToBoundary", PyvtkKdNode_GetDistance2ToBoundary, METH_VARARGS,
   (char*)"V.GetDistance2ToBoundary(float, float, float, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    int useDataBounds)\nV.GetDistance2ToBoundary(float, float, float, [float, ...], int)\n    -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    double *boundaryPt, int useDataBounds)\n\nCalculate the distance squared from any point to the boundary of\nthis\n  region.  Use the boundary of the points within the region if\nuseDataBounds\n  is non-zero.\n"},
  {(char*)"GetDistance2ToInnerBoundary", PyvtkKdNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   (char*)"V.GetDistance2ToInnerBoundary(float, float, float) -> float\nC++: double GetDistance2ToInnerBoundary(double x, double y,\n    double z)\n\nCalculate the distance from the specified point (which is\nrequired to\n  be inside this spatial region) to an interior boundary.  An\ninterior\n  boundary is one that is not also an boundary of the entire\nspace\n  partitioned by the tree of vtkKdNode's.\n"},
  {(char*)"PrintNode", PyvtkKdNode_PrintNode, METH_VARARGS,
   (char*)"V.PrintNode(int)\nC++: void PrintNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {(char*)"PrintVerboseNode", PyvtkKdNode_PrintVerboseNode, METH_VARARGS,
   (char*)"V.PrintVerboseNode(int)\nC++: void PrintVerboseNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdNode_StaticNew()
{
  return vtkKdNode::New();
}

PyObject *PyVTKClass_vtkKdNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdNode_StaticNew,
    PyvtkKdNode_Methods,
    "vtkKdNode", modulename,
    NULL, NULL,
    PyvtkKdNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkKdNode_Doc()
{
  static const char *docstring[] = {
    "vtkKdNode - This class represents a single spatial region\n\n",
    "Superclass: vtkObject\n\n",
    "See Also:\n\n\n     vtkKdTree vtkOBSPCuts\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

