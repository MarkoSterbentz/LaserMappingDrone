// python wrapper for vtkPVComparativeAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVComparativeAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVComparativeAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVComparativeAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVComparativeAnimationCue_Doc();


static PyObject *
PyvtkPVComparativeAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVComparativeAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVComparativeAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVComparativeAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVComparativeAnimationCue::NewInstance());

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
PyvtkPVComparativeAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVComparativeAnimationCue *tempr = vtkPVComparativeAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedProxy(temp0);
      }
    else
      {
      op->vtkPVComparativeAnimationCue::SetAnimatedProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimatedProxy() :
      op->vtkPVComparativeAnimationCue::GetAnimatedProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_RemoveAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAnimatedProxy();
      }
    else
      {
      op->vtkPVComparativeAnimationCue::RemoveAnimatedProxy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedPropertyName(temp0);
      }
    else
      {
      op->vtkPVComparativeAnimationCue::SetAnimatedPropertyName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedPropertyName() :
      op->vtkPVComparativeAnimationCue::GetAnimatedPropertyName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedDomainName(temp0);
      }
    else
      {
      op->vtkPVComparativeAnimationCue::SetAnimatedDomainName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedDomainName() :
      op->vtkPVComparativeAnimationCue::GetAnimatedDomainName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedElement(temp0);
      }
    else
      {
      op->vtkPVComparativeAnimationCue::SetAnimatedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimatedElement() :
      op->vtkPVComparativeAnimationCue::GetAnimatedElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPVComparativeAnimationCue::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVComparativeAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPVComparativeAnimationCue::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPVComparativeAnimationCue::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_UpdateXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateXRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateXRange(temp0, temp1, temp2, temp3);
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
PyvtkPVComparativeAnimationCue_UpdateXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateXRange_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateXRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateXRange");
  return NULL;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateYRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateYRange(temp0, temp1, temp2, temp3);
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
PyvtkPVComparativeAnimationCue_UpdateYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateYRange_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateYRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateYRange");
  return NULL;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1, temp2);
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
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1, temp2, temp3);
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
PyvtkPVComparativeAnimationCue_UpdateWholeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s1(self, args);
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s2(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateWholeRange");
  return NULL;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateValue(temp0, temp1, temp2, temp3);
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
PyvtkPVComparativeAnimationCue_UpdateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateValue_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateValue");
  return NULL;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateAnimatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::UpdateAnimatedValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::GetValue(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

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
      op->vtkPVComparativeAnimationCue::GetValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkPVComparativeAnimationCue_AppendCommandInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendCommandInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->AppendCommandInfo(temp0) :
      op->vtkPVComparativeAnimationCue::AppendCommandInfo(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_LoadCommandInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCommandInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->LoadCommandInfo(temp0) :
      op->vtkPVComparativeAnimationCue::LoadCommandInfo(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVComparativeAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkPVComparativeAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVComparativeAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVComparativeAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVComparativeAnimationCue\nC++: vtkPVComparativeAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVComparativeAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVComparativeAnimationCue\nC++: vtkPVComparativeAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnimatedProxy", PyvtkPVComparativeAnimationCue_SetAnimatedProxy, METH_VARARGS,
   (char*)"V.SetAnimatedProxy(vtkSMProxy)\nC++: void SetAnimatedProxy(vtkSMProxy *)\n\nSet/Get the animated proxy.\n"},
  {(char*)"GetAnimatedProxy", PyvtkPVComparativeAnimationCue_GetAnimatedProxy, METH_VARARGS,
   (char*)"V.GetAnimatedProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {(char*)"RemoveAnimatedProxy", PyvtkPVComparativeAnimationCue_RemoveAnimatedProxy, METH_VARARGS,
   (char*)"V.RemoveAnimatedProxy()\nC++: void RemoveAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {(char*)"SetAnimatedPropertyName", PyvtkPVComparativeAnimationCue_SetAnimatedPropertyName, METH_VARARGS,
   (char*)"V.SetAnimatedPropertyName(string)\nC++: void SetAnimatedPropertyName(char *)\n\nSet/Get the animated property name.\n"},
  {(char*)"GetAnimatedPropertyName", PyvtkPVComparativeAnimationCue_GetAnimatedPropertyName, METH_VARARGS,
   (char*)"V.GetAnimatedPropertyName() -> string\nC++: char *GetAnimatedPropertyName()\n\nSet/Get the animated property name.\n"},
  {(char*)"SetAnimatedDomainName", PyvtkPVComparativeAnimationCue_SetAnimatedDomainName, METH_VARARGS,
   (char*)"V.SetAnimatedDomainName(string)\nC++: void SetAnimatedDomainName(char *)\n\nSet/Get the animated domain name.\n"},
  {(char*)"GetAnimatedDomainName", PyvtkPVComparativeAnimationCue_GetAnimatedDomainName, METH_VARARGS,
   (char*)"V.GetAnimatedDomainName() -> string\nC++: char *GetAnimatedDomainName()\n\nSet/Get the animated domain name.\n"},
  {(char*)"SetAnimatedElement", PyvtkPVComparativeAnimationCue_SetAnimatedElement, METH_VARARGS,
   (char*)"V.SetAnimatedElement(int)\nC++: void SetAnimatedElement(int a)\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {(char*)"GetAnimatedElement", PyvtkPVComparativeAnimationCue_GetAnimatedElement, METH_VARARGS,
   (char*)"V.GetAnimatedElement() -> int\nC++: int GetAnimatedElement()\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {(char*)"SetEnabled", PyvtkPVComparativeAnimationCue_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool a)\n\nEnable/Disable the cue.\n"},
  {(char*)"GetEnabled", PyvtkPVComparativeAnimationCue_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nEnable/Disable the cue.\n"},
  {(char*)"EnabledOn", PyvtkPVComparativeAnimationCue_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable the cue.\n"},
  {(char*)"EnabledOff", PyvtkPVComparativeAnimationCue_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable the cue.\n"},
  {(char*)"UpdateXRange", PyvtkPVComparativeAnimationCue_UpdateXRange, METH_VARARGS,
   (char*)"V.UpdateXRange(int, float, float)\nC++: void UpdateXRange(int y, double minx, double maxx)\nV.UpdateXRange(int, [float, ...], [float, ...], int)\nC++: void UpdateXRange(int y, double *minx, double *maxx,\n    unsigned int numvalues)\n\n"},
  {(char*)"UpdateYRange", PyvtkPVComparativeAnimationCue_UpdateYRange, METH_VARARGS,
   (char*)"V.UpdateYRange(int, float, float)\nC++: void UpdateYRange(int x, double miny, double maxy)\nV.UpdateYRange(int, [float, ...], [float, ...], int)\nC++: void UpdateYRange(int x, double *minx, double *maxx,\n    unsigned int numvalues)\n\n"},
  {(char*)"UpdateWholeRange", PyvtkPVComparativeAnimationCue_UpdateWholeRange, METH_VARARGS,
   (char*)"V.UpdateWholeRange(float, float)\nC++: void UpdateWholeRange(double mint, double maxt)\nV.UpdateWholeRange([float, ...], [float, ...], int)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues)\nV.UpdateWholeRange([float, ...], [float, ...], int, bool)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues, bool vertical_first)\n\n"},
  {(char*)"UpdateValue", PyvtkPVComparativeAnimationCue_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(int, int, float)\nC++: void UpdateValue(int x, int y, double value)\nV.UpdateValue(int, int, [float, ...], int)\nC++: void UpdateValue(int x, int y, double *value,\n    unsigned int numValues)\n\n"},
  {(char*)"UpdateAnimatedValue", PyvtkPVComparativeAnimationCue_UpdateAnimatedValue, METH_VARARGS,
   (char*)"V.UpdateAnimatedValue(int, int, int, int)\nC++: void UpdateAnimatedValue(int x, int y, int dx, int dy)\n\nUpdate the animated property's value based on those specified\nusing the Update.* methods. (x,y) is the location in the\ncomparative grid, while (dx, dy) are the dimensions of the\ncomparative grid.\n"},
  {(char*)"GetValue", PyvtkPVComparativeAnimationCue_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int, int, int, int) -> float\nC++: double GetValue(int x, int y, int dx, int dy)\n\nComputes the value for a particular location in the comparative\ngrid. (x,y) is the location in the comparative grid, while (dx,\ndy) are the dimensions of the comparative grid.\n"},
  {(char*)"GetValues", PyvtkPVComparativeAnimationCue_GetValues, METH_VARARGS,
   (char*)"V.GetValues(int, int, int, int, int) -> (float, ...)\nC++: double *GetValues(int x, int y, int dx, int dy,\n    unsigned int &numValues)\n\nNOTE: Returned values is only valid until the next call to this\nmethod. Return value is only valid when numValues > 0.\n"},
  {(char*)"AppendCommandInfo", PyvtkPVComparativeAnimationCue_AppendCommandInfo, METH_VARARGS,
   (char*)"V.AppendCommandInfo(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *AppendCommandInfo(\n    vtkPVXMLElement *proxyElem)\n\n"},
  {(char*)"LoadCommandInfo", PyvtkPVComparativeAnimationCue_LoadCommandInfo, METH_VARARGS,
   (char*)"V.LoadCommandInfo(vtkPVXMLElement) -> int\nC++: int LoadCommandInfo(vtkPVXMLElement *proxyElement)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVComparativeAnimationCue_StaticNew()
{
  return vtkPVComparativeAnimationCue::New();
}

PyObject *PyVTKClass_vtkPVComparativeAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVComparativeAnimationCue_StaticNew,
    PyvtkPVComparativeAnimationCue_Methods,
    "vtkPVComparativeAnimationCue", modulename,
    NULL, NULL,
    PyvtkPVComparativeAnimationCue_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVComparativeAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkPVComparativeAnimationCue - cue used for parameter animation by the\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVComparativeAnimationCue is a animation cue used for parameter\nanimation by the ComparativeView. It provides a non-conventional API\ni.e. without using properties to allow the user to setup parameter\nvalues over the comparative grid.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVComparativeAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVComparativeAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVComparativeAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

