// python wrapper for vtkVelodyneHDLSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStdString.h"
#include "vtkVelodyneHDLSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVelodyneHDLSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVelodyneHDLSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVelodyneHDLSource_Doc();


static PyObject *
PyvtkVelodyneHDLSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVelodyneHDLSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVelodyneHDLSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneHDLSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVelodyneHDLSource::NewInstance());

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
PyvtkVelodyneHDLSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVelodyneHDLSource *tempr = vtkVelodyneHDLSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_Poll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Poll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Poll();
      }
    else
      {
      op->vtkVelodyneHDLSource::Poll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkVelodyneHDLSource::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkVelodyneHDLSource::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkVelodyneHDLSource::GetCacheSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheSize(temp0);
      }
    else
      {
      op->vtkVelodyneHDLSource::SetCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_ReadNextFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadNextFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadNextFrame();
      }
    else
      {
      op->vtkVelodyneHDLSource::ReadNextFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_GetCorrectionsFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectionsFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetCorrectionsFile() :
      &op->vtkVelodyneHDLSource::GetCorrectionsFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetCorrectionsFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorrectionsFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetCorrectionsFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_GetOutputFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetOutputFile() :
      &op->vtkVelodyneHDLSource::GetOutputFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetOutputFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFile(temp0);
      }
    else
      {
      op->vtkVelodyneHDLSource::SetOutputFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetSensorPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSensorPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSensorPort(temp0);
      }
    else
      {
      op->vtkVelodyneHDLSource::SetSensorPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_GetSensorPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSensorPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSensorPort() :
      op->vtkVelodyneHDLSource::GetSensorPort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetLaserSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLaserSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetLaserSelection(temp0);
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
PyvtkVelodyneHDLSource_GetLaserSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLaserSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::GetLaserSelection(temp0);
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
PyvtkVelodyneHDLSource_SetCropReturns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropReturns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetCropReturns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetCropInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetCropInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetCropRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetCropRegion(temp0);
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
PyvtkVelodyneHDLSource_SetCropRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetCropRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLSource_SetCropRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVelodyneHDLSource_SetCropRegion_s1(self, args);
    case 6:
      return PyvtkVelodyneHDLSource_SetCropRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCropRegion");
  return NULL;
}



static PyObject *
PyvtkVelodyneHDLSource_GetVerticalCorrections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalCorrections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::GetVerticalCorrections(temp0);
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
PyvtkVelodyneHDLSource_GetDualReturnFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDualReturnFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDualReturnFilter() :
      op->vtkVelodyneHDLSource::GetDualReturnFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetDualReturnFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDualReturnFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetDualReturnFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetSensorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSensorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetSensorTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_SetDummyProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDummyProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

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
      op->vtkVelodyneHDLSource::SetDummyProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLSource_GetNumberOfChannels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLSource *op = static_cast<vtkVelodyneHDLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChannels() :
      op->vtkVelodyneHDLSource::GetNumberOfChannels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVelodyneHDLSource_Methods[] = {
  {(char*)"GetClassName", PyvtkVelodyneHDLSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVelodyneHDLSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVelodyneHDLSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVelodyneHDLSource\nC++: vtkVelodyneHDLSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVelodyneHDLSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVelodyneHDLSource\nC++: vtkVelodyneHDLSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Poll", PyvtkVelodyneHDLSource_Poll, METH_VARARGS,
   (char*)"V.Poll()\nC++: void Poll()\n\n"},
  {(char*)"Start", PyvtkVelodyneHDLSource_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\n"},
  {(char*)"Stop", PyvtkVelodyneHDLSource_Stop, METH_VARARGS,
   (char*)"V.Stop()\nC++: void Stop()\n\n"},
  {(char*)"GetCacheSize", PyvtkVelodyneHDLSource_GetCacheSize, METH_VARARGS,
   (char*)"V.GetCacheSize() -> int\nC++: int GetCacheSize()\n\n"},
  {(char*)"SetCacheSize", PyvtkVelodyneHDLSource_SetCacheSize, METH_VARARGS,
   (char*)"V.SetCacheSize(int)\nC++: void SetCacheSize(int cacheSize)\n\n"},
  {(char*)"ReadNextFrame", PyvtkVelodyneHDLSource_ReadNextFrame, METH_VARARGS,
   (char*)"V.ReadNextFrame()\nC++: void ReadNextFrame()\n\n"},
  {(char*)"GetCorrectionsFile", PyvtkVelodyneHDLSource_GetCorrectionsFile, METH_VARARGS,
   (char*)"V.GetCorrectionsFile() -> string\nC++: const std::string &GetCorrectionsFile()\n\n"},
  {(char*)"SetCorrectionsFile", PyvtkVelodyneHDLSource_SetCorrectionsFile, METH_VARARGS,
   (char*)"V.SetCorrectionsFile(string)\nC++: void SetCorrectionsFile(const std::string &correctionsFile)\n\n"},
  {(char*)"GetOutputFile", PyvtkVelodyneHDLSource_GetOutputFile, METH_VARARGS,
   (char*)"V.GetOutputFile() -> string\nC++: const std::string &GetOutputFile()\n\n"},
  {(char*)"SetOutputFile", PyvtkVelodyneHDLSource_SetOutputFile, METH_VARARGS,
   (char*)"V.SetOutputFile(string)\nC++: void SetOutputFile(const std::string &filename)\n\n"},
  {(char*)"SetSensorPort", PyvtkVelodyneHDLSource_SetSensorPort, METH_VARARGS,
   (char*)"V.SetSensorPort(int)\nC++: void SetSensorPort(int a)\n\n"},
  {(char*)"GetSensorPort", PyvtkVelodyneHDLSource_GetSensorPort, METH_VARARGS,
   (char*)"V.GetSensorPort() -> int\nC++: int GetSensorPort()\n\n"},
  {(char*)"SetLaserSelection", PyvtkVelodyneHDLSource_SetLaserSelection, METH_VARARGS,
   (char*)"V.SetLaserSelection([int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int])\nC++: void SetLaserSelection(int LaserSelection[64])\n\n"},
  {(char*)"GetLaserSelection", PyvtkVelodyneHDLSource_GetLaserSelection, METH_VARARGS,
   (char*)"V.GetLaserSelection([int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int])\nC++: void GetLaserSelection(int LaserSelection[64])\n\n"},
  {(char*)"SetCropReturns", PyvtkVelodyneHDLSource_SetCropReturns, METH_VARARGS,
   (char*)"V.SetCropReturns(int)\nC++: void SetCropReturns(int)\n\n"},
  {(char*)"SetCropInside", PyvtkVelodyneHDLSource_SetCropInside, METH_VARARGS,
   (char*)"V.SetCropInside(int)\nC++: void SetCropInside(int)\n\n"},
  {(char*)"SetCropRegion", PyvtkVelodyneHDLSource_SetCropRegion, METH_VARARGS,
   (char*)"V.SetCropRegion([float, float, float, float, float, float])\nC++: void SetCropRegion(double[6])\nV.SetCropRegion(float, float, float, float, float, float)\nC++: void SetCropRegion(double, double, double, double, double,\n    double)\n\n"},
  {(char*)"GetVerticalCorrections", PyvtkVelodyneHDLSource_GetVerticalCorrections, METH_VARARGS,
   (char*)"V.GetVerticalCorrections([float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void GetVerticalCorrections(double LaserAngles[64])\n\n"},
  {(char*)"GetDualReturnFilter", PyvtkVelodyneHDLSource_GetDualReturnFilter, METH_VARARGS,
   (char*)"V.GetDualReturnFilter() -> int\nC++: unsigned int GetDualReturnFilter()\n\n"},
  {(char*)"SetDualReturnFilter", PyvtkVelodyneHDLSource_SetDualReturnFilter, METH_VARARGS,
   (char*)"V.SetDualReturnFilter(int)\nC++: void SetDualReturnFilter(unsigned int)\n\n"},
  {(char*)"SetSensorTransform", PyvtkVelodyneHDLSource_SetSensorTransform, METH_VARARGS,
   (char*)"V.SetSensorTransform(vtkTransform)\nC++: void SetSensorTransform(vtkTransform *)\n\n"},
  {(char*)"SetDummyProperty", PyvtkVelodyneHDLSource_SetDummyProperty, METH_VARARGS,
   (char*)"V.SetDummyProperty(int)\nC++: void SetDummyProperty(int)\n\n"},
  {(char*)"GetNumberOfChannels", PyvtkVelodyneHDLSource_GetNumberOfChannels, METH_VARARGS,
   (char*)"V.GetNumberOfChannels() -> int\nC++: int GetNumberOfChannels()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVelodyneHDLSource_StaticNew()
{
  return vtkVelodyneHDLSource::New();
}

PyObject *PyVTKClass_vtkVelodyneHDLSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVelodyneHDLSource_StaticNew,
    PyvtkVelodyneHDLSource_Methods,
    "vtkVelodyneHDLSource", modulename,
    NULL, NULL,
    PyvtkVelodyneHDLSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVelodyneHDLSource_Doc()
{
  static const char *docstring[] = {
    "vtkVelodyneHDLSource -\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVelodyneHDLSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVelodyneHDLSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVelodyneHDLSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

