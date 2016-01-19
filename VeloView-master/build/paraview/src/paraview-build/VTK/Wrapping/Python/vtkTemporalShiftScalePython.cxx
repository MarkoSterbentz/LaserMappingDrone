// python wrapper for vtkTemporalShiftScale
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalShiftScale.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalShiftScale(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalShiftScaleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTemporalShiftScale_Doc();


static PyObject *
PyvtkTemporalShiftScale_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalShiftScale::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalShiftScale::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalShiftScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalShiftScale::NewInstance());

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
PyvtkTemporalShiftScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalShiftScale *tempr = vtkTemporalShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPreShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreShift(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetPreShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPreShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPreShift() :
      op->vtkTemporalShiftScale::GetPreShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPostShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPostShift(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetPostShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPostShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPostShift() :
      op->vtkTemporalShiftScale::GetPostShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTemporalShiftScale::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPeriodic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriodic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPeriodic(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetPeriodic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPeriodic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPeriodic() :
      op->vtkTemporalShiftScale::GetPeriodic());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PeriodicOn();
      }
    else
      {
      op->vtkTemporalShiftScale::PeriodicOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PeriodicOff();
      }
    else
      {
      op->vtkTemporalShiftScale::PeriodicOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPeriodicEndCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriodicEndCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPeriodicEndCorrection(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetPeriodicEndCorrection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPeriodicEndCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodicEndCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPeriodicEndCorrection() :
      op->vtkTemporalShiftScale::GetPeriodicEndCorrection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicEndCorrectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicEndCorrectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PeriodicEndCorrectionOn();
      }
    else
      {
      op->vtkTemporalShiftScale::PeriodicEndCorrectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicEndCorrectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicEndCorrectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PeriodicEndCorrectionOff();
      }
    else
      {
      op->vtkTemporalShiftScale::PeriodicEndCorrectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetMaximumNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPeriods(temp0);
      }
    else
      {
      op->vtkTemporalShiftScale::SetMaximumNumberOfPeriods(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetMaximumNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeriods() :
      op->vtkTemporalShiftScale::GetMaximumNumberOfPeriods());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalShiftScale_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalShiftScale_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalShiftScale_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalShiftScale_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalShiftScale\nC++: vtkTemporalShiftScale *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalShiftScale_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalShiftScale\nC++: vtkTemporalShiftScale *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPreShift", PyvtkTemporalShiftScale_SetPreShift, METH_VARARGS,
   (char*)"V.SetPreShift(float)\nC++: void SetPreShift(double a)\n\nApply a translation to the data before scaling. To convert\nT{5,100} to T{0,1} use Preshift=-5, Scale=1/95, PostShift=0 To\nconvert T{5,105} to T{5,10} use Preshift=-5, Scale=5/100,\nPostShift=5\n"},
  {(char*)"GetPreShift", PyvtkTemporalShiftScale_GetPreShift, METH_VARARGS,
   (char*)"V.GetPreShift() -> float\nC++: double GetPreShift()\n\nApply a translation to the data before scaling. To convert\nT{5,100} to T{0,1} use Preshift=-5, Scale=1/95, PostShift=0 To\nconvert T{5,105} to T{5,10} use Preshift=-5, Scale=5/100,\nPostShift=5\n"},
  {(char*)"SetPostShift", PyvtkTemporalShiftScale_SetPostShift, METH_VARARGS,
   (char*)"V.SetPostShift(float)\nC++: void SetPostShift(double a)\n\nApply a translation to the time\n"},
  {(char*)"GetPostShift", PyvtkTemporalShiftScale_GetPostShift, METH_VARARGS,
   (char*)"V.GetPostShift() -> float\nC++: double GetPostShift()\n\nApply a translation to the time\n"},
  {(char*)"SetScale", PyvtkTemporalShiftScale_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float)\nC++: void SetScale(double a)\n\nApply a scale to the time.\n"},
  {(char*)"GetScale", PyvtkTemporalShiftScale_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> float\nC++: double GetScale()\n\nApply a scale to the time.\n"},
  {(char*)"SetPeriodic", PyvtkTemporalShiftScale_SetPeriodic, METH_VARARGS,
   (char*)"V.SetPeriodic(int)\nC++: void SetPeriodic(int a)\n\nIf Periodic is true, requests for time will be wrapped around so\nthat the source appears to be a periodic time source. If data\nexists for times {0,N-1}, setting periodic to true will cause\ntime 0 to be produced when time N, 2N, 2N etc is requested. This\neffectively gives the source the ability to generate time data\nindefinitely in a loop. When combined with Shift/Scale, the time\nbecomes periodic in the shifted and scaled time frame of\nreference. Note: Since the input time may not start at zero, the\nwrapping of time from the end of one period to the start of the\nnext, will subtract the initial time - a source with T{5..6}\nrepeated periodicaly will have output time {5..6..7..8} etc.\n"},
  {(char*)"GetPeriodic", PyvtkTemporalShiftScale_GetPeriodic, METH_VARARGS,
   (char*)"V.GetPeriodic() -> int\nC++: int GetPeriodic()\n\nIf Periodic is true, requests for time will be wrapped around so\nthat the source appears to be a periodic time source. If data\nexists for times {0,N-1}, setting periodic to true will cause\ntime 0 to be produced when time N, 2N, 2N etc is requested. This\neffectively gives the source the ability to generate time data\nindefinitely in a loop. When combined with Shift/Scale, the time\nbecomes periodic in the shifted and scaled time frame of\nreference. Note: Since the input time may not start at zero, the\nwrapping of time from the end of one period to the start of the\nnext, will subtract the initial time - a source with T{5..6}\nrepeated periodicaly will have output time {5..6..7..8} etc.\n"},
  {(char*)"PeriodicOn", PyvtkTemporalShiftScale_PeriodicOn, METH_VARARGS,
   (char*)"V.PeriodicOn()\nC++: void PeriodicOn()\n\nIf Periodic is true, requests for time will be wrapped around so\nthat the source appears to be a periodic time source. If data\nexists for times {0,N-1}, setting periodic to true will cause\ntime 0 to be produced when time N, 2N, 2N etc is requested. This\neffectively gives the source the ability to generate time data\nindefinitely in a loop. When combined with Shift/Scale, the time\nbecomes periodic in the shifted and scaled time frame of\nreference. Note: Since the input time may not start at zero, the\nwrapping of time from the end of one period to the start of the\nnext, will subtract the initial time - a source with T{5..6}\nrepeated periodicaly will have output time {5..6..7..8} etc.\n"},
  {(char*)"PeriodicOff", PyvtkTemporalShiftScale_PeriodicOff, METH_VARARGS,
   (char*)"V.PeriodicOff()\nC++: void PeriodicOff()\n\nIf Periodic is true, requests for time will be wrapped around so\nthat the source appears to be a periodic time source. If data\nexists for times {0,N-1}, setting periodic to true will cause\ntime 0 to be produced when time N, 2N, 2N etc is requested. This\neffectively gives the source the ability to generate time data\nindefinitely in a loop. When combined with Shift/Scale, the time\nbecomes periodic in the shifted and scaled time frame of\nreference. Note: Since the input time may not start at zero, the\nwrapping of time from the end of one period to the start of the\nnext, will subtract the initial time - a source with T{5..6}\nrepeated periodicaly will have output time {5..6..7..8} etc.\n"},
  {(char*)"SetPeriodicEndCorrection", PyvtkTemporalShiftScale_SetPeriodicEndCorrection, METH_VARARGS,
   (char*)"V.SetPeriodicEndCorrection(int)\nC++: void SetPeriodicEndCorrection(int a)\n\nif Periodic time is enabled, this flag determines if the last\ntime step is the same as the first. If PeriodicEndCorrection is\ntrue, then it is assumed that the input data goes from 0-1 (or\nwhatever scaled/shifted actual time) and time 1 is the same as\ntime 0 so that steps will be 0,1,2,3...N,1,2,3...N,1,2,3 where\nstep N is the same as 0 and step 0 is not repeated. When this\nflag is false the data is assumed to be literal and output is of\nthe form 0,1,2,3...N,0,1,2,3... By default this flag is ON\n"},
  {(char*)"GetPeriodicEndCorrection", PyvtkTemporalShiftScale_GetPeriodicEndCorrection, METH_VARARGS,
   (char*)"V.GetPeriodicEndCorrection() -> int\nC++: int GetPeriodicEndCorrection()\n\nif Periodic time is enabled, this flag determines if the last\ntime step is the same as the first. If PeriodicEndCorrection is\ntrue, then it is assumed that the input data goes from 0-1 (or\nwhatever scaled/shifted actual time) and time 1 is the same as\ntime 0 so that steps will be 0,1,2,3...N,1,2,3...N,1,2,3 where\nstep N is the same as 0 and step 0 is not repeated. When this\nflag is false the data is assumed to be literal and output is of\nthe form 0,1,2,3...N,0,1,2,3... By default this flag is ON\n"},
  {(char*)"PeriodicEndCorrectionOn", PyvtkTemporalShiftScale_PeriodicEndCorrectionOn, METH_VARARGS,
   (char*)"V.PeriodicEndCorrectionOn()\nC++: void PeriodicEndCorrectionOn()\n\nif Periodic time is enabled, this flag determines if the last\ntime step is the same as the first. If PeriodicEndCorrection is\ntrue, then it is assumed that the input data goes from 0-1 (or\nwhatever scaled/shifted actual time) and time 1 is the same as\ntime 0 so that steps will be 0,1,2,3...N,1,2,3...N,1,2,3 where\nstep N is the same as 0 and step 0 is not repeated. When this\nflag is false the data is assumed to be literal and output is of\nthe form 0,1,2,3...N,0,1,2,3... By default this flag is ON\n"},
  {(char*)"PeriodicEndCorrectionOff", PyvtkTemporalShiftScale_PeriodicEndCorrectionOff, METH_VARARGS,
   (char*)"V.PeriodicEndCorrectionOff()\nC++: void PeriodicEndCorrectionOff()\n\nif Periodic time is enabled, this flag determines if the last\ntime step is the same as the first. If PeriodicEndCorrection is\ntrue, then it is assumed that the input data goes from 0-1 (or\nwhatever scaled/shifted actual time) and time 1 is the same as\ntime 0 so that steps will be 0,1,2,3...N,1,2,3...N,1,2,3 where\nstep N is the same as 0 and step 0 is not repeated. When this\nflag is false the data is assumed to be literal and output is of\nthe form 0,1,2,3...N,0,1,2,3... By default this flag is ON\n"},
  {(char*)"SetMaximumNumberOfPeriods", PyvtkTemporalShiftScale_SetMaximumNumberOfPeriods, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPeriods(float)\nC++: void SetMaximumNumberOfPeriods(double a)\n\nif Periodic time is enabled, this controls how many time periods\ntime is reported for. A filter cannot output an infinite number\nof time steps and therefore a finite number of periods is\ngenerated when reporting time.\n"},
  {(char*)"GetMaximumNumberOfPeriods", PyvtkTemporalShiftScale_GetMaximumNumberOfPeriods, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPeriods() -> float\nC++: double GetMaximumNumberOfPeriods()\n\nif Periodic time is enabled, this controls how many time periods\ntime is reported for. A filter cannot output an infinite number\nof time steps and therefore a finite number of periods is\ngenerated when reporting time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalShiftScale_StaticNew()
{
  return vtkTemporalShiftScale::New();
}

PyObject *PyVTKClass_vtkTemporalShiftScaleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalShiftScale_StaticNew,
    PyvtkTemporalShiftScale_Methods,
    "vtkTemporalShiftScale", modulename,
    NULL, NULL,
    PyvtkTemporalShiftScale_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalShiftScale_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalShiftScale - modify the time range/steps of temporal data\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTemporalShiftScale  modify the time range or time steps of the\ndata without changing the data itself. The data is not resampled by\nthis filter, only the information accompanying the data is modified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalShiftScale(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalShiftScaleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalShiftScale", o) != 0)
    {
    Py_DECREF(o);
    }

}

