// python wrapper for vtkVPICReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVPICReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVPICReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVPICReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkVPICReader_Doc();


static PyObject *
PyvtkVPICReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVPICReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVPICReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVPICReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVPICReader::NewInstance());

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
PyvtkVPICReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVPICReader *tempr = vtkVPICReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkVPICReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVPICReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVPICReader::SetStride(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0);
      }
    else
      {
      op->vtkVPICReader::SetStride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVPICReader_SetStride_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetStride_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return NULL;
}



static PyObject *
PyvtkVPICReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkVPICReader::GetStride());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_SetXExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXExtent(temp0, temp1);
      }
    else
      {
      op->vtkVPICReader::SetXExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetXExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXExtent(temp0);
      }
    else
      {
      op->vtkVPICReader::SetXExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetXExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVPICReader_SetXExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetXExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXExtent");
  return NULL;
}



static PyObject *
PyvtkVPICReader_SetYExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYExtent(temp0, temp1);
      }
    else
      {
      op->vtkVPICReader::SetYExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetYExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYExtent(temp0);
      }
    else
      {
      op->vtkVPICReader::SetYExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetYExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVPICReader_SetYExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetYExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYExtent");
  return NULL;
}



static PyObject *
PyvtkVPICReader_SetZExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetZExtent(temp0, temp1);
      }
    else
      {
      op->vtkVPICReader::SetZExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetZExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZExtent(temp0);
      }
    else
      {
      op->vtkVPICReader::SetZExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_SetZExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVPICReader_SetZExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetZExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZExtent");
  return NULL;
}



static PyObject *
PyvtkVPICReader_GetXLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetXLayout() :
      op->vtkVPICReader::GetXLayout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetYLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetYLayout() :
      op->vtkVPICReader::GetYLayout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetZLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetZLayout() :
      op->vtkVPICReader::GetZLayout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkVPICReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkVPICReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVPICReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVPICReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkVPICReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkVPICReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkVPICReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkVPICReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkVPICReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkVPICReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkVPICReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVPICReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkVPICReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVPICReader_Methods[] = {
  {(char*)"GetClassName", PyvtkVPICReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVPICReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVPICReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVPICReader\nC++: vtkVPICReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVPICReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVPICReader\nC++: vtkVPICReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkVPICReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of VPIC data file to read.\n"},
  {(char*)"GetFileName", PyvtkVPICReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of VPIC data file to read.\n"},
  {(char*)"SetStride", PyvtkVPICReader_SetStride, METH_VARARGS,
   (char*)"V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {(char*)"GetStride", PyvtkVPICReader_GetStride, METH_VARARGS,
   (char*)"V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {(char*)"SetXExtent", PyvtkVPICReader_SetXExtent, METH_VARARGS,
   (char*)"V.SetXExtent(int, int)\nC++: void SetXExtent(int, int)\nV.SetXExtent((int, int))\nC++: void SetXExtent(int a[2])\n\n"},
  {(char*)"SetYExtent", PyvtkVPICReader_SetYExtent, METH_VARARGS,
   (char*)"V.SetYExtent(int, int)\nC++: void SetYExtent(int, int)\nV.SetYExtent((int, int))\nC++: void SetYExtent(int a[2])\n\n"},
  {(char*)"SetZExtent", PyvtkVPICReader_SetZExtent, METH_VARARGS,
   (char*)"V.SetZExtent(int, int)\nC++: void SetZExtent(int, int)\nV.SetZExtent((int, int))\nC++: void SetZExtent(int a[2])\n\n"},
  {(char*)"GetXLayout", PyvtkVPICReader_GetXLayout, METH_VARARGS,
   (char*)"V.GetXLayout() -> (int, int)\nC++: int *GetXLayout()\n\n"},
  {(char*)"GetYLayout", PyvtkVPICReader_GetYLayout, METH_VARARGS,
   (char*)"V.GetYLayout() -> (int, int)\nC++: int *GetYLayout()\n\n"},
  {(char*)"GetZLayout", PyvtkVPICReader_GetZLayout, METH_VARARGS,
   (char*)"V.GetZLayout() -> (int, int)\nC++: int *GetZLayout()\n\n"},
  {(char*)"GetOutput", PyvtkVPICReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int index)\n\nGet the reader's output\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkVPICReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkVPICReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkVPICReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"SetPointArrayStatus", PyvtkVPICReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"DisableAllPointArrays", PyvtkVPICReader_DisableAllPointArrays, METH_VARARGS,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"EnableAllPointArrays", PyvtkVPICReader_EnableAllPointArrays, METH_VARARGS,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVPICReader_StaticNew()
{
  return vtkVPICReader::New();
}

PyObject *PyVTKClass_vtkVPICReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVPICReader_StaticNew,
    PyvtkVPICReader_Methods,
    "vtkVPICReader", modulename,
    NULL, NULL,
    PyvtkVPICReader_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVPICReader_Doc()
{
  static const char *docstring[] = {
    "vtkVPICReader - class for reading VPIC data files\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkDataReader is a helper superclass that reads the vtk data file\nheader, dataset type, and attribute data (point and cell attributes\nsuch as scalars, vectors, normals, etc.) from a vtk data file.  See\ntext for the format of the various vtk file types.\n\nSee Also:\n\nvtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\nvtkUnstructuredGridReader vtkRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVPICReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVPICReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVPICReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

