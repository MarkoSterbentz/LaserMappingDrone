// python wrapper for vtkNIFTIImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNIFTIImageWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNIFTIImageWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNIFTIImageWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkNIFTIImageWriter_Doc();


static PyObject *
PyvtkNIFTIImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNIFTIImageWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNIFTIImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageWriter::NewInstance());

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
PyvtkNIFTIImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNIFTIImageWriter *tempr = vtkNIFTIImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetNIFTIVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNIFTIVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNIFTIVersion(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetNIFTIVersion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetNIFTIVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNIFTIVersion() :
      op->vtkNIFTIImageWriter::GetNIFTIVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDescription(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkNIFTIImageWriter::GetDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeDimension() :
      op->vtkNIFTIImageWriter::GetTimeDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeDimension(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetTimeDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeSpacing() :
      op->vtkNIFTIImageWriter::GetTimeSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeSpacing(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetTimeSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRescaleSlope(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetRescaleSlope(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkNIFTIImageWriter::GetRescaleSlope());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRescaleIntercept(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetRescaleIntercept(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkNIFTIImageWriter::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFac(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetQFac(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQFac() :
      op->vtkNIFTIImageWriter::GetQFac());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetQFormMatrix(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetQFormMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetQFormMatrix() :
      op->vtkNIFTIImageWriter::GetQFormMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetSFormMatrix(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetSFormMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetSFormMatrix() :
      op->vtkNIFTIImageWriter::GetSFormMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkNIFTIImageHeader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNIFTIImageHeader"))
    {
    if (ap.IsBound())
      {
      op->SetNIFTIHeader(temp0);
      }
    else
      {
      op->vtkNIFTIImageWriter::SetNIFTIHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->GetNIFTIHeader() :
      op->vtkNIFTIImageWriter::GetNIFTIHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNIFTIImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkNIFTIImageWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStatic method for construction.\n"},
  {(char*)"IsA", PyvtkNIFTIImageWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStatic method for construction.\n"},
  {(char*)"NewInstance", PyvtkNIFTIImageWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNIFTIImageWriter\nC++: vtkNIFTIImageWriter *NewInstance()\n\nStatic method for construction.\n"},
  {(char*)"SafeDownCast", PyvtkNIFTIImageWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNIFTIImageWriter\nC++: vtkNIFTIImageWriter *SafeDownCast(vtkObject* o)\n\nStatic method for construction.\n"},
  {(char*)"SetNIFTIVersion", PyvtkNIFTIImageWriter_SetNIFTIVersion, METH_VARARGS,
   (char*)"V.SetNIFTIVersion(int)\nC++: void SetNIFTIVersion(int a)\n\nSet the version number for the NIfTI file format to use. This can\nbe 1, 2, or 0 (the default).  If set to zero, then it will save\nas NIfTI version 1 unless SetNIFTIHeader() provided header\ninformation from a NIfTI version 2 file.\n"},
  {(char*)"GetNIFTIVersion", PyvtkNIFTIImageWriter_GetNIFTIVersion, METH_VARARGS,
   (char*)"V.GetNIFTIVersion() -> int\nC++: int GetNIFTIVersion()\n\nSet the version number for the NIfTI file format to use. This can\nbe 1, 2, or 0 (the default).  If set to zero, then it will save\nas NIfTI version 1 unless SetNIFTIHeader() provided header\ninformation from a NIfTI version 2 file.\n"},
  {(char*)"SetDescription", PyvtkNIFTIImageWriter_SetDescription, METH_VARARGS,
   (char*)"V.SetDescription(string)\nC++: void SetDescription(char *)\n\nSet a short description (max 80 chars) of how the file was\nproduced. The default description is \"VTKX.Y\" where X.Y is the\nVTK version.\n"},
  {(char*)"GetDescription", PyvtkNIFTIImageWriter_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription() -> string\nC++: char *GetDescription()\n\nSet a short description (max 80 chars) of how the file was\nproduced. The default description is \"VTKX.Y\" where X.Y is the\nVTK version.\n"},
  {(char*)"GetTimeDimension", PyvtkNIFTIImageWriter_GetTimeDimension, METH_VARARGS,
   (char*)"V.GetTimeDimension() -> int\nC++: int GetTimeDimension()\n\nSet the time dimension to use in the NIFTI file (or zero if\nnone). The number of components of the input data must be\ndivisible by the time dimension if the time dimension is not set\nto zero.  The vector dimension will be set to the number of\ncomponents divided by the time dimension.\n"},
  {(char*)"SetTimeDimension", PyvtkNIFTIImageWriter_SetTimeDimension, METH_VARARGS,
   (char*)"V.SetTimeDimension(int)\nC++: void SetTimeDimension(int a)\n\nSet the time dimension to use in the NIFTI file (or zero if\nnone). The number of components of the input data must be\ndivisible by the time dimension if the time dimension is not set\nto zero.  The vector dimension will be set to the number of\ncomponents divided by the time dimension.\n"},
  {(char*)"GetTimeSpacing", PyvtkNIFTIImageWriter_GetTimeSpacing, METH_VARARGS,
   (char*)"V.GetTimeSpacing() -> float\nC++: double GetTimeSpacing()\n\nSet the time dimension to use in the NIFTI file (or zero if\nnone). The number of components of the input data must be\ndivisible by the time dimension if the time dimension is not set\nto zero.  The vector dimension will be set to the number of\ncomponents divided by the time dimension.\n"},
  {(char*)"SetTimeSpacing", PyvtkNIFTIImageWriter_SetTimeSpacing, METH_VARARGS,
   (char*)"V.SetTimeSpacing(float)\nC++: void SetTimeSpacing(double a)\n\nSet the time dimension to use in the NIFTI file (or zero if\nnone). The number of components of the input data must be\ndivisible by the time dimension if the time dimension is not set\nto zero.  The vector dimension will be set to the number of\ncomponents divided by the time dimension.\n"},
  {(char*)"SetRescaleSlope", PyvtkNIFTIImageWriter_SetRescaleSlope, METH_VARARGS,
   (char*)"V.SetRescaleSlope(float)\nC++: void SetRescaleSlope(double a)\n\nSet the slope and intercept for calibrating the scalar values.\nOther programs that read the NIFTI file can use the equation v =\nu*RescaleSlope + RescaleIntercept to rescale the data to real\nvalues.  If both the slope and the intercept are zero, then the\nSclSlope and SclIntercept in the header info provided via\nSetNIFTIHeader() are used instead.\n"},
  {(char*)"GetRescaleSlope", PyvtkNIFTIImageWriter_GetRescaleSlope, METH_VARARGS,
   (char*)"V.GetRescaleSlope() -> float\nC++: double GetRescaleSlope()\n\nSet the slope and intercept for calibrating the scalar values.\nOther programs that read the NIFTI file can use the equation v =\nu*RescaleSlope + RescaleIntercept to rescale the data to real\nvalues.  If both the slope and the intercept are zero, then the\nSclSlope and SclIntercept in the header info provided via\nSetNIFTIHeader() are used instead.\n"},
  {(char*)"SetRescaleIntercept", PyvtkNIFTIImageWriter_SetRescaleIntercept, METH_VARARGS,
   (char*)"V.SetRescaleIntercept(float)\nC++: void SetRescaleIntercept(double a)\n\nSet the slope and intercept for calibrating the scalar values.\nOther programs that read the NIFTI file can use the equation v =\nu*RescaleSlope + RescaleIntercept to rescale the data to real\nvalues.  If both the slope and the intercept are zero, then the\nSclSlope and SclIntercept in the header info provided via\nSetNIFTIHeader() are used instead.\n"},
  {(char*)"GetRescaleIntercept", PyvtkNIFTIImageWriter_GetRescaleIntercept, METH_VARARGS,
   (char*)"V.GetRescaleIntercept() -> float\nC++: double GetRescaleIntercept()\n\nSet the slope and intercept for calibrating the scalar values.\nOther programs that read the NIFTI file can use the equation v =\nu*RescaleSlope + RescaleIntercept to rescale the data to real\nvalues.  If both the slope and the intercept are zero, then the\nSclSlope and SclIntercept in the header info provided via\nSetNIFTIHeader() are used instead.\n"},
  {(char*)"SetQFac", PyvtkNIFTIImageWriter_SetQFac, METH_VARARGS,
   (char*)"V.SetQFac(float)\nC++: void SetQFac(double a)\n\nThe QFac sets the ordering of the slices in the NIFTI file. If\nQFac is -1, then the slice ordering in the file will be reversed\nas compared to VTK. Use with caution.\n"},
  {(char*)"GetQFac", PyvtkNIFTIImageWriter_GetQFac, METH_VARARGS,
   (char*)"V.GetQFac() -> float\nC++: double GetQFac()\n\nThe QFac sets the ordering of the slices in the NIFTI file. If\nQFac is -1, then the slice ordering in the file will be reversed\nas compared to VTK. Use with caution.\n"},
  {(char*)"SetQFormMatrix", PyvtkNIFTIImageWriter_SetQFormMatrix, METH_VARARGS,
   (char*)"V.SetQFormMatrix(vtkMatrix4x4)\nC++: void SetQFormMatrix(vtkMatrix4x4 *)\n\nSet the \"qform\" orientation and offset for the image data. The\n3x3 portion of the matrix must be orthonormal and have a positive\ndeterminant, it will be used to compute the quaternion. The last\ncolumn of the matrix will be used for the offset. In the NIFTI\nheader, the qform_code will be set to 1.\n"},
  {(char*)"GetQFormMatrix", PyvtkNIFTIImageWriter_GetQFormMatrix, METH_VARARGS,
   (char*)"V.GetQFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetQFormMatrix()\n\nSet the \"qform\" orientation and offset for the image data. The\n3x3 portion of the matrix must be orthonormal and have a positive\ndeterminant, it will be used to compute the quaternion. The last\ncolumn of the matrix will be used for the offset. In the NIFTI\nheader, the qform_code will be set to 1.\n"},
  {(char*)"SetSFormMatrix", PyvtkNIFTIImageWriter_SetSFormMatrix, METH_VARARGS,
   (char*)"V.SetSFormMatrix(vtkMatrix4x4)\nC++: void SetSFormMatrix(vtkMatrix4x4 *)\n\nSet a matrix for the \"sform\" transformation stored in the file.\nUnlike the qform matrix, the sform matrix can contain scaling\ninformation.  Before being stored in the NIFTI header, the first\nthree columns of the matrix will be multipled by the voxel\nspacing. In the NIFTI header, the sform_code will be set to 2.\n"},
  {(char*)"GetSFormMatrix", PyvtkNIFTIImageWriter_GetSFormMatrix, METH_VARARGS,
   (char*)"V.GetSFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetSFormMatrix()\n\nSet a matrix for the \"sform\" transformation stored in the file.\nUnlike the qform matrix, the sform matrix can contain scaling\ninformation.  Before being stored in the NIFTI header, the first\nthree columns of the matrix will be multipled by the voxel\nspacing. In the NIFTI header, the sform_code will be set to 2.\n"},
  {(char*)"SetNIFTIHeader", PyvtkNIFTIImageWriter_SetNIFTIHeader, METH_VARARGS,
   (char*)"V.SetNIFTIHeader(vtkNIFTIImageHeader)\nC++: void SetNIFTIHeader(vtkNIFTIImageHeader *hdr)\n\nSet the NIFTI header information to use when writing the file.\nThe data dimensions and pixdim from the supplied header will be\nignored.  Likewise, the QForm and SForm information in the\nsupplied header will be ignored if you have called\nSetQFormMatrix() or SetSFormMatrix() to provide the orientation\ninformation for the file.\n"},
  {(char*)"GetNIFTIHeader", PyvtkNIFTIImageWriter_GetNIFTIHeader, METH_VARARGS,
   (char*)"V.GetNIFTIHeader() -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *GetNIFTIHeader()\n\nSet the NIFTI header information to use when writing the file.\nThe data dimensions and pixdim from the supplied header will be\nignored.  Likewise, the QForm and SForm information in the\nsupplied header will be ignored if you have called\nSetQFormMatrix() or SetSFormMatrix() to provide the orientation\ninformation for the file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNIFTIImageWriter_StaticNew()
{
  return vtkNIFTIImageWriter::New();
}

PyObject *PyVTKClass_vtkNIFTIImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNIFTIImageWriter_StaticNew,
    PyvtkNIFTIImageWriter_Methods,
    "vtkNIFTIImageWriter", modulename,
    NULL, NULL,
    PyvtkNIFTIImageWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkNIFTIImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkNIFTIImageWriter - Write NIfTI-1 and NIfTI-2 medical image files\n\n",
    "Superclass: vtkImageWriter\n\n",
    "This class writes NIFTI files, either in .nii format or as separate\n.img and .hdr files.  If told to write a file that ends in \".gz\",\nthen the writer will automatically compress the file with zlib.\nImages of type unsigned char that have 3 or 4 scalar components will\nautomatically be written as RGB or RGBA respectively.  Images of type\nfloat or double that have 2 components will automatically be wr",
    "itten\nas complex values.\n\nThanks:\n\nThis class was contributed to VTK by the Calgary Image Processing and\nAnalysis Centre (CIPAC).\n\nSee Also:\n\nvtkNIFTIImageReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNIFTIImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNIFTIImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNIFTIImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

