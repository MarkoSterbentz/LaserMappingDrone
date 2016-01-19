// python wrapper for vtkInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkInformationKey.h"
#include "vtkInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInformation_Doc();


static PyObject *
PyvtkInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformation::NewInstance());

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
PyvtkInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformation *tempr = vtkInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_Modified_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkInformation::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Modified_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Modified(temp0);
      }
    else
      {
      op->vtkInformation::Modified(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Modified(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkInformation_Modified_s1(self, args);
    case 1:
      return PyvtkInformation_Modified_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Modified");
  return NULL;
}



static PyObject *
PyvtkInformation_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkInformation::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_GetNumberOfKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfKeys() :
      op->vtkInformation::GetNumberOfKeys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Copy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_CopyEntry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationDataObjectKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationDoubleVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationVariantKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationVariantVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationInformationKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationInformationVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationIntegerKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationIntegerVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationRequestKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationRequestKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationStringKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationStringVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationUnsignedLongKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntry(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_CopyEntry_Methods[] = {
  {NULL, PyvtkInformation_CopyEntry_s1, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationKey"},
  {NULL, PyvtkInformation_CopyEntry_s2, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationDataObjectKey"},
  {NULL, PyvtkInformation_CopyEntry_s3, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_CopyEntry_s4, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationVariantKey"},
  {NULL, PyvtkInformation_CopyEntry_s5, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationVariantVectorKey"},
  {NULL, PyvtkInformation_CopyEntry_s6, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_CopyEntry_s7, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_CopyEntry_s8, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_CopyEntry_s9, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_CopyEntry_s10, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationRequestKey"},
  {NULL, PyvtkInformation_CopyEntry_s11, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationStringKey"},
  {NULL, PyvtkInformation_CopyEntry_s12, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_CopyEntry_s13, METH_VARARGS,
   (char*)"@OO|i *vtkInformation *vtkInformationUnsignedLongKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_CopyEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_CopyEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyEntry");
  return NULL;
}



static PyObject *
PyvtkInformation_CopyEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationKeyVectorKey *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKeyVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyEntries(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::CopyEntries(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_Has_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Has_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Has_Methods[] = {
  {NULL, PyvtkInformation_Has_s1, METH_VARARGS,
   (char*)"@O *vtkInformationKey"},
  {NULL, PyvtkInformation_Has_s2, METH_VARARGS,
   (char*)"@O *vtkInformationRequestKey"},
  {NULL, PyvtkInformation_Has_s3, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_Has_s4, METH_VARARGS,
   (char*)"@O *vtkInformationIdTypeKey"},
  {NULL, PyvtkInformation_Has_s5, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_Has_s6, METH_VARARGS,
   (char*)"@O *vtkInformationVariantKey"},
  {NULL, PyvtkInformation_Has_s7, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Has_s8, METH_VARARGS,
   (char*)"@O *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Has_s9, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerPointerKey"},
  {NULL, PyvtkInformation_Has_s10, METH_VARARGS,
   (char*)"@O *vtkInformationUnsignedLongKey"},
  {NULL, PyvtkInformation_Has_s11, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Has_s12, METH_VARARGS,
   (char*)"@O *vtkInformationVariantVectorKey"},
  {NULL, PyvtkInformation_Has_s13, METH_VARARGS,
   (char*)"@O *vtkInformationKeyVectorKey"},
  {NULL, PyvtkInformation_Has_s14, METH_VARARGS,
   (char*)"@O *vtkInformationStringKey"},
  {NULL, PyvtkInformation_Has_s15, METH_VARARGS,
   (char*)"@O *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_Has_s16, METH_VARARGS,
   (char*)"@O *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_Has_s17, METH_VARARGS,
   (char*)"@O *vtkInformationObjectBaseKey"},
  {NULL, PyvtkInformation_Has_s18, METH_VARARGS,
   (char*)"@O *vtkInformationDataObjectKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Has(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Has_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Has");
  return NULL;
}



static PyObject *
PyvtkInformation_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Remove(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformation::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Remove_Methods[] = {
  {NULL, PyvtkInformation_Remove_s1, METH_VARARGS,
   (char*)"@O *vtkInformationKey"},
  {NULL, PyvtkInformation_Remove_s2, METH_VARARGS,
   (char*)"@O *vtkInformationRequestKey"},
  {NULL, PyvtkInformation_Remove_s3, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_Remove_s4, METH_VARARGS,
   (char*)"@O *vtkInformationIdTypeKey"},
  {NULL, PyvtkInformation_Remove_s5, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_Remove_s6, METH_VARARGS,
   (char*)"@O *vtkInformationVariantKey"},
  {NULL, PyvtkInformation_Remove_s7, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Remove_s8, METH_VARARGS,
   (char*)"@O *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Remove_s9, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerPointerKey"},
  {NULL, PyvtkInformation_Remove_s10, METH_VARARGS,
   (char*)"@O *vtkInformationUnsignedLongKey"},
  {NULL, PyvtkInformation_Remove_s11, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Remove_s12, METH_VARARGS,
   (char*)"@O *vtkInformationVariantVectorKey"},
  {NULL, PyvtkInformation_Remove_s14, METH_VARARGS,
   (char*)"@O *vtkInformationKeyVectorKey"},
  {NULL, PyvtkInformation_Remove_s15, METH_VARARGS,
   (char*)"@O *vtkInformationStringKey"},
  {NULL, PyvtkInformation_Remove_s16, METH_VARARGS,
   (char*)"@O *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_Remove_s17, METH_VARARGS,
   (char*)"@O *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_Remove_s18, METH_VARARGS,
   (char*)"@O *vtkInformationObjectBaseKey"},
  {NULL, PyvtkInformation_Remove_s19, METH_VARARGS,
   (char*)"@O *vtkInformationDataObjectKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Remove(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Remove_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkInformation_Remove_s13(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return NULL;
}



static PyObject *
PyvtkInformation_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0);
      }
    else
      {
      op->vtkInformation::Set(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, *temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Set_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2);
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
PyvtkInformation_Set_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  char *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2);
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
PyvtkInformation_Set_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2);
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
PyvtkInformation_Set_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  vtkVariant *temp3 = NULL;
  PyObject *pobj3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, *temp1, *temp2, *temp3);
      }
    else
      {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkInformation_Set_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  vtkVariant *temp3 = NULL;
  PyObject *pobj3 = NULL;
  vtkVariant *temp4 = NULL;
  PyObject *pobj4 = NULL;
  vtkVariant *temp5 = NULL;
  PyObject *pobj5 = NULL;
  vtkVariant *temp6 = NULL;
  PyObject *pobj6 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant") &&
      ap.GetSpecialObject(temp4, pobj4, "vtkVariant") &&
      ap.GetSpecialObject(temp5, pobj5, "vtkVariant") &&
      ap.GetSpecialObject(temp6, pobj6, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
      }
    else
      {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);
  Py_XDECREF(pobj4);
  Py_XDECREF(pobj5);
  Py_XDECREF(pobj6);

  return result;
}

static PyObject *
PyvtkInformation_Set_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = NULL;
  vtkInformationVector *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = NULL;
  vtkObjectBase *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Set_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Set_Methods[] = {
  {NULL, PyvtkInformation_Set_s2, METH_VARARGS,
   (char*)"@Oi *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_Set_s3, METH_VARARGS,
   (char*)"@OL *vtkInformationIdTypeKey"},
  {NULL, PyvtkInformation_Set_s4, METH_VARARGS,
   (char*)"@Od *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_Set_s5, METH_VARARGS,
   (char*)"@OO *vtkInformationVariantKey &vtkVariant"},
  {NULL, PyvtkInformation_Set_s6, METH_VARARGS,
   (char*)"@OOi *vtkInformationIntegerVectorKey *i"},
  {NULL, PyvtkInformation_Set_s7, METH_VARARGS,
   (char*)"@Oiii *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Set_s8, METH_VARARGS,
   (char*)"@Oiiiiii *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Set_s9, METH_VARARGS,
   (char*)"@Oz|i *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Set_s10, METH_VARARGS,
   (char*)"@OOi *vtkInformationIntegerPointerKey *i"},
  {NULL, PyvtkInformation_Set_s11, METH_VARARGS,
   (char*)"@Ok *vtkInformationUnsignedLongKey"},
  {NULL, PyvtkInformation_Set_s12, METH_VARARGS,
   (char*)"@OOi *vtkInformationDoubleVectorKey *d"},
  {NULL, PyvtkInformation_Set_s13, METH_VARARGS,
   (char*)"@Oddd *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Set_s14, METH_VARARGS,
   (char*)"@Odddddd *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Set_s15, METH_VARARGS,
   (char*)"@OOOO *vtkInformationVariantVectorKey &vtkVariant &vtkVariant &vtkVariant"},
  {NULL, PyvtkInformation_Set_s16, METH_VARARGS,
   (char*)"@OOOOOOO *vtkInformationVariantVectorKey &vtkVariant &vtkVariant &vtkVariant &vtkVariant &vtkVariant &vtkVariant"},
  {NULL, PyvtkInformation_Set_s17, METH_VARARGS,
   (char*)"@Oz *vtkInformationStringKey"},
  {NULL, PyvtkInformation_Set_s18, METH_VARARGS,
   (char*)"@OO *vtkInformationInformationKey *vtkInformation"},
  {NULL, PyvtkInformation_Set_s19, METH_VARARGS,
   (char*)"@OO *vtkInformationInformationVectorKey *vtkInformationVector"},
  {NULL, PyvtkInformation_Set_s20, METH_VARARGS,
   (char*)"@OO *vtkInformationObjectBaseKey *vtkObjectBase"},
  {NULL, PyvtkInformation_Set_s21, METH_VARARGS,
   (char*)"@OO *vtkInformationDataObjectKey *vtkDataObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Set(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Set_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkInformation_Set_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkInformation_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
    {
    double tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0) :
      &op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
    {
    int sizer = op->Length(temp0);
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Get(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
    {
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Get(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
    {
    int sizer = op->Length(temp0);
    double *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
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
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Get(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Get(temp0, temp1);
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
PyvtkInformation_Get_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetValue(temp1))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0, temp1) :
      &op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetValue(temp1))
    {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
    {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
    {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
    {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Get_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Get_Methods[] = {
  {NULL, PyvtkInformation_Get_s1, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_Get_s2, METH_VARARGS,
   (char*)"@O *vtkInformationIdTypeKey"},
  {NULL, PyvtkInformation_Get_s3, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_Get_s4, METH_VARARGS,
   (char*)"@O *vtkInformationVariantKey"},
  {NULL, PyvtkInformation_Get_s5, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Get_s6, METH_VARARGS,
   (char*)"@Oi *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Get_s7, METH_VARARGS,
   (char*)"@OO *vtkInformationIntegerVectorKey *i"},
  {NULL, PyvtkInformation_Get_s8, METH_VARARGS,
   (char*)"@O|i *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Get_s9, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerPointerKey"},
  {NULL, PyvtkInformation_Get_s10, METH_VARARGS,
   (char*)"@OO *vtkInformationIntegerPointerKey *i"},
  {NULL, PyvtkInformation_Get_s11, METH_VARARGS,
   (char*)"@O *vtkInformationUnsignedLongKey"},
  {NULL, PyvtkInformation_Get_s12, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Get_s13, METH_VARARGS,
   (char*)"@Oi *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Get_s14, METH_VARARGS,
   (char*)"@OO *vtkInformationDoubleVectorKey *d"},
  {NULL, PyvtkInformation_Get_s15, METH_VARARGS,
   (char*)"@Oi *vtkInformationVariantVectorKey"},
  {NULL, PyvtkInformation_Get_s16, METH_VARARGS,
   (char*)"@Oi *vtkInformationKeyVectorKey"},
  {NULL, PyvtkInformation_Get_s17, METH_VARARGS,
   (char*)"@O *vtkInformationStringKey"},
  {NULL, PyvtkInformation_Get_s18, METH_VARARGS,
   (char*)"@O *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_Get_s19, METH_VARARGS,
   (char*)"@O *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_Get_s20, METH_VARARGS,
   (char*)"@O *vtkInformationObjectBaseKey"},
  {NULL, PyvtkInformation_Get_s21, METH_VARARGS,
   (char*)"@O *vtkInformationDataObjectKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Get(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Get_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return NULL;
}



static PyObject *
PyvtkInformation_Append_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, *temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Append_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDataObjectKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDoubleKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDoubleVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationInformationVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationIntegerKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationIntegerVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationStringKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationStringVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationObjectBaseKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Append_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationUnsignedLongKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformation::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Append_Methods[] = {
  {NULL, PyvtkInformation_Append_s1, METH_VARARGS,
   (char*)"@Oi *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Append_s2, METH_VARARGS,
   (char*)"@Oz *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Append_s3, METH_VARARGS,
   (char*)"@Od *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Append_s4, METH_VARARGS,
   (char*)"@OO *vtkInformationVariantVectorKey &vtkVariant"},
  {NULL, PyvtkInformation_Append_s5, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationKey"},
  {NULL, PyvtkInformation_Append_s6, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {NULL, PyvtkInformation_Append_s7, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_Append_s8, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Append_s9, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_Append_s10, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_Append_s11, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_Append_s12, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Append_s13, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {NULL, PyvtkInformation_Append_s14, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Append_s15, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {NULL, PyvtkInformation_Append_s16, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Append(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Append_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Append");
  return NULL;
}



static PyObject *
PyvtkInformation_Length_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Length_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Length_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Length_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Length_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_Length_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
    {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Length_Methods[] = {
  {NULL, PyvtkInformation_Length_s1, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_Length_s2, METH_VARARGS,
   (char*)"@O *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_Length_s3, METH_VARARGS,
   (char*)"@O *vtkInformationIntegerPointerKey"},
  {NULL, PyvtkInformation_Length_s4, METH_VARARGS,
   (char*)"@O *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_Length_s5, METH_VARARGS,
   (char*)"@O *vtkInformationVariantVectorKey"},
  {NULL, PyvtkInformation_Length_s6, METH_VARARGS,
   (char*)"@O *vtkInformationKeyVectorKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_Length(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Length_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Length");
  return NULL;
}



static PyObject *
PyvtkInformation_AppendUnique_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDataObjectKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDoubleKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationDoubleVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationInformationVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationIntegerKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationIntegerVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationStringKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationStringVectorKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationObjectBaseKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = NULL;
  vtkInformationUnsignedLongKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformation::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_AppendUnique_Methods[] = {
  {NULL, PyvtkInformation_AppendUnique_s1, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationKey"},
  {NULL, PyvtkInformation_AppendUnique_s2, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {NULL, PyvtkInformation_AppendUnique_s3, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_AppendUnique_s4, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_AppendUnique_s5, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_AppendUnique_s6, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_AppendUnique_s7, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_AppendUnique_s8, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_AppendUnique_s9, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {NULL, PyvtkInformation_AppendUnique_s10, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_AppendUnique_s11, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {NULL, PyvtkInformation_AppendUnique_s12, METH_VARARGS,
   (char*)"@OO *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_AppendUnique(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_AppendUnique_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AppendUnique");
  return NULL;
}



static PyObject *
PyvtkInformation_GetKey_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDataObjectKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationRequestKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s9(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s10(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s11(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s12(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationUnsignedLongKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s13(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s14(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantVectorKey *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
    {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_GetKey_Methods[] = {
  {NULL, PyvtkInformation_GetKey_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationDataObjectKey"},
  {NULL, PyvtkInformation_GetKey_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationDoubleKey"},
  {NULL, PyvtkInformation_GetKey_s3, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationDoubleVectorKey"},
  {NULL, PyvtkInformation_GetKey_s4, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationInformationKey"},
  {NULL, PyvtkInformation_GetKey_s5, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationInformationVectorKey"},
  {NULL, PyvtkInformation_GetKey_s6, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationIntegerKey"},
  {NULL, PyvtkInformation_GetKey_s7, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationIntegerVectorKey"},
  {NULL, PyvtkInformation_GetKey_s8, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationRequestKey"},
  {NULL, PyvtkInformation_GetKey_s9, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationStringKey"},
  {NULL, PyvtkInformation_GetKey_s10, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationStringVectorKey"},
  {NULL, PyvtkInformation_GetKey_s11, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationKey"},
  {NULL, PyvtkInformation_GetKey_s12, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationUnsignedLongKey"},
  {NULL, PyvtkInformation_GetKey_s13, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationVariantKey"},
  {NULL, PyvtkInformation_GetKey_s14, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformationVariantVectorKey"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInformation_GetKey(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_GetKey_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetKey");
  return NULL;
}



static PyObject *
PyvtkInformation_SetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
    {
    if (ap.IsBound())
      {
      op->SetRequest(temp0);
      }
    else
      {
      op->vtkInformation::SetRequest(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformation_GetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = (ap.IsBound() ?
      op->GetRequest() :
      op->vtkInformation::GetRequest());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformation\nC++: vtkInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformation\nC++: vtkInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Modified", PyvtkInformation_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: void Modified()\nV.Modified(vtkInformationKey)\nC++: void Modified(vtkInformationKey *key)\n\nModified signature with no arguments that calls Modified on\nvtkObject superclass.\n"},
  {(char*)"Clear", PyvtkInformation_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nClear all information entries.\n"},
  {(char*)"GetNumberOfKeys", PyvtkInformation_GetNumberOfKeys, METH_VARARGS,
   (char*)"V.GetNumberOfKeys() -> int\nC++: int GetNumberOfKeys()\n\nReturn the number of keys in this information object (as would be\nreturned by iterating over the keys).\n"},
  {(char*)"Copy", PyvtkInformation_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkInformation, int)\nC++: void Copy(vtkInformation *from, int deep=0)\n\nCopy all information entries from the given vtkInformation\ninstance.  Any previously existing entries are removed.  If\ndeep==1, a deep copy of the information structure is performed\n(new instances of any contained vtkInformation and\nvtkInformationVector objects are created).\n"},
  {(char*)"CopyEntry", PyvtkInformation_CopyEntry, METH_VARARGS,
   (char*)"V.CopyEntry(vtkInformation, vtkInformationKey, int)\nC++: void CopyEntry(vtkInformation *from, vtkInformationKey *key,\n    int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationDataObjectKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDataObjectKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationDoubleVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDoubleVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationVariantKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationVariantVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationInformationKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationInformationVectorKey,\n    int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationIntegerKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationIntegerVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerVectorKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationRequestKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationRequestKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationStringKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationStringKey *key, int deep=0)\nV.CopyEntry(vtkInformation, vtkInformationStringVectorKey, int)\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationStringVectorKey *key, int deep=0)\n\nCopy the key/value pair associated with the given key in the\ngiven information object.  If deep=1, a deep copy of the\ninformation structure  ...\n [Truncated]\n"},
  {(char*)"CopyEntries", PyvtkInformation_CopyEntries, METH_VARARGS,
   (char*)"V.CopyEntries(vtkInformation, vtkInformationKeyVectorKey, int)\nC++: void CopyEntries(vtkInformation *from,\n    vtkInformationKeyVectorKey *key, int deep=0)\n\nUse the given key to lookup a list of other keys in the given\ninformation object.  The key/value pairs associated with these\nother keys will be copied.  If deep==1, a deep copy of the\ninformation structure is performed.\n"},
  {(char*)"Has", PyvtkInformation_Has, METH_VARARGS,
   (char*)"V.Has(vtkInformationKey) -> int\nC++: int Has(vtkInformationKey *key)\nV.Has(vtkInformationRequestKey) -> int\nC++: int Has(vtkInformationRequestKey *key)\nV.Has(vtkInformationIntegerKey) -> int\nC++: int Has(vtkInformationIntegerKey *key)\nV.Has(vtkInformationIdTypeKey) -> int\nC++: int Has(vtkInformationIdTypeKey *key)\nV.Has(vtkInformationDoubleKey) -> int\nC++: int Has(vtkInformationDoubleKey *key)\nV.Has(vtkInformationVariantKey) -> int\nC++: int Has(vtkInformationVariantKey *key)\nV.Has(vtkInformationIntegerVectorKey) -> int\nC++: int Has(vtkInformationIntegerVectorKey *key)\nV.Has(vtkInformationStringVectorKey) -> int\nC++: int Has(vtkInformationStringVectorKey *key)\nV.Has(vtkInformationIntegerPointerKey) -> int\nC++: int Has(vtkInformationIntegerPointerKey *key)\nV.Has(vtkInformationUnsignedLongKey) -> int\nC++: int Has(vtkInformationUnsignedLongKey *key)\nV.Has(vtkInformationDoubleVectorKey) -> int\nC++: int Has(vtkInformationDoubleVectorKey *key)\nV.Has(vtkInformationVariantVectorKey) -> int\nC++: int Has(vtkInformationVariantVectorKey *key)\nV.Has(vtkInformationKeyVectorKey) -> int\nC++: int Has(vtkInformationKeyVectorKey *key)\nV.Has(vtkInformationStringKey) -> int\nC++: int Has(vtkInformationStringKey *key)\nV.Has(vtkInformationInformationKey) -> int\nC++: int Has(vtkInformationInformationKey *key)\nV.Has(vtkInformationInformationVectorKey) -> int\nC++: int Has(vtkInformationInformationVectorKey *key)\nV.Has(vtkInformationObjectBaseKey) -> int\nC++: int Has(vtkInformationObjectBaseKey *key)\nV.Has(vtkInformationDataObjectKey) -> int\nC++: int Has(vtkInformationDataObjectKey *key)\n\nCheck whether the given key appears in this information object.\n"},
  {(char*)"Remove", PyvtkInformation_Remove, METH_VARARGS,
   (char*)"V.Remove(vtkInformationKey)\nC++: void Remove(vtkInformationKey *key)\nV.Remove(vtkInformationRequestKey)\nC++: void Remove(vtkInformationRequestKey *key)\nV.Remove(vtkInformationIntegerKey)\nC++: void Remove(vtkInformationIntegerKey *key)\nV.Remove(vtkInformationIdTypeKey)\nC++: void Remove(vtkInformationIdTypeKey *key)\nV.Remove(vtkInformationDoubleKey)\nC++: void Remove(vtkInformationDoubleKey *key)\nV.Remove(vtkInformationVariantKey)\nC++: void Remove(vtkInformationVariantKey *key)\nV.Remove(vtkInformationIntegerVectorKey)\nC++: void Remove(vtkInformationIntegerVectorKey *key)\nV.Remove(vtkInformationStringVectorKey)\nC++: void Remove(vtkInformationStringVectorKey *key)\nV.Remove(vtkInformationIntegerPointerKey)\nC++: void Remove(vtkInformationIntegerPointerKey *key)\nV.Remove(vtkInformationUnsignedLongKey)\nC++: void Remove(vtkInformationUnsignedLongKey *key)\nV.Remove(vtkInformationDoubleVectorKey)\nC++: void Remove(vtkInformationDoubleVectorKey *key)\nV.Remove(vtkInformationVariantVectorKey)\nC++: void Remove(vtkInformationVariantVectorKey *key)\nV.Remove(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void Remove(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.Remove(vtkInformationKeyVectorKey)\nC++: void Remove(vtkInformationKeyVectorKey *key)\nV.Remove(vtkInformationStringKey)\nC++: void Remove(vtkInformationStringKey *key)\nV.Remove(vtkInformationInformationKey)\nC++: void Remove(vtkInformationInformationKey *key)\nV.Remove(vtkInformationInformationVectorKey)\nC++: void Remove(vtkInformationInformationVectorKey *key)\nV.Remove(vtkInformationObjectBaseKey)\nC++: void Remove(vtkInformationObjectBaseKey *key)\nV.Remove(vtkInformationDataObjectKey)\nC++: void Remove(vtkInformationDataObjectKey *key)\n\nRemove the given key and its data from this information object.\n"},
  {(char*)"Set", PyvtkInformation_Set, METH_VARARGS,
   (char*)"V.Set(vtkInformationRequestKey)\nC++: void Set(vtkInformationRequestKey *key)\nV.Set(vtkInformationIntegerKey, int)\nC++: void Set(vtkInformationIntegerKey *key, int value)\nV.Set(vtkInformationIdTypeKey, int)\nC++: void Set(vtkInformationIdTypeKey *key, vtkIdType value)\nV.Set(vtkInformationDoubleKey, float)\nC++: void Set(vtkInformationDoubleKey *key, double value)\nV.Set(vtkInformationVariantKey, vtkVariant)\nC++: void Set(vtkInformationVariantKey *key,\n    const vtkVariant &value)\nV.Set(vtkInformationIntegerVectorKey, [int, ...], int)\nC++: void Set(vtkInformationIntegerVectorKey *key, int *value,\n    int length)\nV.Set(vtkInformationIntegerVectorKey, int, int, int)\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3)\nV.Set(vtkInformationIntegerVectorKey, int, int, int, int, int,\n    int)\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3, int value4, int value5, int value6)\nV.Set(vtkInformationStringVectorKey, string, int)\nC++: void Set(vtkInformationStringVectorKey *key,\n    const char *value, int idx=0)\nV.Set(vtkInformationIntegerPointerKey, [int, ...], int)\nC++: void Set(vtkInformationIntegerPointerKey *key, int *value,\n    int length)\nV.Set(vtkInformationUnsignedLongKey, int)\nC++: void Set(vtkInformationUnsignedLongKey *key,\n    unsigned long value)\nV.Set(vtkInformationDoubleVectorKey, [float, ...], int)\nC++: void Set(vtkInformationDoubleVectorKey *key, double *value,\n    int length)\nV.Set(vtkInformationDoubleVectorKey, float, float, float)\nC++: void Set(vtkInformationDoubleVectorKey *key, double value1,\n    double value2, double value3)\nV.Set(vtkInformationDoubleVectorKey, float, float, float, float,\n    float, float)\nC++: void Set(vtkInformationDoubleVectorKey *key, double value1,\n    double value2, double value3, double value4, double value5,\n    double value6)\n\nGet/Set a request-valued entry.\n"},
  {(char*)"Get", PyvtkInformation_Get, METH_VARARGS,
   (char*)"V.Get(vtkInformationIntegerKey) -> int\nC++: int Get(vtkInformationIntegerKey *key)\nV.Get(vtkInformationIdTypeKey) -> int\nC++: vtkIdType Get(vtkInformationIdTypeKey *key)\nV.Get(vtkInformationDoubleKey) -> float\nC++: double Get(vtkInformationDoubleKey *key)\nV.Get(vtkInformationVariantKey) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantKey *key)\nV.Get(vtkInformationIntegerVectorKey) -> (int, ...)\nC++: int *Get(vtkInformationIntegerVectorKey *key)\nV.Get(vtkInformationIntegerVectorKey, int) -> int\nC++: int Get(vtkInformationIntegerVectorKey *key, int idx)\nV.Get(vtkInformationIntegerVectorKey, [int, ...])\nC++: void Get(vtkInformationIntegerVectorKey *key, int *value)\nV.Get(vtkInformationStringVectorKey, int) -> string\nC++: const char *Get(vtkInformationStringVectorKey *key,\n    int idx=0)\nV.Get(vtkInformationIntegerPointerKey) -> (int, ...)\nC++: int *Get(vtkInformationIntegerPointerKey *key)\nV.Get(vtkInformationIntegerPointerKey, [int, ...])\nC++: void Get(vtkInformationIntegerPointerKey *key, int *value)\nV.Get(vtkInformationUnsignedLongKey) -> int\nC++: unsigned long Get(vtkInformationUnsignedLongKey *key)\nV.Get(vtkInformationDoubleVectorKey) -> (float, ...)\nC++: double *Get(vtkInformationDoubleVectorKey *key)\nV.Get(vtkInformationDoubleVectorKey, int) -> float\nC++: double Get(vtkInformationDoubleVectorKey *key, int idx)\nV.Get(vtkInformationDoubleVectorKey, [float, ...])\nC++: void Get(vtkInformationDoubleVectorKey *key, double *value)\nV.Get(vtkInformationVariantVectorKey, int) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantVectorKey *key,\n    int idx)\nV.Get(vtkInformationKeyVectorKey, int) -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformationKeyVectorKey *key,\n    int idx)\nV.Get(vtkInformationStringKey) -> string\nC++: const char *Get(vtkInformationStringKey *key)\nV.Get(vtkInformationInformationKey) -> vtkInformation\nC++: vtkInformation *Get(vtkInformationInformationKey *key)\n\nGet/Set an integer-valued entry.\n"},
  {(char*)"Append", PyvtkInformation_Append, METH_VARARGS,
   (char*)"V.Append(vtkInformationIntegerVectorKey, int)\nC++: void Append(vtkInformationIntegerVectorKey *key, int value)\nV.Append(vtkInformationStringVectorKey, string)\nC++: void Append(vtkInformationStringVectorKey *key,\n    const char *value)\nV.Append(vtkInformationDoubleVectorKey, float)\nC++: void Append(vtkInformationDoubleVectorKey *key, double value)\nV.Append(vtkInformationVariantVectorKey, vtkVariant)\nC++: void Append(vtkInformationVariantVectorKey *key,\n    const vtkVariant &value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationDataObjectKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationDoubleKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationDoubleVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationInformationKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationInformationVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationIntegerKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\nV.Append(vtkInformationKeyVectorKey,\n    vtkInformationIntegerVectorKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerVectorKey *value)\nV.Append(vtkInformationKeyVectorKey, vtkInformationStringKey)\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationStringKey *value)\n\nGet/Set an integer-vector-valued entry.\n"},
  {(char*)"Length", PyvtkInformation_Length, METH_VARARGS,
   (char*)"V.Length(vtkInformationIntegerVectorKey) -> int\nC++: int Length(vtkInformationIntegerVectorKey *key)\nV.Length(vtkInformationStringVectorKey) -> int\nC++: int Length(vtkInformationStringVectorKey *key)\nV.Length(vtkInformationIntegerPointerKey) -> int\nC++: int Length(vtkInformationIntegerPointerKey *key)\nV.Length(vtkInformationDoubleVectorKey) -> int\nC++: int Length(vtkInformationDoubleVectorKey *key)\nV.Length(vtkInformationVariantVectorKey) -> int\nC++: int Length(vtkInformationVariantVectorKey *key)\nV.Length(vtkInformationKeyVectorKey) -> int\nC++: int Length(vtkInformationKeyVectorKey *key)\n\nGet/Set an integer-vector-valued entry.\n"},
  {(char*)"AppendUnique", PyvtkInformation_AppendUnique, METH_VARARGS,
   (char*)"V.AppendUnique(vtkInformationKeyVectorKey, vtkInformationKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDataObjectKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDoubleKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationDoubleVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationInformationKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationInformationVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationIntegerKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationIntegerVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationStringKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationStringVectorKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringVectorKey *value)\nV.AppendUnique(vtkInformationKeyVectorKey,\n    vtkInformationObjectBaseKey)\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationObjectBaseKey *value)\n\nGet/Set an InformationKey-vector-valued entry.\n"},
  {(char*)"GetKey", PyvtkInformation_GetKey, METH_VARARGS | METH_STATIC,
   (char*)"V.GetKey(vtkInformationDataObjectKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDataObjectKey *key)\nV.GetKey(vtkInformationDoubleKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleKey *key)\nV.GetKey(vtkInformationDoubleVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleVectorKey *key)\nV.GetKey(vtkInformationInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationKey *key)\nV.GetKey(vtkInformationInformationVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationVectorKey *key)\nV.GetKey(vtkInformationIntegerKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerKey *key)\nV.GetKey(vtkInformationIntegerVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerVectorKey *key)\nV.GetKey(vtkInformationRequestKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationRequestKey *key)\nV.GetKey(vtkInformationStringKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringKey *key)\nV.GetKey(vtkInformationStringVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringVectorKey *key)\nV.GetKey(vtkInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(vtkInformationKey *key)\nV.GetKey(vtkInformationUnsignedLongKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationUnsignedLongKey *key)\nV.GetKey(vtkInformationVariantKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantKey *key)\nV.GetKey(vtkInformationVariantVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantVectorKey *key)\n\nUpcast the given key instance.\n"},
  {(char*)"SetRequest", PyvtkInformation_SetRequest, METH_VARARGS,
   (char*)"V.SetRequest(vtkInformationRequestKey)\nC++: void SetRequest(vtkInformationRequestKey *request)\n\nGet/Set the Request ivar\n"},
  {(char*)"GetRequest", PyvtkInformation_GetRequest, METH_VARARGS,
   (char*)"V.GetRequest() -> vtkInformationRequestKey\nC++: vtkInformationRequestKey *GetRequest()\n\nGet/Set the Request ivar\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInformation_StaticNew()
{
  return vtkInformation::New();
}

PyObject *PyVTKClass_vtkInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInformation_StaticNew,
    PyvtkInformation_Methods,
    "vtkInformation", modulename,
    NULL, NULL,
    PyvtkInformation_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInformation_Doc()
{
  static const char *docstring[] = {
    "vtkInformation - Store vtkAlgorithm input/output information.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInformation represents information and/or data for one input or\none output of a vtkAlgorithm.  It maps from keys to values of several\ndata types.  Instances of this class are collected in\nvtkInformationVector instances and passed to\nvtkAlgorithm::ProcessRequest calls.  The information and data\nreferenced by the instance on a particular input or output define the\nrequest made to the vtkAlgorithm",
    " instance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

