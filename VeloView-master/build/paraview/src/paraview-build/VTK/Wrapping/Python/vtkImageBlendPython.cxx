// python wrapper for vtkImageBlend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageBlend.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageBlend(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageBlendNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageBlend_Doc();


static PyObject *
PyvtkImageBlend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageBlend::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBlend::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageBlend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBlend::NewInstance());

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
PyvtkImageBlend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageBlend *tempr = vtkImageBlend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->ReplaceNthInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkImageBlend::ReplaceNthInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkImageBlend::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkImageBlend::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageBlend_SetInputData_s1(self, args);
    case 1:
      return PyvtkImageBlend_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkImageBlend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkImageBlend::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageBlend::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageBlend_GetInput_s1(self, args);
    case 0:
      return PyvtkImageBlend_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageBlend_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputs() :
      op->vtkImageBlend::GetNumberOfInputs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0, temp1);
      }
    else
      {
      op->vtkImageBlend::SetOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkImageBlend::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetStencilConnection(temp0);
      }
    else
      {
      op->vtkImageBlend::SetStencilConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencilData(temp0);
      }
    else
      {
      op->vtkImageBlend::SetStencilData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageBlend::GetStencil());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkImageBlend::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBlendModeMinValue() :
      op->vtkImageBlend::GetBlendModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBlendModeMaxValue() :
      op->vtkImageBlend::GetBlendModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkImageBlend::GetBlendMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToNormal();
      }
    else
      {
      op->vtkImageBlend::SetBlendModeToNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToCompound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToCompound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToCompound();
      }
    else
      {
      op->vtkImageBlend::SetBlendModeToCompound();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBlendModeAsString() :
      op->vtkImageBlend::GetBlendModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompoundThreshold(temp0);
      }
    else
      {
      op->vtkImageBlend::SetCompoundThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCompoundThreshold() :
      op->vtkImageBlend::GetCompoundThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageBlend_Methods[] = {
  {(char*)"GetClassName", PyvtkImageBlend_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageBlend_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageBlend_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageBlend\nC++: vtkImageBlend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageBlend_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageBlend\nC++: vtkImageBlend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReplaceNthInputConnection", PyvtkImageBlend_ReplaceNthInputConnection, METH_VARARGS,
   (char*)"V.ReplaceNthInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {(char*)"SetInputData", PyvtkImageBlend_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int num, vtkDataObject *input)\nV.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *input)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {(char*)"GetInput", PyvtkImageBlend_GetInput, METH_VARARGS,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {(char*)"GetNumberOfInputs", PyvtkImageBlend_GetNumberOfInputs, METH_VARARGS,
   (char*)"V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {(char*)"SetOpacity", PyvtkImageBlend_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(int, float)\nC++: void SetOpacity(int idx, double opacity)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {(char*)"GetOpacity", PyvtkImageBlend_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity(int) -> float\nC++: double GetOpacity(int idx)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {(char*)"SetStencilConnection", PyvtkImageBlend_SetStencilConnection, METH_VARARGS,
   (char*)"V.SetStencilConnection(vtkAlgorithmOutput)\nC++: void SetStencilConnection(vtkAlgorithmOutput *algOutput)\n\nSet a stencil to apply when blending the data. Create a pipeline\nconnection.\n"},
  {(char*)"SetStencilData", PyvtkImageBlend_SetStencilData, METH_VARARGS,
   (char*)"V.SetStencilData(vtkImageStencilData)\nC++: void SetStencilData(vtkImageStencilData *stencil)\n\nSet a stencil to apply when blending the data.\n"},
  {(char*)"GetStencil", PyvtkImageBlend_GetStencil, METH_VARARGS,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSet a stencil to apply when blending the data.\n"},
  {(char*)"SetBlendMode", PyvtkImageBlend_SetBlendMode, METH_VARARGS,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int)\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMinValue", PyvtkImageBlend_GetBlendModeMinValue, METH_VARARGS,
   (char*)"V.GetBlendModeMinValue() -> int\nC++: int GetBlendModeMinValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMaxValue", PyvtkImageBlend_GetBlendModeMaxValue, METH_VARARGS,
   (char*)"V.GetBlendModeMaxValue() -> int\nC++: int GetBlendModeMaxValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendMode", PyvtkImageBlend_GetBlendMode, METH_VARARGS,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToNormal", PyvtkImageBlend_SetBlendModeToNormal, METH_VARARGS,
   (char*)"V.SetBlendModeToNormal()\nC++: void SetBlendModeToNormal()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToCompound", PyvtkImageBlend_SetBlendModeToCompound, METH_VARARGS,
   (char*)"V.SetBlendModeToCompound()\nC++: void SetBlendModeToCompound()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeAsString", PyvtkImageBlend_GetBlendModeAsString, METH_VARARGS,
   (char*)"V.GetBlendModeAsString() -> string\nC++: const char *GetBlendModeAsString(void)\n\nSet the blend mode\n"},
  {(char*)"SetCompoundThreshold", PyvtkImageBlend_SetCompoundThreshold, METH_VARARGS,
   (char*)"V.SetCompoundThreshold(float)\nC++: void SetCompoundThreshold(double a)\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {(char*)"GetCompoundThreshold", PyvtkImageBlend_GetCompoundThreshold, METH_VARARGS,
   (char*)"V.GetCompoundThreshold() -> float\nC++: double GetCompoundThreshold()\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageBlend_StaticNew()
{
  return vtkImageBlend::New();
}

PyObject *PyVTKClass_vtkImageBlendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageBlend_StaticNew,
    PyvtkImageBlend_Methods,
    "vtkImageBlend", modulename,
    NULL, NULL,
    PyvtkImageBlend_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageBlend_Doc()
{
  static const char *docstring[] = {
    "vtkImageBlend - blend images together using alpha or opacity\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageBlend takes L, LA, RGB, or RGBA images as input and blends\nthem according to the alpha values and/or the opacity setting for\neach input.\n\nThe spacing, origin, extent, and number of components of the output\nare the same as those for the first input.  If the input has an alpha\ncomponent, then this component is copied unchanged into the output.\nIn addition, if the first input has either one c",
    "omponent or two\ncomponents i.e. if it is either L (greyscale) or LA (greyscale +\nalpha) then all other inputs must also be L or LA.\n\nDifferent blending modes are available:\n\nNormal (default) : This is the standard blending mode used by OpenGL\nand other graphics packages.  The output always has the same number\nof components and the same extent as the first input.  The alpha\nvalue of the first input",
    " is not used in the blending computation,\ninstead it is copied directly to the output.\n\noutput <- input[0]\nforeach input i {\n  foreach pixel px {\n    r <- input[i](px)(alpha) * opacity[i]\n    f <- (255 - r)\n    output(px) <- output(px) * f + input(px) * r\n  }\n}\n\nCompound : Images are compounded together and each component is\nscaled by the sum of the alpha/opacity values. Use the\nCompoundThreshold ",
    "method to set specify a threshold in compound mode.\nPixels with opacity*alpha less or equal than this threshold are\nignored. The alpha value of the first input, if present, is NOT\ncopied to the alpha value of the output.  The output always has the\nsame number of components and the same extent as the first input.\n\noutput <- 0\nforeach pixel px {\n  sum <- 0\n  foreach input i {\n    r <- input[i](px)(a",
    "lpha) * opacity(i)\n    sum <- sum + r\n    if r > threshold {\n      output(px) <- output(px) + input(px) * r\n    }\n  }\n  output(px) <- output(px) / sum\n}\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageBlend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageBlendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageBlend", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IMAGE_BLEND_MODE_NORMAL", 0 },
        { "VTK_IMAGE_BLEND_MODE_COMPOUND", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

