// python wrapper for vtkTexturedSphereSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTexturedSphereSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTexturedSphereSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTexturedSphereSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTexturedSphereSource_Doc();


static PyObject *
PyvtkTexturedSphereSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTexturedSphereSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedSphereSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexturedSphereSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedSphereSource::NewInstance());

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
PyvtkTexturedSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTexturedSphereSource *tempr = vtkTexturedSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkTexturedSphereSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkTexturedSphereSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkTexturedSphereSource::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMinValue() :
      op->vtkTexturedSphereSource::GetThetaResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMaxValue() :
      op->vtkTexturedSphereSource::GetThetaResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkTexturedSphereSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMinValue() :
      op->vtkTexturedSphereSource::GetPhiResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMaxValue() :
      op->vtkTexturedSphereSource::GetPhiResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkTexturedSphereSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTheta(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetTheta(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThetaMinValue() :
      op->vtkTexturedSphereSource::GetThetaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThetaMaxValue() :
      op->vtkTexturedSphereSource::GetThetaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTheta() :
      op->vtkTexturedSphereSource::GetTheta());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhi(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetPhi(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhiMinValue() :
      op->vtkTexturedSphereSource::GetPhiMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhiMaxValue() :
      op->vtkTexturedSphereSource::GetPhiMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhi() :
      op->vtkTexturedSphereSource::GetPhi());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTexturedSphereSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexturedSphereSource_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturedSphereSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTexturedSphereSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTexturedSphereSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTexturedSphereSource\nC++: vtkTexturedSphereSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTexturedSphereSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturedSphereSource\nC++: vtkTexturedSphereSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkTexturedSphereSource_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet radius of sphere.\n"},
  {(char*)"GetRadiusMinValue", PyvtkTexturedSphereSource_GetRadiusMinValue, METH_VARARGS,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet radius of sphere.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkTexturedSphereSource_GetRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet radius of sphere.\n"},
  {(char*)"GetRadius", PyvtkTexturedSphereSource_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet radius of sphere.\n"},
  {(char*)"SetThetaResolution", PyvtkTexturedSphereSource_SetThetaResolution, METH_VARARGS,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int)\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolutionMinValue", PyvtkTexturedSphereSource_GetThetaResolutionMinValue, METH_VARARGS,
   (char*)"V.GetThetaResolutionMinValue() -> int\nC++: int GetThetaResolutionMinValue()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolutionMaxValue", PyvtkTexturedSphereSource_GetThetaResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetThetaResolutionMaxValue() -> int\nC++: int GetThetaResolutionMaxValue()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolution", PyvtkTexturedSphereSource_GetThetaResolution, METH_VARARGS,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"SetPhiResolution", PyvtkTexturedSphereSource_SetPhiResolution, METH_VARARGS,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int)\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolutionMinValue", PyvtkTexturedSphereSource_GetPhiResolutionMinValue, METH_VARARGS,
   (char*)"V.GetPhiResolutionMinValue() -> int\nC++: int GetPhiResolutionMinValue()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolutionMaxValue", PyvtkTexturedSphereSource_GetPhiResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetPhiResolutionMaxValue() -> int\nC++: int GetPhiResolutionMaxValue()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolution", PyvtkTexturedSphereSource_GetPhiResolution, METH_VARARGS,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"SetTheta", PyvtkTexturedSphereSource_SetTheta, METH_VARARGS,
   (char*)"V.SetTheta(float)\nC++: void SetTheta(double)\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetThetaMinValue", PyvtkTexturedSphereSource_GetThetaMinValue, METH_VARARGS,
   (char*)"V.GetThetaMinValue() -> float\nC++: double GetThetaMinValue()\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetThetaMaxValue", PyvtkTexturedSphereSource_GetThetaMaxValue, METH_VARARGS,
   (char*)"V.GetThetaMaxValue() -> float\nC++: double GetThetaMaxValue()\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetTheta", PyvtkTexturedSphereSource_GetTheta, METH_VARARGS,
   (char*)"V.GetTheta() -> float\nC++: double GetTheta()\n\nSet the maximum longitude angle.\n"},
  {(char*)"SetPhi", PyvtkTexturedSphereSource_SetPhi, METH_VARARGS,
   (char*)"V.SetPhi(float)\nC++: void SetPhi(double)\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhiMinValue", PyvtkTexturedSphereSource_GetPhiMinValue, METH_VARARGS,
   (char*)"V.GetPhiMinValue() -> float\nC++: double GetPhiMinValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhiMaxValue", PyvtkTexturedSphereSource_GetPhiMaxValue, METH_VARARGS,
   (char*)"V.GetPhiMaxValue() -> float\nC++: double GetPhiMaxValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhi", PyvtkTexturedSphereSource_GetPhi, METH_VARARGS,
   (char*)"V.GetPhi() -> float\nC++: double GetPhi()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkTexturedSphereSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkTexturedSphereSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturedSphereSource_StaticNew()
{
  return vtkTexturedSphereSource::New();
}

PyObject *PyVTKClass_vtkTexturedSphereSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturedSphereSource_StaticNew,
    PyvtkTexturedSphereSource_Methods,
    "vtkTexturedSphereSource", modulename,
    NULL, NULL,
    PyvtkTexturedSphereSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTexturedSphereSource_Doc()
{
  static const char *docstring[] = {
    "vtkTexturedSphereSource - create a sphere centered at the origin\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTexturedSphereSource creates a polygonal sphere of specified\nradius centered at the origin. The resolution (polygonal\ndiscretization) in both the latitude (phi) and longitude (theta)\ndirections can be specified. It also is possible to create partial\nsphere by specifying maximum phi and theta angles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturedSphereSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturedSphereSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturedSphereSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_MAX_SPHERE_RESOLUTION", o);
    Py_DECREF(o);
    }
}

