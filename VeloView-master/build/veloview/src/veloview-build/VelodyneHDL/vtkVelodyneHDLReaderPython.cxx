// python wrapper for vtkVelodyneHDLReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStdString.h"
#include "vtkVelodyneHDLReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVelodyneHDLReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVelodyneHDLReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVelodyneHDLReader_Doc();

#ifndef DECLARED_PyvtkVelodyneHDLReader_DualFlag_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkVelodyneHDLReader_DualFlag_Type;
#define DECLARED_PyvtkVelodyneHDLReader_DualFlag_Type
#endif

PyTypeObject PyvtkVelodyneHDLReader_DualFlag_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"DualFlag", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkVelodyneHDLReader_DualFlag_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkVelodyneHDLReader_DualFlag_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkVelodyneHDLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVelodyneHDLReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVelodyneHDLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneHDLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVelodyneHDLReader::NewInstance());

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
PyvtkVelodyneHDLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVelodyneHDLReader *tempr = vtkVelodyneHDLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetFileName() :
      &op->vtkVelodyneHDLReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  std::string temp0;
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
      op->vtkVelodyneHDLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetCorrectionsFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectionsFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetCorrectionsFile() :
      &op->vtkVelodyneHDLReader::GetCorrectionsFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetCorrectionsFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorrectionsFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCorrectionsFile(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetCorrectionsFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkVelodyneHDLReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetNumberOfTrailingFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTrailingFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTrailingFrames(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetNumberOfTrailingFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetLaserSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLaserSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  int temp10;
  int temp11;
  int temp12;
  int temp13;
  int temp14;
  int temp15;
  int temp16;
  int temp17;
  int temp18;
  int temp19;
  int temp20;
  int temp21;
  int temp22;
  int temp23;
  int temp24;
  int temp25;
  int temp26;
  int temp27;
  int temp28;
  int temp29;
  int temp30;
  int temp31;
  int temp32;
  int temp33;
  int temp34;
  int temp35;
  int temp36;
  int temp37;
  int temp38;
  int temp39;
  int temp40;
  int temp41;
  int temp42;
  int temp43;
  int temp44;
  int temp45;
  int temp46;
  int temp47;
  int temp48;
  int temp49;
  int temp50;
  int temp51;
  int temp52;
  int temp53;
  int temp54;
  int temp55;
  int temp56;
  int temp57;
  int temp58;
  int temp59;
  int temp60;
  int temp61;
  int temp62;
  int temp63;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(64) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetValue(temp10) &&
      ap.GetValue(temp11) &&
      ap.GetValue(temp12) &&
      ap.GetValue(temp13) &&
      ap.GetValue(temp14) &&
      ap.GetValue(temp15) &&
      ap.GetValue(temp16) &&
      ap.GetValue(temp17) &&
      ap.GetValue(temp18) &&
      ap.GetValue(temp19) &&
      ap.GetValue(temp20) &&
      ap.GetValue(temp21) &&
      ap.GetValue(temp22) &&
      ap.GetValue(temp23) &&
      ap.GetValue(temp24) &&
      ap.GetValue(temp25) &&
      ap.GetValue(temp26) &&
      ap.GetValue(temp27) &&
      ap.GetValue(temp28) &&
      ap.GetValue(temp29) &&
      ap.GetValue(temp30) &&
      ap.GetValue(temp31) &&
      ap.GetValue(temp32) &&
      ap.GetValue(temp33) &&
      ap.GetValue(temp34) &&
      ap.GetValue(temp35) &&
      ap.GetValue(temp36) &&
      ap.GetValue(temp37) &&
      ap.GetValue(temp38) &&
      ap.GetValue(temp39) &&
      ap.GetValue(temp40) &&
      ap.GetValue(temp41) &&
      ap.GetValue(temp42) &&
      ap.GetValue(temp43) &&
      ap.GetValue(temp44) &&
      ap.GetValue(temp45) &&
      ap.GetValue(temp46) &&
      ap.GetValue(temp47) &&
      ap.GetValue(temp48) &&
      ap.GetValue(temp49) &&
      ap.GetValue(temp50) &&
      ap.GetValue(temp51) &&
      ap.GetValue(temp52) &&
      ap.GetValue(temp53) &&
      ap.GetValue(temp54) &&
      ap.GetValue(temp55) &&
      ap.GetValue(temp56) &&
      ap.GetValue(temp57) &&
      ap.GetValue(temp58) &&
      ap.GetValue(temp59) &&
      ap.GetValue(temp60) &&
      ap.GetValue(temp61) &&
      ap.GetValue(temp62) &&
      ap.GetValue(temp63))
    {
    if (ap.IsBound())
      {
      op->SetLaserSelection(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13, temp14, temp15, temp16, temp17, temp18, temp19, temp20, temp21, temp22, temp23, temp24, temp25, temp26, temp27, temp28, temp29, temp30, temp31, temp32, temp33, temp34, temp35, temp36, temp37, temp38, temp39, temp40, temp41, temp42, temp43, temp44, temp45, temp46, temp47, temp48, temp49, temp50, temp51, temp52, temp53, temp54, temp55, temp56, temp57, temp58, temp59, temp60, temp61, temp62, temp63);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetLaserSelection(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13, temp14, temp15, temp16, temp17, temp18, temp19, temp20, temp21, temp22, temp23, temp24, temp25, temp26, temp27, temp28, temp29, temp30, temp31, temp32, temp33, temp34, temp35, temp36, temp37, temp38, temp39, temp40, temp41, temp42, temp43, temp44, temp45, temp46, temp47, temp48, temp49, temp50, temp51, temp52, temp53, temp54, temp55, temp56, temp57, temp58, temp59, temp60, temp61, temp62, temp63);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLReader_SetLaserSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLaserSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0[64];
  int save0[64];
  const int size0 = 64;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLaserSelection(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetLaserSelection(temp0);
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
PyvtkVelodyneHDLReader_SetLaserSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 64:
      return PyvtkVelodyneHDLReader_SetLaserSelection_s1(self, args);
    case 1:
      return PyvtkVelodyneHDLReader_SetLaserSelection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLaserSelection");
  return NULL;
}



static PyObject *
PyvtkVelodyneHDLReader_GetLaserSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLaserSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0[64];
  int save0[64];
  const int size0 = 64;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLaserSelection(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::GetLaserSelection(temp0);
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
PyvtkVelodyneHDLReader_GetVerticalCorrections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalCorrections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  double temp0[64];
  double save0[64];
  const int size0 = 64;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetVerticalCorrections(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::GetVerticalCorrections(temp0);
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
PyvtkVelodyneHDLReader_GetDualReturnFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDualReturnFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDualReturnFilter() :
      op->vtkVelodyneHDLReader::GetDualReturnFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetDualReturnFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDualReturnFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDualReturnFilter(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetDualReturnFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetDummyProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDummyProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDummyProperty(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetDummyProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetPointsSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointsSkip(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetPointsSkip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetCropReturns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropReturns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCropReturns(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetCropReturns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetCropInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCropInside(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetCropInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetCropRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

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
      op->SetCropRegion(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetCropRegion(temp0);
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
PyvtkVelodyneHDLReader_SetCropRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

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
      op->SetCropRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetCropRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLReader_SetCropRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVelodyneHDLReader_SetCropRegion_s1(self, args);
    case 6:
      return PyvtkVelodyneHDLReader_SetCropRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCropRegion");
  return NULL;
}



static PyObject *
PyvtkVelodyneHDLReader_GetNumberOfChannels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChannels() :
      op->vtkVelodyneHDLReader::GetNumberOfChannels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Open();
      }
    else
      {
      op->vtkVelodyneHDLReader::Open();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Close();
      }
    else
      {
      op->vtkVelodyneHDLReader::Close();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_ReadFrameInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFrameInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadFrameInformation() :
      op->vtkVelodyneHDLReader::ReadFrameInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkVelodyneHDLReader::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSmartPointer<vtkPolyData> tempr = (ap.IsBound() ?
      op->GetFrame(temp0) :
      op->vtkVelodyneHDLReader::GetFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkSmartPointer_I11vtkPolyDataE");
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetFrameRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSmartPointer<vtkPolyData> tempr = (ap.IsBound() ?
      op->GetFrameRange(temp0, temp1) :
      op->vtkVelodyneHDLReader::GetFrameRange(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkSmartPointer_I11vtkPolyDataE");
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_DumpFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DumpFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  int temp1;
  std::string temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DumpFrames(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVelodyneHDLReader::DumpFrames(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_ProcessHDLPacket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessHDLPacket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ProcessHDLPacket(temp0, temp1);
      }
    else
      {
      op->vtkVelodyneHDLReader::ProcessHDLPacket(temp0, temp1);
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
PyvtkVelodyneHDLReader_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneTransformInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkVelodyneHDLReader::GetInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  vtkVelodyneTransformInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVelodyneTransformInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolator(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetSensorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSensorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetSensorTransform(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetSensorTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_GetApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetApplyTransform() :
      op->vtkVelodyneHDLReader::GetApplyTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLReader_SetApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLReader *op = static_cast<vtkVelodyneHDLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetApplyTransform(temp0);
      }
    else
      {
      op->vtkVelodyneHDLReader::SetApplyTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVelodyneHDLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkVelodyneHDLReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVelodyneHDLReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVelodyneHDLReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVelodyneHDLReader\nC++: vtkVelodyneHDLReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVelodyneHDLReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVelodyneHDLReader\nC++: vtkVelodyneHDLReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkVelodyneHDLReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: const std::string &GetFileName()\n\n"},
  {(char*)"SetFileName", PyvtkVelodyneHDLReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const std::string &filename)\n\n"},
  {(char*)"GetCorrectionsFile", PyvtkVelodyneHDLReader_GetCorrectionsFile, METH_VARARGS,
   (char*)"V.GetCorrectionsFile() -> string\nC++: const std::string &GetCorrectionsFile()\n\n"},
  {(char*)"SetCorrectionsFile", PyvtkVelodyneHDLReader_SetCorrectionsFile, METH_VARARGS,
   (char*)"V.SetCorrectionsFile(string)\nC++: void SetCorrectionsFile(const std::string &correctionsFile)\n\n"},
  {(char*)"CanReadFile", PyvtkVelodyneHDLReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {(char*)"SetNumberOfTrailingFrames", PyvtkVelodyneHDLReader_SetNumberOfTrailingFrames, METH_VARARGS,
   (char*)"V.SetNumberOfTrailingFrames(int)\nC++: void SetNumberOfTrailingFrames(int numberTrailing)\n\nNumber of frames behind current frame to read.  Zero indicates\nonly show the current frame.  Negative numbers are invalid.\n"},
  {(char*)"SetLaserSelection", PyvtkVelodyneHDLReader_SetLaserSelection, METH_VARARGS,
   (char*)"V.SetLaserSelection(int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int)\nC++: void SetLaserSelection(int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int)\nV.SetLaserSelection([int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int])\nC++: void SetLaserSelection(int LaserSelection[64])\n\nTODO: This is not friendly but I dont have a better way to pass\n64 values to a filter in paraview\n"},
  {(char*)"GetLaserSelection", PyvtkVelodyneHDLReader_GetLaserSelection, METH_VARARGS,
   (char*)"V.GetLaserSelection([int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int])\nC++: void GetLaserSelection(int LaserSelection[64])\n\n"},
  {(char*)"GetVerticalCorrections", PyvtkVelodyneHDLReader_GetVerticalCorrections, METH_VARARGS,
   (char*)"V.GetVerticalCorrections([float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void GetVerticalCorrections(double LaserAngles[64])\n\n"},
  {(char*)"GetDualReturnFilter", PyvtkVelodyneHDLReader_GetDualReturnFilter, METH_VARARGS,
   (char*)"V.GetDualReturnFilter() -> int\nC++: unsigned int GetDualReturnFilter()\n\n"},
  {(char*)"SetDualReturnFilter", PyvtkVelodyneHDLReader_SetDualReturnFilter, METH_VARARGS,
   (char*)"V.SetDualReturnFilter(int)\nC++: void SetDualReturnFilter(unsigned int)\n\n"},
  {(char*)"SetDummyProperty", PyvtkVelodyneHDLReader_SetDummyProperty, METH_VARARGS,
   (char*)"V.SetDummyProperty(int)\nC++: void SetDummyProperty(int)\n\n"},
  {(char*)"SetPointsSkip", PyvtkVelodyneHDLReader_SetPointsSkip, METH_VARARGS,
   (char*)"V.SetPointsSkip(int)\nC++: void SetPointsSkip(int)\n\n"},
  {(char*)"SetCropReturns", PyvtkVelodyneHDLReader_SetCropReturns, METH_VARARGS,
   (char*)"V.SetCropReturns(int)\nC++: void SetCropReturns(int)\n\n"},
  {(char*)"SetCropInside", PyvtkVelodyneHDLReader_SetCropInside, METH_VARARGS,
   (char*)"V.SetCropInside(int)\nC++: void SetCropInside(int)\n\n"},
  {(char*)"SetCropRegion", PyvtkVelodyneHDLReader_SetCropRegion, METH_VARARGS,
   (char*)"V.SetCropRegion([float, float, float, float, float, float])\nC++: void SetCropRegion(double[6])\nV.SetCropRegion(float, float, float, float, float, float)\nC++: void SetCropRegion(double, double, double, double, double,\n    double)\n\n"},
  {(char*)"GetNumberOfChannels", PyvtkVelodyneHDLReader_GetNumberOfChannels, METH_VARARGS,
   (char*)"V.GetNumberOfChannels() -> int\nC++: int GetNumberOfChannels()\n\n"},
  {(char*)"Open", PyvtkVelodyneHDLReader_Open, METH_VARARGS,
   (char*)"V.Open()\nC++: void Open()\n\n"},
  {(char*)"Close", PyvtkVelodyneHDLReader_Close, METH_VARARGS,
   (char*)"V.Close()\nC++: void Close()\n\n"},
  {(char*)"ReadFrameInformation", PyvtkVelodyneHDLReader_ReadFrameInformation, METH_VARARGS,
   (char*)"V.ReadFrameInformation() -> int\nC++: int ReadFrameInformation()\n\n"},
  {(char*)"GetNumberOfFrames", PyvtkVelodyneHDLReader_GetNumberOfFrames, METH_VARARGS,
   (char*)"V.GetNumberOfFrames() -> int\nC++: int GetNumberOfFrames()\n\n"},
  {(char*)"GetFrame", PyvtkVelodyneHDLReader_GetFrame, METH_VARARGS,
   (char*)"V.GetFrame(int) -> vtkSmartPointer<vtkPolyData>\nC++: vtkSmartPointer<vtkPolyData> GetFrame(int frameNumber)\n\n"},
  {(char*)"GetFrameRange", PyvtkVelodyneHDLReader_GetFrameRange, METH_VARARGS,
   (char*)"V.GetFrameRange(int, int) -> vtkSmartPointer<vtkPolyData>\nC++: vtkSmartPointer<vtkPolyData> GetFrameRange(int frameNumber,\n    int numberOfFrames)\n\n"},
  {(char*)"DumpFrames", PyvtkVelodyneHDLReader_DumpFrames, METH_VARARGS,
   (char*)"V.DumpFrames(int, int, string)\nC++: void DumpFrames(int startFrame, int endFrame,\n    const std::string &filename)\n\n"},
  {(char*)"ProcessHDLPacket", PyvtkVelodyneHDLReader_ProcessHDLPacket, METH_VARARGS,
   (char*)"V.ProcessHDLPacket([int, ...], int)\nC++: void ProcessHDLPacket(unsigned char *data,\n    unsigned int bytesReceived)\n\n"},
  {(char*)"GetInterpolator", PyvtkVelodyneHDLReader_GetInterpolator, METH_VARARGS,
   (char*)"V.GetInterpolator() -> vtkVelodyneTransformInterpolator\nC++: vtkVelodyneTransformInterpolator *GetInterpolator()\n\n"},
  {(char*)"SetInterpolator", PyvtkVelodyneHDLReader_SetInterpolator, METH_VARARGS,
   (char*)"V.SetInterpolator(vtkVelodyneTransformInterpolator)\nC++: void SetInterpolator(\n    vtkVelodyneTransformInterpolator *interpolator)\n\n"},
  {(char*)"SetSensorTransform", PyvtkVelodyneHDLReader_SetSensorTransform, METH_VARARGS,
   (char*)"V.SetSensorTransform(vtkTransform)\nC++: void SetSensorTransform(vtkTransform *)\n\n"},
  {(char*)"GetApplyTransform", PyvtkVelodyneHDLReader_GetApplyTransform, METH_VARARGS,
   (char*)"V.GetApplyTransform() -> int\nC++: int GetApplyTransform()\n\n"},
  {(char*)"SetApplyTransform", PyvtkVelodyneHDLReader_SetApplyTransform, METH_VARARGS,
   (char*)"V.SetApplyTransform(int)\nC++: void SetApplyTransform(int apply)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVelodyneHDLReader_StaticNew()
{
  return vtkVelodyneHDLReader::New();
}

PyObject *PyVTKClass_vtkVelodyneHDLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVelodyneHDLReader_StaticNew,
    PyvtkVelodyneHDLReader_Methods,
    "vtkVelodyneHDLReader", modulename,
    NULL, NULL,
    PyvtkVelodyneHDLReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkVelodyneHDLReader_DualFlag_Type);
    PyvtkVelodyneHDLReader_DualFlag_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkVelodyneHDLReader_DualFlag_Type;
    if (o && PyDict_SetItemString(d, (char *)"DualFlag", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkVelodyneHDLReader::DualFlag cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "DUAL_DISTANCE_NEAR", vtkVelodyneHDLReader::DUAL_DISTANCE_NEAR },
          { "DUAL_DISTANCE_FAR", vtkVelodyneHDLReader::DUAL_DISTANCE_FAR },
          { "DUAL_INTENSITY_HIGH", vtkVelodyneHDLReader::DUAL_INTENSITY_HIGH },
          { "DUAL_INTENSITY_LOW", vtkVelodyneHDLReader::DUAL_INTENSITY_LOW },
          { "DUAL_DOUBLED", vtkVelodyneHDLReader::DUAL_DOUBLED },
          { "DUAL_DISTANCE_MASK", vtkVelodyneHDLReader::DUAL_DISTANCE_MASK },
          { "DUAL_INTENSITY_MASK", vtkVelodyneHDLReader::DUAL_INTENSITY_MASK },
        };

      o = PyvtkVelodyneHDLReader_DualFlag_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkVelodyneHDLReader_Doc()
{
  static const char *docstring[] = {
    "vtkVelodyneHDLReader - class for reading Velodyne HDL data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVelodyneHDLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVelodyneHDLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVelodyneHDLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

