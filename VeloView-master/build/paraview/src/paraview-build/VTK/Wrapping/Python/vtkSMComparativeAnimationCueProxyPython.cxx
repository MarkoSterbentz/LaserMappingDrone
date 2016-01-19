// python wrapper for vtkSMComparativeAnimationCueProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMComparativeAnimationCueProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMComparativeAnimationCueProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMComparativeAnimationCueProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMComparativeAnimationCueProxy_Doc();


static PyObject *
PyvtkSMComparativeAnimationCueProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMComparativeAnimationCueProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeAnimationCueProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMComparativeAnimationCueProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeAnimationCueProxy::NewInstance());

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
PyvtkSMComparativeAnimationCueProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMComparativeAnimationCueProxy *tempr = vtkSMComparativeAnimationCueProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
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
      op->UpdateXRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateXRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  unsigned int temp3;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->UpdateXRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateXRange(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateXRange");
  return NULL;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
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
      op->UpdateYRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateYRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  unsigned int temp3;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->UpdateYRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateYRange(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateYRange");
  return NULL;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeRange(temp0, temp1);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  unsigned int temp2;
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
      temp1 = new double[2*size1];
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
      op->UpdateWholeRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1, temp2);
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
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  unsigned int temp2;
  bool temp3 = false;
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
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->UpdateWholeRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1, temp2, temp3);
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
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s1(self, args);
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s2(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateWholeRange");
  return NULL;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->UpdateValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->UpdateValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateValue(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateValue_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateValue");
  return NULL;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  unsigned int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSMComparativeAnimationCueProxy::GetValues(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1, temp2, temp3) :
      op->vtkSMComparativeAnimationCueProxy::GetValue(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateAnimatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->UpdateAnimatedValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMComparativeAnimationCueProxy::UpdateAnimatedValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMComparativeAnimationCueProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMPropertyIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMComparativeAnimationCueProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return NULL;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMComparativeAnimationCueProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMComparativeAnimationCueProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMComparativeAnimationCueProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMComparativeAnimationCueProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMComparativeAnimationCueProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMComparativeAnimationCueProxy\nC++: vtkSMComparativeAnimationCueProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMComparativeAnimationCueProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMComparativeAnimationCueProxy\nC++: vtkSMComparativeAnimationCueProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateXRange", PyvtkSMComparativeAnimationCueProxy_UpdateXRange, METH_VARARGS,
   (char*)"V.UpdateXRange(int, float, float)\nC++: void UpdateXRange(int y, double minx, double maxx)\nV.UpdateXRange(int, [float, ...], [float, ...], int)\nC++: void UpdateXRange(int y, double *minx, double *maxx,\n    unsigned int numvalues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"UpdateYRange", PyvtkSMComparativeAnimationCueProxy_UpdateYRange, METH_VARARGS,
   (char*)"V.UpdateYRange(int, float, float)\nC++: void UpdateYRange(int x, double miny, double maxy)\nV.UpdateYRange(int, [float, ...], [float, ...], int)\nC++: void UpdateYRange(int x, double *minx, double *maxx,\n    unsigned int numvalues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"UpdateWholeRange", PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange, METH_VARARGS,
   (char*)"V.UpdateWholeRange(float, float)\nC++: void UpdateWholeRange(double mint, double maxt)\nV.UpdateWholeRange([float, ...], [float, ...], int)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues)\nV.UpdateWholeRange([float, ...], [float, ...], int, bool)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues, bool vertical_first)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"UpdateValue", PyvtkSMComparativeAnimationCueProxy_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(int, int, float)\nC++: void UpdateValue(int x, int y, double value)\nV.UpdateValue(int, int, [float, ...], int)\nC++: void UpdateValue(int x, int y, double *value,\n    unsigned int numValues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"GetValues", PyvtkSMComparativeAnimationCueProxy_GetValues, METH_VARARGS,
   (char*)"V.GetValues(int, int, int, int, int) -> (float, ...)\nC++: double *GetValues(int x, int y, int dx, int dy,\n    unsigned int &numValues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"GetValue", PyvtkSMComparativeAnimationCueProxy_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int, int, int, int) -> float\nC++: double GetValue(int x, int y, int dx, int dy)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"UpdateAnimatedValue", PyvtkSMComparativeAnimationCueProxy_UpdateAnimatedValue, METH_VARARGS,
   (char*)"V.UpdateAnimatedValue(int, int, int, int)\nC++: void UpdateAnimatedValue(int x, int y, int dx, int dy)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {(char*)"SaveXMLState", PyvtkSMComparativeAnimationCueProxy_SaveXMLState, METH_VARARGS,
   (char*)"V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter)\n\nSaves the state of the proxy. This state can be reloaded to\ncreate a new proxy that is identical the present state of this\nproxy. The resulting proxy's XML hieratchy is returned, in\naddition if the root argument is not NULL then it's also inserted\nas a nested element. This call saves all a proxy's properties,\nincluding exposed properties and sub-proxies. More control is\nprovided by the following overload.\n"},
  {(char*)"LoadXMLState", PyvtkSMComparativeAnimationCueProxy_LoadXMLState, METH_VARARGS,
   (char*)"V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: virtual int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator)\n\nLoads the proxy state from the XML element. Returns 0 on\nfailure.locator is used to locate other proxies that may be\nreferred to in the state XML (which happens in case of properties\nof type vtkSMProxyProperty or subclasses). If locator is NULL,\nthen such properties are left unchanged.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMComparativeAnimationCueProxy_StaticNew()
{
  return vtkSMComparativeAnimationCueProxy::New();
}

PyObject *PyVTKClass_vtkSMComparativeAnimationCueProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMComparativeAnimationCueProxy_StaticNew,
    PyvtkSMComparativeAnimationCueProxy_Methods,
    "vtkSMComparativeAnimationCueProxy", modulename,
    NULL, NULL,
    PyvtkSMComparativeAnimationCueProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMComparativeAnimationCueProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMComparativeAnimationCueProxy - cue used for parameter animation\nby\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMComparativeAnimationCueProxy is a animation cue used for\nparameter animation by the vtkSMComparativeViewProxy. It provides a\nnon-conventional API i.e. without using properties to allow the user\nto setup parameter values over the comparative grid.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMComparativeAnimationCueProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMComparativeAnimationCueProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMComparativeAnimationCueProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

