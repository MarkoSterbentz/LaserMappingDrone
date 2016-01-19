// python wrapper for vtkVolumeOutlineSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeOutlineSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeOutlineSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeOutlineSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVolumeOutlineSource_Doc();


static PyObject *
PyvtkVolumeOutlineSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeOutlineSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeOutlineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeOutlineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeOutlineSource::NewInstance());

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
PyvtkVolumeOutlineSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeOutlineSource *tempr = vtkVolumeOutlineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  vtkVolumeMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetVolumeMapper(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetVolumeMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkVolumeOutlineSource::GetVolumeMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateScalars(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetGenerateScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateScalarsOn();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateScalarsOff();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateScalars() :
      op->vtkVolumeOutlineSource::GetGenerateScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateOutline(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetGenerateOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateOutlineOn();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateOutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateOutlineOff();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateOutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkVolumeOutlineSource::GetGenerateOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFaces(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetGenerateFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOn();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOff();
      }
    else
      {
      op->vtkVolumeOutlineSource::GenerateFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkVolumeOutlineSource::GetGenerateFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeOutlineSource_SetColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkVolumeOutlineSource_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkVolumeOutlineSource::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlaneId(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetActivePlaneId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkVolumeOutlineSource::GetActivePlaneId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlaneColor(temp0);
      }
    else
      {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return NULL;
}



static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkVolumeOutlineSource::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeOutlineSource_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeOutlineSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeOutlineSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeOutlineSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeOutlineSource\nC++: vtkVolumeOutlineSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeOutlineSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeOutlineSource\nC++: vtkVolumeOutlineSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVolumeMapper", PyvtkVolumeOutlineSource_SetVolumeMapper, METH_VARARGS,
   (char*)"V.SetVolumeMapper(vtkVolumeMapper)\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet the mapper that has the cropping region that the outline will\nbe generated for.  The mapper must have an input, because the\nbounds of the data must be computed in order to generate the\noutline.\n"},
  {(char*)"GetVolumeMapper", PyvtkVolumeOutlineSource_GetVolumeMapper, METH_VARARGS,
   (char*)"V.GetVolumeMapper() -> vtkVolumeMapper\nC++: vtkVolumeMapper *GetVolumeMapper()\n\nSet the mapper that has the cropping region that the outline will\nbe generated for.  The mapper must have an input, because the\nbounds of the data must be computed in order to generate the\noutline.\n"},
  {(char*)"SetGenerateScalars", PyvtkVolumeOutlineSource_SetGenerateScalars, METH_VARARGS,
   (char*)"V.SetGenerateScalars(int)\nC++: void SetGenerateScalars(int a)\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {(char*)"GenerateScalarsOn", PyvtkVolumeOutlineSource_GenerateScalarsOn, METH_VARARGS,
   (char*)"V.GenerateScalarsOn()\nC++: void GenerateScalarsOn()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {(char*)"GenerateScalarsOff", PyvtkVolumeOutlineSource_GenerateScalarsOff, METH_VARARGS,
   (char*)"V.GenerateScalarsOff()\nC++: void GenerateScalarsOff()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {(char*)"GetGenerateScalars", PyvtkVolumeOutlineSource_GetGenerateScalars, METH_VARARGS,
   (char*)"V.GetGenerateScalars() -> int\nC++: int GetGenerateScalars()\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {(char*)"SetGenerateOutline", PyvtkVolumeOutlineSource_SetGenerateOutline, METH_VARARGS,
   (char*)"V.SetGenerateOutline(int)\nC++: void SetGenerateOutline(int a)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {(char*)"GenerateOutlineOn", PyvtkVolumeOutlineSource_GenerateOutlineOn, METH_VARARGS,
   (char*)"V.GenerateOutlineOn()\nC++: void GenerateOutlineOn()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {(char*)"GenerateOutlineOff", PyvtkVolumeOutlineSource_GenerateOutlineOff, METH_VARARGS,
   (char*)"V.GenerateOutlineOff()\nC++: void GenerateOutlineOff()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {(char*)"GetGenerateOutline", PyvtkVolumeOutlineSource_GetGenerateOutline, METH_VARARGS,
   (char*)"V.GetGenerateOutline() -> int\nC++: int GetGenerateOutline()\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {(char*)"SetGenerateFaces", PyvtkVolumeOutlineSource_SetGenerateFaces, METH_VARARGS,
   (char*)"V.SetGenerateFaces(int)\nC++: void SetGenerateFaces(int a)\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {(char*)"GenerateFacesOn", PyvtkVolumeOutlineSource_GenerateFacesOn, METH_VARARGS,
   (char*)"V.GenerateFacesOn()\nC++: void GenerateFacesOn()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {(char*)"GenerateFacesOff", PyvtkVolumeOutlineSource_GenerateFacesOff, METH_VARARGS,
   (char*)"V.GenerateFacesOff()\nC++: void GenerateFacesOff()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {(char*)"GetGenerateFaces", PyvtkVolumeOutlineSource_GetGenerateFaces, METH_VARARGS,
   (char*)"V.GetGenerateFaces() -> int\nC++: int GetGenerateFaces()\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {(char*)"SetColor", PyvtkVolumeOutlineSource_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"GetColor", PyvtkVolumeOutlineSource_GetColor, METH_VARARGS,
   (char*)"V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {(char*)"SetActivePlaneId", PyvtkVolumeOutlineSource_SetActivePlaneId, METH_VARARGS,
   (char*)"V.SetActivePlaneId(int)\nC++: void SetActivePlaneId(int a)\n\nSet the active plane, e.g. to display which plane is currently\nbeing modified by an interaction.  Set this to -1 if there is no\nactive plane. The default value is -1.\n"},
  {(char*)"GetActivePlaneId", PyvtkVolumeOutlineSource_GetActivePlaneId, METH_VARARGS,
   (char*)"V.GetActivePlaneId() -> int\nC++: int GetActivePlaneId()\n\nSet the active plane, e.g. to display which plane is currently\nbeing modified by an interaction.  Set this to -1 if there is no\nactive plane. The default value is -1.\n"},
  {(char*)"SetActivePlaneColor", PyvtkVolumeOutlineSource_SetActivePlaneColor, METH_VARARGS,
   (char*)"V.SetActivePlaneColor(float, float, float)\nC++: void SetActivePlaneColor(double, double, double)\nV.SetActivePlaneColor((float, float, float))\nC++: void SetActivePlaneColor(double a[3])\n\n"},
  {(char*)"GetActivePlaneColor", PyvtkVolumeOutlineSource_GetActivePlaneColor, METH_VARARGS,
   (char*)"V.GetActivePlaneColor() -> (float, float, float)\nC++: double *GetActivePlaneColor()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeOutlineSource_StaticNew()
{
  return vtkVolumeOutlineSource::New();
}

PyObject *PyVTKClass_vtkVolumeOutlineSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeOutlineSource_StaticNew,
    PyvtkVolumeOutlineSource_Methods,
    "vtkVolumeOutlineSource", modulename,
    NULL, NULL,
    PyvtkVolumeOutlineSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeOutlineSource_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeOutlineSource - outline of volume cropping region\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkVolumeOutlineSource generates a wireframe outline that corresponds\nto the cropping region of a vtkVolumeMapper.  It requires a\nvtkVolumeMapper as input.  The GenerateFaces option turns on the\nsolid faces of the outline, and the GenerateScalars option generates\ncolor scalars.  When GenerateScalars is on, it is possible to set an\n\"ActivePlaneId\" value in the range [0..6] to highlight one of the s",
    "ix\ncropping planes.\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeOutlineSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeOutlineSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeOutlineSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

