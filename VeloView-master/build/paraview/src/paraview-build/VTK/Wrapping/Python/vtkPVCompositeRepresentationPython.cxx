// python wrapper for vtkPVCompositeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCompositeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCompositeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCompositeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkCompositeRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeRepresentationNew
#endif

static const char **PyvtkPVCompositeRepresentation_Doc();


static PyObject *
PyvtkPVCompositeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCompositeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeRepresentation::NewInstance());

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
PyvtkPVCompositeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCompositeRepresentation *tempr = vtkPVCompositeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetCubeAxesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeAxesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkCubeAxesRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCubeAxesRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetCubeAxesRepresentation(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetCubeAxesRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkSelectionRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionRepresentation(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetSelectionRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVCompositeRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeRepresentation_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeRepresentation::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVCompositeRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeRepresentation_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeRepresentation_RemoveInputConnection_Methods[] = {
  {NULL, PyvtkPVCompositeRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   (char*)"@iO *vtkAlgorithmOutput"},
  {NULL, PyvtkPVCompositeRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVCompositeRepresentation_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkPVCompositeRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetCubeAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCubeAxesVisibility(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetCubeAxesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetSelectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionVisibility(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetSelectionVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateTime(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetUpdateTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCache(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheKey(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceUseCache(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetForceUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForcedCacheKey(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetForcedCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetPointFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointFieldDataArrayName(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetPointFieldDataArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetCellFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellFieldDataArrayName(temp0);
      }
    else
      {
      op->vtkPVCompositeRepresentation::SetCellFieldDataArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVCompositeRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCompositeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCompositeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCompositeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCompositeRepresentation\nC++: vtkPVCompositeRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCompositeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCompositeRepresentation\nC++: vtkPVCompositeRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCubeAxesRepresentation", PyvtkPVCompositeRepresentation_SetCubeAxesRepresentation, METH_VARARGS,
   (char*)"V.SetCubeAxesRepresentation(vtkCubeAxesRepresentation)\nC++: void SetCubeAxesRepresentation(vtkCubeAxesRepresentation *)\n\nThese must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {(char*)"SetSelectionRepresentation", PyvtkPVCompositeRepresentation_SetSelectionRepresentation, METH_VARARGS,
   (char*)"V.SetSelectionRepresentation(vtkSelectionRepresentation)\nC++: void SetSelectionRepresentation(vtkSelectionRepresentation *)\n\nThese must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {(char*)"SetInputConnection", PyvtkPVCompositeRepresentation_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"AddInputConnection", PyvtkPVCompositeRepresentation_AddInputConnection, METH_VARARGS,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"RemoveInputConnection", PyvtkPVCompositeRepresentation_RemoveInputConnection, METH_VARARGS,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.RemoveInputConnection(int, int)\nC++: virtual void RemoveInputConnection(int port, int index)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"MarkModified", PyvtkPVCompositeRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nPropagate the modification to all internal representations.\n"},
  {(char*)"SetVisibility", PyvtkPVCompositeRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation. Overridden to update the\ncube-axes and selection visibilities.\n"},
  {(char*)"SetCubeAxesVisibility", PyvtkPVCompositeRepresentation_SetCubeAxesVisibility, METH_VARARGS,
   (char*)"V.SetCubeAxesVisibility(bool)\nC++: void SetCubeAxesVisibility(bool visible)\n\nSet the visibility for the cube-axis.\n"},
  {(char*)"SetSelectionVisibility", PyvtkPVCompositeRepresentation_SetSelectionVisibility, METH_VARARGS,
   (char*)"V.SetSelectionVisibility(bool)\nC++: virtual void SetSelectionVisibility(bool visible)\n\nSet the selection visibility.\n"},
  {(char*)"SetUpdateTime", PyvtkPVCompositeRepresentation_SetUpdateTime, METH_VARARGS,
   (char*)"V.SetUpdateTime(float)\nC++: virtual void SetUpdateTime(double time)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetUseCache", PyvtkPVCompositeRepresentation_SetUseCache, METH_VARARGS,
   (char*)"V.SetUseCache(bool)\nC++: virtual void SetUseCache(bool val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetCacheKey", PyvtkPVCompositeRepresentation_SetCacheKey, METH_VARARGS,
   (char*)"V.SetCacheKey(float)\nC++: virtual void SetCacheKey(double val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetForceUseCache", PyvtkPVCompositeRepresentation_SetForceUseCache, METH_VARARGS,
   (char*)"V.SetForceUseCache(bool)\nC++: virtual void SetForceUseCache(bool val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetForcedCacheKey", PyvtkPVCompositeRepresentation_SetForcedCacheKey, METH_VARARGS,
   (char*)"V.SetForcedCacheKey(float)\nC++: virtual void SetForcedCacheKey(double val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetPointFieldDataArrayName", PyvtkPVCompositeRepresentation_SetPointFieldDataArrayName, METH_VARARGS,
   (char*)"V.SetPointFieldDataArrayName(string)\nC++: virtual void SetPointFieldDataArrayName(const char *)\n\nForwarded to vtkSelectionRepresentation.\n"},
  {(char*)"SetCellFieldDataArrayName", PyvtkPVCompositeRepresentation_SetCellFieldDataArrayName, METH_VARARGS,
   (char*)"V.SetCellFieldDataArrayName(string)\nC++: virtual void SetCellFieldDataArrayName(const char *)\n\nForwarded to vtkSelectionRepresentation.\n"},
  {(char*)"Initialize", PyvtkPVCompositeRepresentation_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int) -> int\nC++: virtual unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable)\n\nOverride because of internal composite representations that need\nto be initilized as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCompositeRepresentation_StaticNew()
{
  return vtkPVCompositeRepresentation::New();
}

PyObject *PyVTKClass_vtkPVCompositeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCompositeRepresentation_StaticNew,
    PyvtkPVCompositeRepresentation_Methods,
    "vtkPVCompositeRepresentation", modulename,
    NULL, NULL,
    PyvtkPVCompositeRepresentation_Doc(),
    PyVTKClass_vtkCompositeRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVCompositeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVCompositeRepresentation - a data-representation used by ParaView.\n\n",
    "Superclass: vtkCompositeRepresentation\n\n",
    "vtkPVCompositeRepresentation is a data-representation used by\nParaView for showing a type of data-set in the render view. It is a\ncomposite-representation with some fixed representations for showing\nthings like selection and cube-axes. This representation has 1 input\nport and it ensures that that input is passed on to the internal\nrepresentations (except SelectionRepresentation) properly. For\nSele",
    "ctionRepresentation, the client is expected to setup the input\n(look at vtkSMPVRepresentationProxy).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCompositeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCompositeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCompositeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

