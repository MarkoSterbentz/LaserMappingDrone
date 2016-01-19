// python wrapper for vtkAMRGaussianPulseSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRGaussianPulseSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRGaussianPulseSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRGaussianPulseSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
#endif

static const char **PyvtkAMRGaussianPulseSource_Doc();


static PyObject *
PyvtkAMRGaussianPulseSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRGaussianPulseSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRGaussianPulseSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRGaussianPulseSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRGaussianPulseSource::NewInstance());

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
PyvtkAMRGaussianPulseSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRGaussianPulseSource *tempr = vtkAMRGaussianPulseSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLevels(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetNumberOfLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRefinementRatio(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetRefinementRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRootSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootSpacing(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetRootSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
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
      op->SetPulseOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPulseOrigin(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseOrigin");
  return NULL;
}



static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPulseOrigin() :
      op->vtkAMRGaussianPulseSource::GetPulseOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXPulseOrigin(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetXPulseOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYPulseOrigin(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetYPulseOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZPulseOrigin(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetZPulseOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
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
      op->SetPulseWidth(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPulseWidth(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseWidth");
  return NULL;
}



static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPulseWidth() :
      op->vtkAMRGaussianPulseSource::GetPulseWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXPulseWidth(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetXPulseWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYPulseWidth(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetYPulseWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZPulseWidth(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetZPulseWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPulseAmplitude(temp0);
      }
    else
      {
      op->vtkAMRGaussianPulseSource::SetPulseAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPulseAmplitude() :
      op->vtkAMRGaussianPulseSource::GetPulseAmplitude());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRGaussianPulseSource_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRGaussianPulseSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRGaussianPulseSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRGaussianPulseSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRGaussianPulseSource\nC++: vtkAMRGaussianPulseSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRGaussianPulseSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRGaussianPulseSource\nC++: vtkAMRGaussianPulseSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimension", PyvtkAMRGaussianPulseSource_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int a)\n\nSets the dimension of the AMR dataset to generate\n"},
  {(char*)"SetNumberOfLevels", PyvtkAMRGaussianPulseSource_SetNumberOfLevels, METH_VARARGS,
   (char*)"V.SetNumberOfLevels(int)\nC++: void SetNumberOfLevels(int a)\n\nSets the number of levels to generate\n"},
  {(char*)"SetRefinementRatio", PyvtkAMRGaussianPulseSource_SetRefinementRatio, METH_VARARGS,
   (char*)"V.SetRefinementRatio(int)\nC++: void SetRefinementRatio(int r)\n\nSet the refinement ratio\n"},
  {(char*)"SetRootSpacing", PyvtkAMRGaussianPulseSource_SetRootSpacing, METH_VARARGS,
   (char*)"V.SetRootSpacing(float)\nC++: void SetRootSpacing(double h0)\n\nSet the root spacing\n"},
  {(char*)"SetPulseOrigin", PyvtkAMRGaussianPulseSource_SetPulseOrigin, METH_VARARGS,
   (char*)"V.SetPulseOrigin(float, float, float)\nC++: void SetPulseOrigin(double, double, double)\nV.SetPulseOrigin((float, float, float))\nC++: void SetPulseOrigin(double a[3])\n\n"},
  {(char*)"GetPulseOrigin", PyvtkAMRGaussianPulseSource_GetPulseOrigin, METH_VARARGS,
   (char*)"V.GetPulseOrigin() -> (float, float, float)\nC++: double *GetPulseOrigin()\n\n"},
  {(char*)"SetXPulseOrigin", PyvtkAMRGaussianPulseSource_SetXPulseOrigin, METH_VARARGS,
   (char*)"V.SetXPulseOrigin(float)\nC++: void SetXPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {(char*)"SetYPulseOrigin", PyvtkAMRGaussianPulseSource_SetYPulseOrigin, METH_VARARGS,
   (char*)"V.SetYPulseOrigin(float)\nC++: void SetYPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {(char*)"SetZPulseOrigin", PyvtkAMRGaussianPulseSource_SetZPulseOrigin, METH_VARARGS,
   (char*)"V.SetZPulseOrigin(float)\nC++: void SetZPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {(char*)"SetPulseWidth", PyvtkAMRGaussianPulseSource_SetPulseWidth, METH_VARARGS,
   (char*)"V.SetPulseWidth(float, float, float)\nC++: void SetPulseWidth(double, double, double)\nV.SetPulseWidth((float, float, float))\nC++: void SetPulseWidth(double a[3])\n\n"},
  {(char*)"GetPulseWidth", PyvtkAMRGaussianPulseSource_GetPulseWidth, METH_VARARGS,
   (char*)"V.GetPulseWidth() -> (float, float, float)\nC++: double *GetPulseWidth()\n\n"},
  {(char*)"SetXPulseWidth", PyvtkAMRGaussianPulseSource_SetXPulseWidth, METH_VARARGS,
   (char*)"V.SetXPulseWidth(float)\nC++: void SetXPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {(char*)"SetYPulseWidth", PyvtkAMRGaussianPulseSource_SetYPulseWidth, METH_VARARGS,
   (char*)"V.SetYPulseWidth(float)\nC++: void SetYPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {(char*)"SetZPulseWidth", PyvtkAMRGaussianPulseSource_SetZPulseWidth, METH_VARARGS,
   (char*)"V.SetZPulseWidth(float)\nC++: void SetZPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {(char*)"SetPulseAmplitude", PyvtkAMRGaussianPulseSource_SetPulseAmplitude, METH_VARARGS,
   (char*)"V.SetPulseAmplitude(float)\nC++: void SetPulseAmplitude(double a)\n\nSet & Get macro for the pulse amplitude\n"},
  {(char*)"GetPulseAmplitude", PyvtkAMRGaussianPulseSource_GetPulseAmplitude, METH_VARARGS,
   (char*)"V.GetPulseAmplitude() -> float\nC++: double GetPulseAmplitude()\n\nSet & Get macro for the pulse amplitude\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRGaussianPulseSource_StaticNew()
{
  return vtkAMRGaussianPulseSource::New();
}

PyObject *PyVTKClass_vtkAMRGaussianPulseSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRGaussianPulseSource_StaticNew,
    PyvtkAMRGaussianPulseSource_Methods,
    "vtkAMRGaussianPulseSource", modulename,
    NULL, NULL,
    PyvtkAMRGaussianPulseSource_Doc(),
    PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRGaussianPulseSource_Doc()
{
  static const char *docstring[] = {
    "vtkAMRGaussianPulseSource.h -- 2-D and 3-D AMR source\n\n",
    "Superclass: vtkOverlappingAMRAlgorithm\n\n",
    "A source that generates sample AMR data with gaussian pulse field.\nThe user\n can control the refinement ratio as well as the pulse attributes\nsuch as\n the pulse origin, length and amplitude.\n\nSee Also:\n\n\n vtkOverlappingAMR\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRGaussianPulseSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRGaussianPulseSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRGaussianPulseSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

