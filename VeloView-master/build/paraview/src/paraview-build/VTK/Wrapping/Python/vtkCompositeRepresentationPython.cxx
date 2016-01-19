// python wrapper for vtkCompositeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkCompositeRepresentation_Doc();


static PyObject *
PyvtkCompositeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeRepresentation::NewInstance());

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
PyvtkCompositeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeRepresentation *tempr = vtkCompositeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->AddRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkCompositeRepresentation::AddRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->RemoveRepresentation(temp0);
      }
    else
      {
      op->vtkCompositeRepresentation::RemoveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveRepresentation(temp0);
      }
    else
      {
      op->vtkCompositeRepresentation::RemoveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_RemoveRepresentation_Methods[] = {
  {NULL, PyvtkCompositeRepresentation_RemoveRepresentation_s1, METH_VARARGS,
   (char*)"@O *vtkPVDataRepresentation"},
  {NULL, PyvtkCompositeRepresentation_RemoveRepresentation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeRepresentation_RemoveRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveRepresentation");
  return NULL;
}



static PyObject *
PyvtkCompositeRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveRepresentation(temp0);
      }
    else
      {
      op->vtkCompositeRepresentation::SetActiveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetActiveRepresentationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveRepresentationKey() :
      op->vtkCompositeRepresentation::GetActiveRepresentationKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->GetActiveRepresentation() :
      op->vtkCompositeRepresentation::GetActiveRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositeRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkCompositeRepresentation_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkCompositeRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositeRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkCompositeRepresentation_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_RemoveInputConnection_Methods[] = {
  {NULL, PyvtkCompositeRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   (char*)"@iO *vtkAlgorithmOutput"},
  {NULL, PyvtkCompositeRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeRepresentation_RemoveInputConnection_Methods;
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
PyvtkCompositeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkCompositeRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkCompositeRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkCompositeRepresentation::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkCompositeRepresentation::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCompositeRepresentation_Update_s1(self, args);
    case 1:
      return PyvtkCompositeRepresentation_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkCompositeRepresentation_GetRepresentationTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetRepresentationTypes() :
      op->vtkCompositeRepresentation::GetRepresentationTypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetUpdateTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetForceUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetForcedCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeRepresentation\nC++: vtkCompositeRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeRepresentation\nC++: vtkCompositeRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkCompositeRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nMethods overridden to propagate to the active representation.\n"},
  {(char*)"AddRepresentation", PyvtkCompositeRepresentation_AddRepresentation, METH_VARARGS,
   (char*)"V.AddRepresentation(string, vtkPVDataRepresentation)\nC++: virtual void AddRepresentation(const char *key,\n    vtkPVDataRepresentation *repr)\n\nAdd/Remove representations. key is a unique string used to\nidentify that representation.\n"},
  {(char*)"RemoveRepresentation", PyvtkCompositeRepresentation_RemoveRepresentation, METH_VARARGS,
   (char*)"V.RemoveRepresentation(vtkPVDataRepresentation)\nC++: virtual void RemoveRepresentation(\n    vtkPVDataRepresentation *repr)\nV.RemoveRepresentation(string)\nC++: virtual void RemoveRepresentation(const char *key)\n\nAdd/Remove representations. key is a unique string used to\nidentify that representation.\n"},
  {(char*)"SetActiveRepresentation", PyvtkCompositeRepresentation_SetActiveRepresentation, METH_VARARGS,
   (char*)"V.SetActiveRepresentation(string)\nC++: void SetActiveRepresentation(const char *key)\n\nSet the active key. If a valid key is not specified, then none of\nthe representations is treated as active.\n"},
  {(char*)"GetActiveRepresentationKey", PyvtkCompositeRepresentation_GetActiveRepresentationKey, METH_VARARGS,
   (char*)"V.GetActiveRepresentationKey() -> string\nC++: const char *GetActiveRepresentationKey()\n\nSet the active key. If a valid key is not specified, then none of\nthe representations is treated as active.\n"},
  {(char*)"GetActiveRepresentation", PyvtkCompositeRepresentation_GetActiveRepresentation, METH_VARARGS,
   (char*)"V.GetActiveRepresentation() -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *GetActiveRepresentation()\n\nReturns the active representation if valid.\n"},
  {(char*)"SetInputConnection", PyvtkCompositeRepresentation_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"AddInputConnection", PyvtkCompositeRepresentation_AddInputConnection, METH_VARARGS,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"RemoveInputConnection", PyvtkCompositeRepresentation_RemoveInputConnection, METH_VARARGS,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.RemoveInputConnection(int, int)\nC++: virtual void RemoveInputConnection(int port, int idx)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"MarkModified", PyvtkCompositeRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nPropagate the modification to all internal representations.\n"},
  {(char*)"GetRenderedDataObject", PyvtkCompositeRepresentation_GetRenderedDataObject, METH_VARARGS,
   (char*)"V.GetRenderedDataObject(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetRenderedDataObject(int port)\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {(char*)"Update", PyvtkCompositeRepresentation_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\nV.Update(int)\nC++: virtual void Update(int port)\n\nBring this algorithm's outputs up-to-date.\n"},
  {(char*)"GetRepresentationTypes", PyvtkCompositeRepresentation_GetRepresentationTypes, METH_VARARGS,
   (char*)"V.GetRepresentationTypes() -> vtkStringArray\nC++: vtkStringArray *GetRepresentationTypes()\n\nReturns the list of available representation types as a string\narray.\n"},
  {(char*)"SetUpdateTime", PyvtkCompositeRepresentation_SetUpdateTime, METH_VARARGS,
   (char*)"V.SetUpdateTime(float)\nC++: virtual void SetUpdateTime(double time)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetUseCache", PyvtkCompositeRepresentation_SetUseCache, METH_VARARGS,
   (char*)"V.SetUseCache(bool)\nC++: virtual void SetUseCache(bool val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetCacheKey", PyvtkCompositeRepresentation_SetCacheKey, METH_VARARGS,
   (char*)"V.SetCacheKey(float)\nC++: virtual void SetCacheKey(double val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetForceUseCache", PyvtkCompositeRepresentation_SetForceUseCache, METH_VARARGS,
   (char*)"V.SetForceUseCache(bool)\nC++: virtual void SetForceUseCache(bool val)\n\nPassed on to internal representations as well.\n"},
  {(char*)"SetForcedCacheKey", PyvtkCompositeRepresentation_SetForcedCacheKey, METH_VARARGS,
   (char*)"V.SetForcedCacheKey(float)\nC++: virtual void SetForcedCacheKey(double val)\n\nPassed on to internal representations as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeRepresentation_StaticNew()
{
  return vtkCompositeRepresentation::New();
}

PyObject *PyVTKClass_vtkCompositeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeRepresentation_StaticNew,
    PyvtkCompositeRepresentation_Methods,
    "vtkCompositeRepresentation", modulename,
    NULL, NULL,
    PyvtkCompositeRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkCompositeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeRepresentation - combine multiple representations into one\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkCompositeRepresentation makes is possible to combine multiple\nrepresentations into one. Only one representation can be active at a\ngive time. vtkCompositeRepresentation provides API to add the\nrepresentations that form the composite and to pick the active\nrepresentation.\n\nvtkCompositeRepresentation relies on call AddToView and\nRemoveFromView on the internal representations whenever it needs to\n",
    "change the active representation. So it is essential that\nrepresentations handle those methods correctly and don't suffer from uncanny side effects when\nthat's done repeatedly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

