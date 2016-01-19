// python wrapper for vtkOverlappingAMR
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRBox.h"
#include "vtkOverlappingAMR.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOverlappingAMR(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOverlappingAMRNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUniformGridAMRNew
extern "C" { PyObject *PyVTKClass_vtkUniformGridAMRNew(const char *); }
#define DECLARED_PyVTKClass_vtkUniformGridAMRNew
#endif

static const char **PyvtkOverlappingAMR_Doc();


static PyObject *
PyvtkOverlappingAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkOverlappingAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOverlappingAMR::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverlappingAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverlappingAMR::NewInstance());

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
PyvtkOverlappingAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkOverlappingAMR::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

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
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkOverlappingAMR::SetOrigin(temp0);
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
PyvtkOverlappingAMR_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkOverlappingAMR::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOverlappingAMR::GetOrigin(temp0, temp1, temp2);
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

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkOverlappingAMR_GetOrigin_s1(self, args);
    case 3:
      return PyvtkOverlappingAMR_GetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkOverlappingAMR_SetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0, temp1);
      }
    else
      {
      op->vtkOverlappingAMR::SetSpacing(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSpacing(temp0, temp1);
      }
    else
      {
      op->vtkOverlappingAMR::GetSpacing(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOverlappingAMR::GetBounds(temp0, temp1, temp2);
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
PyvtkOverlappingAMR_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
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
      op->vtkOverlappingAMR::GetBounds(temp0);
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
PyvtkOverlappingAMR_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkOverlappingAMR_GetBounds_s1(self, args);
    case 1:
      return PyvtkOverlappingAMR_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkOverlappingAMR_NUMBER_OF_BLANKED_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NUMBER_OF_BLANKED_POINTS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIdTypeKey *tempr = vtkOverlappingAMR::NUMBER_OF_BLANKED_POINTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_GetData_Methods[] = {
  {NULL, PyvtkOverlappingAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkOverlappingAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOverlappingAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOverlappingAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkOverlappingAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkOverlappingAMR_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRefinementRatio(temp0, temp1);
      }
    else
      {
      op->vtkOverlappingAMR::SetRefinementRatio(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkOverlappingAMR::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkOverlappingAMR::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_GetRefinementRatio_Methods[] = {
  {NULL, PyvtkOverlappingAMR_GetRefinementRatio_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkOverlappingAMR_GetRefinementRatio_s2, METH_VARARGS,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOverlappingAMR_GetRefinementRatio_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRefinementRatio");
  return NULL;
}



static PyObject *
PyvtkOverlappingAMR_SetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAMRBlockSourceIndex(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOverlappingAMR::SetAMRBlockSourceIndex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetAMRBlockSourceIndex(temp0, temp1) :
      op->vtkOverlappingAMR::GetAMRBlockSourceIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_HasChildrenInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChildrenInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasChildrenInformation() :
      op->vtkOverlappingAMR::HasChildrenInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GenerateParentChildInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParentChildInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateParentChildInformation();
      }
    else
      {
      op->vtkOverlappingAMR::GenerateParentChildInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetParents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetParents(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::GetParents(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetChildren(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::GetChildren(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_PrintParentChildInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParentChildInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->PrintParentChildInfo(temp0, temp1);
      }
    else
      {
      op->vtkOverlappingAMR::PrintParentChildInfo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_FindGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::FindGrid(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetAMRInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRInformation *tempr = (ap.IsBound() ?
      op->GetAMRInfo() :
      op->vtkOverlappingAMR::GetAMRInfo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_SetAMRInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  vtkAMRInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
    {
    if (ap.IsBound())
      {
      op->SetAMRInfo(temp0);
      }
    else
      {
      op->vtkOverlappingAMR::SetAMRInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_Audit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Audit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Audit();
      }
    else
      {
      op->vtkOverlappingAMR::Audit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_Methods[] = {
  {(char*)"GetDataObjectType", PyvtkOverlappingAMR_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"GetClassName", PyvtkOverlappingAMR_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverlappingAMR_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverlappingAMR_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverlappingAMR_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewIterator", PyvtkOverlappingAMR_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by the\nuser).\n"},
  {(char*)"SetOrigin", PyvtkOverlappingAMR_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin((float, ...))\nC++: void SetOrigin(const double *)\n\n"},
  {(char*)"GetOrigin", PyvtkOverlappingAMR_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, ...)\nC++: double *GetOrigin()\nV.GetOrigin(int, int, [float, float, float])\nC++: void GetOrigin(unsigned int level, unsigned int id,\n    double origin[3])\n\n"},
  {(char*)"SetSpacing", PyvtkOverlappingAMR_SetSpacing, METH_VARARGS,
   (char*)"V.SetSpacing(int, (float, float, float))\nC++: void SetSpacing(unsigned int level, const double spacing[3])\n\n"},
  {(char*)"GetSpacing", PyvtkOverlappingAMR_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing(int, [float, float, float])\nC++: void GetSpacing(unsigned int level, double spacing[3])\n\n"},
  {(char*)"GetBounds", PyvtkOverlappingAMR_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds(int, int, [float, ...])\nC++: void GetBounds(unsigned int level, unsigned int id,\n    double *bb)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double b[6])\n\n"},
  {(char*)"NUMBER_OF_BLANKED_POINTS", PyvtkOverlappingAMR_NUMBER_OF_BLANKED_POINTS, METH_VARARGS | METH_STATIC,
   (char*)"V.NUMBER_OF_BLANKED_POINTS() -> vtkInformationIdTypeKey\nC++: static vtkInformationIdTypeKey *NUMBER_OF_BLANKED_POINTS()\n\n"},
  {(char*)"GetData", PyvtkOverlappingAMR_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkOverlappingAMR\nC++: static vtkOverlappingAMR *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkOverlappingAMR\nC++: static vtkOverlappingAMR *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"SetRefinementRatio", PyvtkOverlappingAMR_SetRefinementRatio, METH_VARARGS,
   (char*)"V.SetRefinementRatio(int, int)\nC++: void SetRefinementRatio(unsigned int level, int refRatio)\n\nSets the refinement of a given level. The spacing at level\nlevel+1 is defined as spacing(level+1) =\nspacing(level)/refRatio(level). Note that currently, this is not\nenforced by this class however some algorithms might not function\nproperly if the spacing in the blocks (vtkUniformGrid) does not\nmatch the one described by the refinement ratio.\n"},
  {(char*)"GetRefinementRatio", PyvtkOverlappingAMR_GetRefinementRatio, METH_VARARGS,
   (char*)"V.GetRefinementRatio(int) -> int\nC++: int GetRefinementRatio(unsigned int level)\nV.GetRefinementRatio(vtkCompositeDataIterator) -> int\nC++: int GetRefinementRatio(vtkCompositeDataIterator *iter)\n\nReturns the refinement of a given level.\n"},
  {(char*)"SetAMRBlockSourceIndex", PyvtkOverlappingAMR_SetAMRBlockSourceIndex, METH_VARARGS,
   (char*)"V.SetAMRBlockSourceIndex(int, int, int)\nC++: void SetAMRBlockSourceIndex(unsigned int level,\n    unsigned int id, int sourceId)\n\nSet/Get the source id of a block. The source id is produced by an\nAMR source, e.g. a file reader might set this to be a file block\nid\n"},
  {(char*)"GetAMRBlockSourceIndex", PyvtkOverlappingAMR_GetAMRBlockSourceIndex, METH_VARARGS,
   (char*)"V.GetAMRBlockSourceIndex(int, int) -> int\nC++: int GetAMRBlockSourceIndex(unsigned int level,\n    unsigned int id)\n\nSet/Get the source id of a block. The source id is produced by an\nAMR source, e.g. a file reader might set this to be a file block\nid\n"},
  {(char*)"HasChildrenInformation", PyvtkOverlappingAMR_HasChildrenInformation, METH_VARARGS,
   (char*)"V.HasChildrenInformation() -> bool\nC++: bool HasChildrenInformation()\n\n"},
  {(char*)"GenerateParentChildInformation", PyvtkOverlappingAMR_GenerateParentChildInformation, METH_VARARGS,
   (char*)"V.GenerateParentChildInformation()\nC++: void GenerateParentChildInformation()\n\n"},
  {(char*)"GetParents", PyvtkOverlappingAMR_GetParents, METH_VARARGS,
   (char*)"V.GetParents(int, int, int) -> (int, ...)\nC++: unsigned int *GetParents(unsigned int level,\n    unsigned int index, unsigned int &numParents)\n\nReturn a pointer to Parents of a block.  The first entry is the\nnumber of parents the block has followed by its parent ids in\nlevel-1. If none exits it returns NULL.\n"},
  {(char*)"GetChildren", PyvtkOverlappingAMR_GetChildren, METH_VARARGS,
   (char*)"V.GetChildren(int, int, int) -> (int, ...)\nC++: unsigned int *GetChildren(unsigned int level,\n    unsigned int index, unsigned int &numChildren)\n\nReturn a pointer to Children of a block.  The first entry is the\nnumber of children the block has followed by its childern ids in\nlevel+1. If none exits it returns NULL.\n"},
  {(char*)"PrintParentChildInfo", PyvtkOverlappingAMR_PrintParentChildInfo, METH_VARARGS,
   (char*)"V.PrintParentChildInfo(int, int)\nC++: void PrintParentChildInfo(unsigned int level,\n    unsigned int index)\n\nPrints the parents and children of a requested block (Debug\nRoutine)\n"},
  {(char*)"FindGrid", PyvtkOverlappingAMR_FindGrid, METH_VARARGS,
   (char*)"V.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], unsigned int &level,\n    unsigned int &gridId)\n\n"},
  {(char*)"GetAMRInfo", PyvtkOverlappingAMR_GetAMRInfo, METH_VARARGS,
   (char*)"V.GetAMRInfo() -> vtkAMRInformation\nC++: vtkAMRInformation *GetAMRInfo()\n\nGet/Set the interal representation of amr meta meta data\n"},
  {(char*)"SetAMRInfo", PyvtkOverlappingAMR_SetAMRInfo, METH_VARARGS,
   (char*)"V.SetAMRInfo(vtkAMRInformation)\nC++: virtual void SetAMRInfo(vtkAMRInformation *info)\n\nGet/Set the interal representation of amr meta meta data\n"},
  {(char*)"Audit", PyvtkOverlappingAMR_Audit, METH_VARARGS,
   (char*)"V.Audit()\nC++: void Audit()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverlappingAMR_StaticNew()
{
  return vtkOverlappingAMR::New();
}

PyObject *PyVTKClass_vtkOverlappingAMRNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverlappingAMR_StaticNew,
    PyvtkOverlappingAMR_Methods,
    "vtkOverlappingAMR", modulename,
    NULL, NULL,
    PyvtkOverlappingAMR_Doc(),
    PyVTKClass_vtkUniformGridAMRNew(modulename));
  return cls;
}

const char **PyvtkOverlappingAMR_Doc()
{
  static const char *docstring[] = {
    "vtkOverlappingAMR - hierarchical dataset of vtkUniformGrids\n\n",
    "Superclass: vtkUniformGridAMR\n\n",
    "vtkOverlappingAMR extends vtkUniformGridAMR by exposing access to the\namr meta data, which stores all structural information represented by\nan vtkAMRInformation object\n\nSee Also:\n\nvtkAMRInformation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverlappingAMR(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverlappingAMRNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverlappingAMR", o) != 0)
    {
    Py_DECREF(o);
    }

}

