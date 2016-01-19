// python wrapper for vtkImageExport
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageExport.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageExport(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageExportNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageExport_Doc();


static PyObject *
PyvtkImageExport_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageExport::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageExport::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageExport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageExport::NewInstance());

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
PyvtkImageExport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageExport *tempr = vtkImageExport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDataMemorySize() :
      op->vtkImageExport::GetDataMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataDimensions(temp0);
      }
    else
      {
      op->vtkImageExport::GetDataDimensions(temp0);
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
PyvtkImageExport_GetDataDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDataDimensions() :
      op->vtkImageExport::GetDataDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageExport_GetDataDimensions_s1(self, args);
    case 0:
      return PyvtkImageExport_GetDataDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimensions");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetDataNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataNumberOfScalarComponents() :
      op->vtkImageExport::GetDataNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageExport::GetDataScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageExport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageExport::GetDataExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataExtent(temp0);
      }
    else
      {
      op->vtkImageExport::GetDataExtent(temp0);
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
PyvtkImageExport_GetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageExport_GetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataExtent");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageExport::GetDataSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      op->GetDataSpacing(temp0);
      }
    else
      {
      op->vtkImageExport::GetDataSpacing(temp0);
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
PyvtkImageExport_GetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageExport_GetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageExport::GetDataOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      op->GetDataOrigin(temp0);
      }
    else
      {
      op->vtkImageExport::GetDataOrigin(temp0);
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
PyvtkImageExport_GetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageExport_GetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageExport::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImageLowerLeftOn();
      }
    else
      {
      op->vtkImageExport::ImageLowerLeftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImageLowerLeftOff();
      }
    else
      {
      op->vtkImageExport::ImageLowerLeftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageLowerLeft() :
      op->vtkImageExport::GetImageLowerLeft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_SetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageLowerLeft(temp0);
      }
    else
      {
      op->vtkImageExport::SetImageLowerLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_SetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExportVoidPointer(temp0);
      }
    else
      {
      op->vtkImageExport::SetExportVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetExportVoidPointer() :
      op->vtkImageExport::GetExportVoidPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_Export_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Export();
      }
    else
      {
      op->vtkImageExport::Export();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_Export_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Export(temp0);
      }
    else
      {
      op->vtkImageExport::Export(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_Export(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageExport_Export_s1(self, args);
    case 1:
      return PyvtkImageExport_Export_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Export");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetPointerToData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerToData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetPointerToData() :
      op->vtkImageExport::GetPointerToData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageExport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageExport_Methods[] = {
  {(char*)"GetClassName", PyvtkImageExport_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageExport_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageExport_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageExport\nC++: vtkImageExport *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageExport_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageExport\nC++: vtkImageExport *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataMemorySize", PyvtkImageExport_GetDataMemorySize, METH_VARARGS,
   (char*)"V.GetDataMemorySize() -> int\nC++: vtkIdType GetDataMemorySize()\n\nGet the number of bytes required for the output C array.\n"},
  {(char*)"GetDataDimensions", PyvtkImageExport_GetDataDimensions, METH_VARARGS,
   (char*)"V.GetDataDimensions([int, ...])\nC++: void GetDataDimensions(int *ptr)\nV.GetDataDimensions() -> (int, int, int)\nC++: int *GetDataDimensions()\n\nGet the (x,y,z) index dimensions of the data.  Please note that C\narrays are indexed in decreasing order, i.e. array[z][y][x].\n"},
  {(char*)"GetDataNumberOfScalarComponents", PyvtkImageExport_GetDataNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.GetDataNumberOfScalarComponents() -> int\nC++: int GetDataNumberOfScalarComponents()\n\nGet the number of scalar components of the data.  Please note\nthat when you index into a C array, the scalar component index\ncomes last, i.e. array[z][y][x][c].\n"},
  {(char*)"GetDataScalarType", PyvtkImageExport_GetDataScalarType, METH_VARARGS,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {(char*)"GetDataScalarTypeAsString", PyvtkImageExport_GetDataScalarTypeAsString, METH_VARARGS,
   (char*)"V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {(char*)"GetDataExtent", PyvtkImageExport_GetDataExtent, METH_VARARGS,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\nV.GetDataExtent([int, ...])\nC++: void GetDataExtent(int *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetDataSpacing", PyvtkImageExport_GetDataSpacing, METH_VARARGS,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\nV.GetDataSpacing([float, ...])\nC++: void GetDataSpacing(double *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetDataOrigin", PyvtkImageExport_GetDataOrigin, METH_VARARGS,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\nV.GetDataOrigin([float, ...])\nC++: void GetDataOrigin(double *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetInput", PyvtkImageExport_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input object from the image pipeline.\n"},
  {(char*)"ImageLowerLeftOn", PyvtkImageExport_ImageLowerLeftOn, METH_VARARGS,
   (char*)"V.ImageLowerLeftOn()\nC++: void ImageLowerLeftOn()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"ImageLowerLeftOff", PyvtkImageExport_ImageLowerLeftOff, METH_VARARGS,
   (char*)"V.ImageLowerLeftOff()\nC++: void ImageLowerLeftOff()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"GetImageLowerLeft", PyvtkImageExport_GetImageLowerLeft, METH_VARARGS,
   (char*)"V.GetImageLowerLeft() -> int\nC++: int GetImageLowerLeft()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"SetImageLowerLeft", PyvtkImageExport_SetImageLowerLeft, METH_VARARGS,
   (char*)"V.SetImageLowerLeft(int)\nC++: void SetImageLowerLeft(int a)\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"SetExportVoidPointer", PyvtkImageExport_SetExportVoidPointer, METH_VARARGS,
   (char*)"V.SetExportVoidPointer()\nC++: void SetExportVoidPointer(void *)\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {(char*)"GetExportVoidPointer", PyvtkImageExport_GetExportVoidPointer, METH_VARARGS,
   (char*)"V.GetExportVoidPointer() ->\nC++: void *GetExportVoidPointer()\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {(char*)"Export", PyvtkImageExport_Export, METH_VARARGS,
   (char*)"V.Export()\nC++: void Export()\nV.Export()\nC++: virtual void Export(void *)\n\nThe main interface: update the pipeline and export the image to\nthe memory pointed to by SetExportVoidPointer().  You can also\nspecify a void pointer when you call Export().\n"},
  {(char*)"GetPointerToData", PyvtkImageExport_GetPointerToData, METH_VARARGS,
   (char*)"V.GetPointerToData() ->\nC++: void *GetPointerToData()\n\nAn alternative to Export(): Use with caution.   Update the\npipeline and return a pointer to the image memory.  The pointer\nis only valid until the next time that the pipeline is updated.\nWARNING: This method ignores the ImageLowerLeft flag.\n"},
  {(char*)"GetCallbackUserData", PyvtkImageExport_GetCallbackUserData, METH_VARARGS,
   (char*)"V.GetCallbackUserData() ->\nC++: void *GetCallbackUserData()\n\nGet the user data that should be passed to the callback\nfunctions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageExport_StaticNew()
{
  return vtkImageExport::New();
}

PyObject *PyVTKClass_vtkImageExportNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageExport_StaticNew,
    PyvtkImageExport_Methods,
    "vtkImageExport", modulename,
    NULL, NULL,
    PyvtkImageExport_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageExport_Doc()
{
  static const char *docstring[] = {
    "vtkImageExport - Export VTK images to third-party systems.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageExport provides a way of exporting image data at the end of a\npipeline to a third-party system or to a simple C array. Applications\ncan use this to get direct access to the image data in memory.  A\ncallback interface is provided to allow connection of the VTK\npipeline to a third-party pipeline.  This interface conforms to the\ninterface of vtkImageImport. In Python it is possible to use thi",
    "s\nclass to write the image data into a python string that has been\npre-allocated to be the correct size.\n\nSee Also:\n\nvtkImageImport\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageExport(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageExportNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageExport", o) != 0)
    {
    Py_DECREF(o);
    }

}

