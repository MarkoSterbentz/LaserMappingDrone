// python wrapper for vtkKdTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataSet.h"
#include "vtkKdTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKdTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKdTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLocatorNew
extern "C" { PyObject *PyVTKClass_vtkLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkLocatorNew
#endif

static const char **PyvtkKdTree_Doc();


static PyObject *
PyvtkKdTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKdTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTree::NewInstance());

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
PyvtkKdTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKdTree *tempr = vtkKdTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_TimingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimingOn();
      }
    else
      {
      op->vtkKdTree::TimingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_TimingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimingOff();
      }
    else
      {
      op->vtkKdTree::TimingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTiming(temp0);
      }
    else
      {
      op->vtkKdTree::SetTiming(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTiming() :
      op->vtkKdTree::GetTiming());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetMinCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinCells(temp0);
      }
    else
      {
      op->vtkKdTree::SetMinCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetMinCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinCells() :
      op->vtkKdTree::GetMinCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfRegionsOrLess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionsOrLess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionsOrLess() :
      op->vtkKdTree::GetNumberOfRegionsOrLess());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetNumberOfRegionsOrLess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRegionsOrLess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRegionsOrLess(temp0);
      }
    else
      {
      op->vtkKdTree::SetNumberOfRegionsOrLess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfRegionsOrMore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionsOrMore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionsOrMore() :
      op->vtkKdTree::GetNumberOfRegionsOrMore());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetNumberOfRegionsOrMore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRegionsOrMore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRegionsOrMore(temp0);
      }
    else
      {
      op->vtkKdTree::SetNumberOfRegionsOrMore(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFudgeFactor() :
      op->vtkKdTree::GetFudgeFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFudgeFactor(temp0);
      }
    else
      {
      op->vtkKdTree::SetFudgeFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkKdTree::GetCuts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkBSPCuts *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
    {
    if (ap.IsBound())
      {
      op->SetCuts(temp0);
      }
    else
      {
      op->vtkKdTree::SetCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitXPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitXPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitXPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitXPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitYPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitYPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitYPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitYPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitZPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitZPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitZPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitZPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitXYPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitXYPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitXYPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitXYPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitYZPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitYZPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitYZPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitYZPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitZXPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitZXPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitZXPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitZXPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_OmitNoPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitNoPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OmitNoPartitioning();
      }
    else
      {
      op->vtkKdTree::OmitNoPartitioning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkKdTree::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddDataSet(temp0);
      }
    else
      {
      op->vtkKdTree::AddDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_RemoveDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSet(temp0);
      }
    else
      {
      op->vtkKdTree::RemoveDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_RemoveDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSet(temp0);
      }
    else
      {
      op->vtkKdTree::RemoveDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTree_RemoveDataSet_Methods[] = {
  {NULL, PyvtkKdTree_RemoveDataSet_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkKdTree_RemoveDataSet_s2, METH_VARARGS,
   (char*)"@O *vtkDataSet"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkKdTree_RemoveDataSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_RemoveDataSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSet");
  return NULL;
}



static PyObject *
PyvtkKdTree_RemoveAllDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllDataSets();
      }
    else
      {
      op->vtkKdTree::RemoveAllDataSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets() :
      op->vtkKdTree::GetNumberOfDataSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkKdTree::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkKdTree::GetDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkKdTree_GetDataSet_s1(self, args);
    case 0:
      return PyvtkKdTree_GetDataSet_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return NULL;
}



static PyObject *
PyvtkKdTree_GetDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetDataSets() :
      op->vtkKdTree::GetDataSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataSetIndex(temp0) :
      op->vtkKdTree::GetDataSetIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkKdTree::GetBounds(temp0);
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
PyvtkKdTree_SetNewBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNewBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

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
      op->SetNewBounds(temp0);
      }
    else
      {
      op->vtkKdTree::SetNewBounds(temp0);
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
PyvtkKdTree_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkKdTree::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetRegionBounds(temp0, temp1);
      }
    else
      {
      op->vtkKdTree::GetRegionBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetRegionDataBounds(temp0, temp1);
      }
    else
      {
      op->vtkKdTree::GetRegionDataBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_PrintTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintTree();
      }
    else
      {
      op->vtkKdTree::PrintTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_PrintVerboseTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintVerboseTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintVerboseTree();
      }
    else
      {
      op->vtkKdTree::PrintVerboseTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_PrintRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintRegion(temp0);
      }
    else
      {
      op->vtkKdTree::PrintRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_CreateCellLists_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->CreateCellLists(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::CreateCellLists(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkKdTree_CreateCellLists_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->CreateCellLists(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::CreateCellLists(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkKdTree_CreateCellLists_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->CreateCellLists(temp0, temp1);
      }
    else
      {
      op->vtkKdTree::CreateCellLists(temp0, temp1);
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
PyvtkKdTree_CreateCellLists_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateCellLists();
      }
    else
      {
      op->vtkKdTree::CreateCellLists();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTree_CreateCellLists_Methods[] = {
  {NULL, PyvtkKdTree_CreateCellLists_s1, METH_VARARGS,
   (char*)"@iOi *i"},
  {NULL, PyvtkKdTree_CreateCellLists_s2, METH_VARARGS,
   (char*)"@OOi *vtkDataSet *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkKdTree_CreateCellLists(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_CreateCellLists_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkKdTree_CreateCellLists_s3(self, args);
    case 0:
      return PyvtkKdTree_CreateCellLists_s4(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CreateCellLists");
  return NULL;
}



static PyObject *
PyvtkKdTree_SetIncludeRegionBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeRegionBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeRegionBoundaryCells(temp0);
      }
    else
      {
      op->vtkKdTree::SetIncludeRegionBoundaryCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetIncludeRegionBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeRegionBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncludeRegionBoundaryCells() :
      op->vtkKdTree::GetIncludeRegionBoundaryCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_IncludeRegionBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeRegionBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeRegionBoundaryCellsOn();
      }
    else
      {
      op->vtkKdTree::IncludeRegionBoundaryCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_IncludeRegionBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeRegionBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeRegionBoundaryCellsOff();
      }
    else
      {
      op->vtkKdTree::IncludeRegionBoundaryCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_DeleteCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteCellLists();
      }
    else
      {
      op->vtkKdTree::DeleteCellLists();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCellList(temp0) :
      op->vtkKdTree::GetCellList(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetBoundaryCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetBoundaryCellList(temp0) :
      op->vtkKdTree::GetBoundaryCellList(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetCellLists_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = NULL;
  int temp1;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetCellLists_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetCellLists_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTree_GetCellLists_Methods[] = {
  {NULL, PyvtkKdTree_GetCellLists_s1, METH_VARARGS,
   (char*)"@OiOO *vtkIntArray *vtkIdList *vtkIdList"},
  {NULL, PyvtkKdTree_GetCellLists_s2, METH_VARARGS,
   (char*)"@OOOO *vtkIntArray *vtkDataSet *vtkIdList *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkKdTree_GetCellLists(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_GetCellLists_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkKdTree_GetCellLists_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellLists");
  return NULL;
}



static PyObject *
PyvtkKdTree_GetRegionContainingCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0, temp1) :
      op->vtkKdTree::GetRegionContainingCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetRegionContainingCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0, temp1) :
      op->vtkKdTree::GetRegionContainingCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GetRegionContainingCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0) :
      op->vtkKdTree::GetRegionContainingCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTree_GetRegionContainingCell_Methods[] = {
  {NULL, PyvtkKdTree_GetRegionContainingCell_s1, METH_VARARGS,
   (char*)"@OL *vtkDataSet"},
  {NULL, PyvtkKdTree_GetRegionContainingCell_s2, METH_VARARGS,
   (char*)"@iL"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkKdTree_GetRegionContainingCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_GetRegionContainingCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkKdTree_GetRegionContainingCell_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRegionContainingCell");
  return NULL;
}



static PyObject *
PyvtkKdTree_AllGetRegionContainingCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->AllGetRegionContainingCell() :
      op->vtkKdTree::AllGetRegionContainingCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetRegionContainingPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingPoint(temp0, temp1, temp2) :
      op->vtkKdTree::GetRegionContainingPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkKdTree::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderAllRegionsInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllRegionsInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllRegionsInDirection(temp0, temp1) :
      op->vtkKdTree::ViewOrderAllRegionsInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderRegionsInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderRegionsInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = NULL;
  double temp1[3];
  const int size1 = 3;
  vtkIntArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderRegionsInDirection(temp0, temp1, temp2) :
      op->vtkKdTree::ViewOrderRegionsInDirection(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderAllRegionsFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllRegionsFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllRegionsFromPosition(temp0, temp1) :
      op->vtkKdTree::ViewOrderAllRegionsFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderRegionsFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderRegionsFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = NULL;
  double temp1[3];
  const int size1 = 3;
  vtkIntArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderRegionsFromPosition(temp0, temp1, temp2) :
      op->vtkKdTree::ViewOrderRegionsFromPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_BuildLocatorFromPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorFromPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkPointSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->BuildLocatorFromPoints(temp0);
      }
    else
      {
      op->vtkKdTree::BuildLocatorFromPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_BuildLocatorFromPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorFromPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->BuildLocatorFromPoints(temp0);
      }
    else
      {
      op->vtkKdTree::BuildLocatorFromPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTree_BuildLocatorFromPoints_Methods[] = {
  {NULL, PyvtkKdTree_BuildLocatorFromPoints_s1, METH_VARARGS,
   (char*)"@O *vtkPointSet"},
  {NULL, PyvtkKdTree_BuildLocatorFromPoints_s2, METH_VARARGS,
   (char*)"@O *vtkPoints"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkKdTree_BuildLocatorFromPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_BuildLocatorFromPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "BuildLocatorFromPoints");
  return NULL;
}



static PyObject *
PyvtkKdTree_BuildMapForDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildMapForDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->BuildMapForDuplicatePoints(temp0) :
      op->vtkKdTree::BuildMapForDuplicatePoints(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

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

    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkKdTree::FindPoint(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0, temp1, temp2) :
      op->vtkKdTree::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkKdTree_FindPoint_s1(self, args);
    case 3:
      return PyvtkKdTree_FindPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return NULL;
}



static PyObject *
PyvtkKdTree_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1) :
      op->vtkKdTree::FindClosestPoint(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::FindClosestPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkKdTree_FindClosestPoint_s1(self, args);
    case 4:
      return PyvtkKdTree_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkKdTree_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2) :
      op->vtkKdTree::FindClosestPointWithinRadius(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_FindClosestPointInRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2) :
      op->vtkKdTree::FindClosestPointInRegion(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPointInRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdTree::FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPointInRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkKdTree_FindClosestPointInRegion_s1(self, args);
    case 5:
      return PyvtkKdTree_FindClosestPointInRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointInRegion");
  return NULL;
}



static PyObject *
PyvtkKdTree_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::FindPointsWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindClosestNPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::FindClosestNPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetPointsInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetPointsInRegion(temp0) :
      op->vtkKdTree::GetPointsInRegion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkKdTree::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GenerateRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkKdTree::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdTree_GenerateRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  vtkPolyData *temp2 = NULL;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::GenerateRepresentation(temp0, temp1, temp2);
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
PyvtkKdTree_GenerateRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkKdTree_GenerateRepresentation_s1(self, args);
    case 3:
      return PyvtkKdTree_GenerateRepresentation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateRepresentation");
  return NULL;
}



static PyObject *
PyvtkKdTree_GenerateRepresentationUsingDataBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationUsingDataBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentationUsingDataBoundsOn();
      }
    else
      {
      op->vtkKdTree::GenerateRepresentationUsingDataBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GenerateRepresentationUsingDataBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationUsingDataBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentationUsingDataBoundsOff();
      }
    else
      {
      op->vtkKdTree::GenerateRepresentationUsingDataBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_SetGenerateRepresentationUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRepresentationUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateRepresentationUsingDataBounds(temp0);
      }
    else
      {
      op->vtkKdTree::SetGenerateRepresentationUsingDataBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_GetGenerateRepresentationUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRepresentationUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRepresentationUsingDataBounds() :
      op->vtkKdTree::GetGenerateRepresentationUsingDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_NewGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->NewGeometry() :
      op->vtkKdTree::NewGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_InvalidateGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvalidateGeometry();
      }
    else
      {
      op->vtkKdTree::InvalidateGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_CopyTree(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyTree");

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    vtkKdNode *tempr = vtkKdTree::CopyTree(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTree_FindPointsInArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsInArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdTypeArray *temp1 = NULL;
  bool temp2 = true;
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

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->FindPointsInArea(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTree::FindPointsInArea(temp0, temp1, temp2);
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

static PyMethodDef PyvtkKdTree_Methods[] = {
  {(char*)"GetClassName", PyvtkKdTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKdTree\nC++: vtkKdTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdTree\nC++: vtkKdTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TimingOn", PyvtkKdTree_TimingOn, METH_VARARGS,
   (char*)"V.TimingOn()\nC++: void TimingOn()\n\nTurn on timing of the k-d tree build\n"},
  {(char*)"TimingOff", PyvtkKdTree_TimingOff, METH_VARARGS,
   (char*)"V.TimingOff()\nC++: void TimingOff()\n\nTurn on timing of the k-d tree build\n"},
  {(char*)"SetTiming", PyvtkKdTree_SetTiming, METH_VARARGS,
   (char*)"V.SetTiming(int)\nC++: void SetTiming(int a)\n\nTurn on timing of the k-d tree build\n"},
  {(char*)"GetTiming", PyvtkKdTree_GetTiming, METH_VARARGS,
   (char*)"V.GetTiming() -> int\nC++: int GetTiming()\n\nTurn on timing of the k-d tree build\n"},
  {(char*)"SetMinCells", PyvtkKdTree_SetMinCells, METH_VARARGS,
   (char*)"V.SetMinCells(int)\nC++: void SetMinCells(int a)\n\nMinimum number of cells per spatial region.  Default is 100.\n"},
  {(char*)"GetMinCells", PyvtkKdTree_GetMinCells, METH_VARARGS,
   (char*)"V.GetMinCells() -> int\nC++: int GetMinCells()\n\nMinimum number of cells per spatial region.  Default is 100.\n"},
  {(char*)"GetNumberOfRegionsOrLess", PyvtkKdTree_GetNumberOfRegionsOrLess, METH_VARARGS,
   (char*)"V.GetNumberOfRegionsOrLess() -> int\nC++: int GetNumberOfRegionsOrLess()\n\nSet/Get the number of spatial regions you want to get close\n  to without going over.  (The number of spatial regions is\nnormally\n  a power of two.)  Call this before BuildLocator().  Default\n  is unset (0).\n"},
  {(char*)"SetNumberOfRegionsOrLess", PyvtkKdTree_SetNumberOfRegionsOrLess, METH_VARARGS,
   (char*)"V.SetNumberOfRegionsOrLess(int)\nC++: void SetNumberOfRegionsOrLess(int a)\n\nSet/Get the number of spatial regions you want to get close\n  to without going over.  (The number of spatial regions is\nnormally\n  a power of two.)  Call this before BuildLocator().  Default\n  is unset (0).\n"},
  {(char*)"GetNumberOfRegionsOrMore", PyvtkKdTree_GetNumberOfRegionsOrMore, METH_VARARGS,
   (char*)"V.GetNumberOfRegionsOrMore() -> int\nC++: int GetNumberOfRegionsOrMore()\n\nSet/Get the number of spatial regions you want to get close\n  to while having at least this many regions.  (The number of\n  spatial regions is normally a power of two.)   Default\n  is unset (0).\n"},
  {(char*)"SetNumberOfRegionsOrMore", PyvtkKdTree_SetNumberOfRegionsOrMore, METH_VARARGS,
   (char*)"V.SetNumberOfRegionsOrMore(int)\nC++: void SetNumberOfRegionsOrMore(int a)\n\nSet/Get the number of spatial regions you want to get close\n  to while having at least this many regions.  (The number of\n  spatial regions is normally a power of two.)   Default\n  is unset (0).\n"},
  {(char*)"GetFudgeFactor", PyvtkKdTree_GetFudgeFactor, METH_VARARGS,
   (char*)"V.GetFudgeFactor() -> float\nC++: double GetFudgeFactor()\n\nSome algorithms on k-d trees require a value that is a very\n small distance relative to the diameter of the entire space\n divided by the k-d tree.  This factor is the maximum\naxis-aligned\n width of the space multiplied by 10e-6.\n"},
  {(char*)"SetFudgeFactor", PyvtkKdTree_SetFudgeFactor, METH_VARARGS,
   (char*)"V.SetFudgeFactor(float)\nC++: void SetFudgeFactor(double a)\n\nSome algorithms on k-d trees require a value that is a very\n small distance relative to the diameter of the entire space\n divided by the k-d tree.  This factor is the maximum\naxis-aligned\n width of the space multiplied by 10e-6.\n"},
  {(char*)"GetCuts", PyvtkKdTree_GetCuts, METH_VARARGS,
   (char*)"V.GetCuts() -> vtkBSPCuts\nC++: vtkBSPCuts *GetCuts()\n\nGet a vtkBSPCuts object, a general object representing an axis-\n  aligned spatial partitioning.  Used by vtkBSPIntersections.\n"},
  {(char*)"SetCuts", PyvtkKdTree_SetCuts, METH_VARARGS,
   (char*)"V.SetCuts(vtkBSPCuts)\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nNormally the k-d tree is computed from the dataset(s) provided\n  in SetDataSet.  Alternatively, you can provide the cuts that\nwill\n  be applied by calling SetCuts.\n"},
  {(char*)"OmitXPartitioning", PyvtkKdTree_OmitXPartitioning, METH_VARARGS,
   (char*)"V.OmitXPartitioning()\nC++: void OmitXPartitioning()\n\nOmit partitions along the X axis, yielding shafts in the X\ndirection\n"},
  {(char*)"OmitYPartitioning", PyvtkKdTree_OmitYPartitioning, METH_VARARGS,
   (char*)"V.OmitYPartitioning()\nC++: void OmitYPartitioning()\n\nOmit partitions along the Y axis, yielding shafts in the Y\ndirection\n"},
  {(char*)"OmitZPartitioning", PyvtkKdTree_OmitZPartitioning, METH_VARARGS,
   (char*)"V.OmitZPartitioning()\nC++: void OmitZPartitioning()\n\nOmit partitions along the Z axis, yielding shafts in the Z\ndirection\n"},
  {(char*)"OmitXYPartitioning", PyvtkKdTree_OmitXYPartitioning, METH_VARARGS,
   (char*)"V.OmitXYPartitioning()\nC++: void OmitXYPartitioning()\n\nOmit partitions along the X and Y axes, yielding slabs along Z\n"},
  {(char*)"OmitYZPartitioning", PyvtkKdTree_OmitYZPartitioning, METH_VARARGS,
   (char*)"V.OmitYZPartitioning()\nC++: void OmitYZPartitioning()\n\nOmit partitions along the Y and Z axes, yielding slabs along X\n"},
  {(char*)"OmitZXPartitioning", PyvtkKdTree_OmitZXPartitioning, METH_VARARGS,
   (char*)"V.OmitZXPartitioning()\nC++: void OmitZXPartitioning()\n\nOmit partitions along the Z and X axes, yielding slabs along Y\n"},
  {(char*)"OmitNoPartitioning", PyvtkKdTree_OmitNoPartitioning, METH_VARARGS,
   (char*)"V.OmitNoPartitioning()\nC++: void OmitNoPartitioning()\n\nPartition along all three axes - this is the default\n"},
  {(char*)"SetDataSet", PyvtkKdTree_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *set)\n\nClear out all data sets and replace with single data set.  For\nbackward compatibility with superclass.\n"},
  {(char*)"AddDataSet", PyvtkKdTree_AddDataSet, METH_VARARGS,
   (char*)"V.AddDataSet(vtkDataSet)\nC++: virtual void AddDataSet(vtkDataSet *set)\n\nThis class can compute a spatial decomposition based on the cells\nin a list of one or more input data sets.  Add them one at a time\nwith this method.\n"},
  {(char*)"RemoveDataSet", PyvtkKdTree_RemoveDataSet, METH_VARARGS,
   (char*)"V.RemoveDataSet(int)\nC++: virtual void RemoveDataSet(int index)\nV.RemoveDataSet(vtkDataSet)\nC++: virtual void RemoveDataSet(vtkDataSet *set)\n\nRemove the given data set.\n"},
  {(char*)"RemoveAllDataSets", PyvtkKdTree_RemoveAllDataSets, METH_VARARGS,
   (char*)"V.RemoveAllDataSets()\nC++: virtual void RemoveAllDataSets()\n\nRemove the given data set.\n"},
  {(char*)"GetNumberOfDataSets", PyvtkKdTree_GetNumberOfDataSets, METH_VARARGS,
   (char*)"V.GetNumberOfDataSets() -> int\nC++: int GetNumberOfDataSets()\n\nGet the number of data sets included in spatial paritioning\n"},
  {(char*)"GetDataSet", PyvtkKdTree_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet(int) -> vtkDataSet\nC++: vtkDataSet *GetDataSet(int n)\nV.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nReturn the n'th data set.\n"},
  {(char*)"GetDataSets", PyvtkKdTree_GetDataSets, METH_VARARGS,
   (char*)"V.GetDataSets() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetDataSets()\n\nReturn a collection of all the data sets.\n"},
  {(char*)"GetDataSetIndex", PyvtkKdTree_GetDataSetIndex, METH_VARARGS,
   (char*)"V.GetDataSetIndex(vtkDataSet) -> int\nC++: int GetDataSetIndex(vtkDataSet *set)\n\nReturn the index of the given data set.  Returns -1 if that data\nset does not exist.\n"},
  {(char*)"GetBounds", PyvtkKdTree_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, ...])\nC++: void GetBounds(double *bounds)\n\nGet the spatial bounds of the entire k-d tree space. Sets\n   bounds array to xmin, xmax, ymin, ymax, zmin, zmax.\n"},
  {(char*)"SetNewBounds", PyvtkKdTree_SetNewBounds, METH_VARARGS,
   (char*)"V.SetNewBounds([float, ...])\nC++: void SetNewBounds(double *bounds)\n\nThere are certain applications where you want the bounds of\n  the k-d tree space to be at least as large as a specified\n  box.  If the k-d tree has been built, you can expand it's\n  bounds with this method.  If the bounds supplied are smaller\n  than those computed, they will be ignored.\n"},
  {(char*)"GetNumberOfRegions", PyvtkKdTree_GetNumberOfRegions, METH_VARARGS,
   (char*)"V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\nThe number of leaf nodes of the tree, the spatial regions\n"},
  {(char*)"GetRegionBounds", PyvtkKdTree_GetRegionBounds, METH_VARARGS,
   (char*)"V.GetRegionBounds(int, [float, float, float, float, float, float])\nC++: void GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of k-d tree region\n"},
  {(char*)"GetRegionDataBounds", PyvtkKdTree_GetRegionDataBounds, METH_VARARGS,
   (char*)"V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float])\nC++: void GetRegionDataBounds(int regionID, double bounds[6])\n\nGet the bounds of the data within the k-d tree region\n"},
  {(char*)"PrintTree", PyvtkKdTree_PrintTree, METH_VARARGS,
   (char*)"V.PrintTree()\nC++: void PrintTree()\n\nPrint out nodes of kd tree\n"},
  {(char*)"PrintVerboseTree", PyvtkKdTree_PrintVerboseTree, METH_VARARGS,
   (char*)"V.PrintVerboseTree()\nC++: void PrintVerboseTree()\n\nPrint out nodes of kd tree\n"},
  {(char*)"PrintRegion", PyvtkKdTree_PrintRegion, METH_VARARGS,
   (char*)"V.PrintRegion(int)\nC++: void PrintRegion(int id)\n\nPrint out leaf node data for given id\n"},
  {(char*)"CreateCellLists", PyvtkKdTree_CreateCellLists, METH_VARARGS,
   (char*)"V.CreateCellLists(int, [int, ...], int)\nC++: void CreateCellLists(int dataSetIndex, int *regionReqList,\n    int reqListSize)\nV.CreateCellLists(vtkDataSet, [int, ...], int)\nC++: void CreateCellLists(vtkDataSet *set, int *regionReqList,\n    int reqListSize)\nV.CreateCellLists([int, ...], int)\nC++: void CreateCellLists(int *regionReqList, int listSize)\nV.CreateCellLists()\nC++: void CreateCellLists()\n\nCreate a list for each of the requested regions, listing\n  the IDs of all cells whose centroid falls in the region.\n  These lists are obtained with GetCellList().\n  If no DataSet is specified, the cell list is created\n  for DataSet 0.  If no list of requested regions is provided,\n  the cell lists for all regions are created.\n\n\n  When CreateCellLists is called again, the lists created\n  on the previous call  are deleted.\n"},
  {(char*)"SetIncludeRegionBoundaryCells", PyvtkKdTree_SetIncludeRegionBoundaryCells, METH_VARARGS,
   (char*)"V.SetIncludeRegionBoundaryCells(int)\nC++: void SetIncludeRegionBoundaryCells(int a)\n\nIf IncludeRegionBoundaryCells is ON,\n  CreateCellLists() will also create a list of cells which\n  intersect a given region, but are not assigned\n  to the region.  These lists are obtained with\n  GetBoundaryCellList().  Default is OFF.\n"},
  {(char*)"GetIncludeRegionBoundaryCells", PyvtkKdTree_GetIncludeRegionBoundaryCells, METH_VARARGS,
   (char*)"V.GetIncludeRegionBoundaryCells() -> int\nC++: int GetIncludeRegionBoundaryCells()\n\nIf IncludeRegionBoundaryCells is ON,\n  CreateCellLists() will also create a list of cells which\n  intersect a given region, but are not assigned\n  to the region.  These lists are obtained with\n  GetBoundaryCellList().  Default is OFF.\n"},
  {(char*)"IncludeRegionBoundaryCellsOn", PyvtkKdTree_IncludeRegionBoundaryCellsOn, METH_VARARGS,
   (char*)"V.IncludeRegionBoundaryCellsOn()\nC++: void IncludeRegionBoundaryCellsOn()\n\nIf IncludeRegionBoundaryCells is ON,\n  CreateCellLists() will also create a list of cells which\n  intersect a given region, but are not assigned\n  to the region.  These lists are obtained with\n  GetBoundaryCellList().  Default is OFF.\n"},
  {(char*)"IncludeRegionBoundaryCellsOff", PyvtkKdTree_IncludeRegionBoundaryCellsOff, METH_VARARGS,
   (char*)"V.IncludeRegionBoundaryCellsOff()\nC++: void IncludeRegionBoundaryCellsOff()\n\nIf IncludeRegionBoundaryCells is ON,\n  CreateCellLists() will also create a list of cells which\n  intersect a given region, but are not assigned\n  to the region.  These lists are obtained with\n  GetBoundaryCellList().  Default is OFF.\n"},
  {(char*)"DeleteCellLists", PyvtkKdTree_DeleteCellLists, METH_VARARGS,
   (char*)"V.DeleteCellLists()\nC++: void DeleteCellLists()\n\nFree the memory used by the cell lists.\n"},
  {(char*)"GetCellList", PyvtkKdTree_GetCellList, METH_VARARGS,
   (char*)"V.GetCellList(int) -> vtkIdList\nC++: vtkIdList *GetCellList(int regionID)\n\nGet the cell list for a region.  This returns a pointer\n   to vtkKdTree's memory, so don't free it.\n"},
  {(char*)"GetBoundaryCellList", PyvtkKdTree_GetBoundaryCellList, METH_VARARGS,
   (char*)"V.GetBoundaryCellList(int) -> vtkIdList\nC++: vtkIdList *GetBoundaryCellList(int regionID)\n\nThe cell list obtained with GetCellList is the list\n   of all cells such that their centroid is contained in\n   the spatial region.  It may also be desirable to get\n   a list of all cells intersecting a spatial region,\n   but with centroid in some other region.  This is that\n   list.  This list is computed in CreateCellLists() if\n   and only if IncludeRegionBoundaryCells is ON.  This\n   returns a pointer to KdTree's memory, so don't free it.\n"},
  {(char*)"GetCellLists", PyvtkKdTree_GetCellLists, METH_VARARGS,
   (char*)"V.GetCellLists(vtkIntArray, int, vtkIdList, vtkIdList) -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions, int set,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nV.GetCellLists(vtkIntArray, vtkDataSet, vtkIdList, vtkIdList)\n    -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions, vtkDataSet *set,\n     vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nV.GetCellLists(vtkIntArray, vtkIdList, vtkIdList) -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\n\nFor a list of regions, get two cell lists.  The first lists\n  the IDs  all cells whose centroids lie in one of the regions.\n  The second lists the IDs of all cells that intersect the\nregions,\n  but whose centroid lies in a region not on the list.\n\n\n  The total number of cell IDs written to both lists is returned.\n  Either list pointer passed in can be NULL, and it will be\nignored.\n  If there are multiple data sets, you must specify which data\nset\n  you wish cell IDs for.\n\n\n  The caller should delete these two lists when done.  This\nmethod\n  uses the cell lists created in CreateCellLists().\n  If the cell list for any of the requested regions does not\n  exist, then this method will call CreateCellLists() to create\n  cell lists for *every* region of the k-d tree.  You must\nremember\n  to DeleteCellLists() when done with all calls to this method,\nas\n  cell lists can require a great deal of memory.\n"},
  {(char*)"GetRegionContainingCell", PyvtkKdTree_GetRegionContainingCell, METH_VARARGS,
   (char*)"V.GetRegionContainingCell(vtkDataSet, int) -> int\nC++: int GetRegionContainingCell(vtkDataSet *set,\n    vtkIdType cellID)\nV.GetRegionContainingCell(int, int) -> int\nC++: int GetRegionContainingCell(int set, vtkIdType cellID)\nV.GetRegionContainingCell(int) -> int\nC++: int GetRegionContainingCell(vtkIdType cellID)\n\nGet the id of the region containing the cell centroid.  If\n   no DataSet is specified, assume DataSet 0.  If you need the\n   region ID for every cell, use AllGetRegionContainingCell\n   instead.  It is more efficient.\n"},
  {(char*)"AllGetRegionContainingCell", PyvtkKdTree_AllGetRegionContainingCell, METH_VARARGS,
   (char*)"V.AllGetRegionContainingCell() -> (int, ...)\nC++: int *AllGetRegionContainingCell()\n\nGet a list (in order by data set by cell id) of the\n   region IDs of the region containing the centroid for\n   each cell.\n   This is faster than calling GetRegionContainingCell\n   for each cell in the DataSet.\n   vtkKdTree uses this list, so don't delete it.\n"},
  {(char*)"GetRegionContainingPoint", PyvtkKdTree_GetRegionContainingPoint, METH_VARARGS,
   (char*)"V.GetRegionContainingPoint(float, float, float) -> int\nC++: int GetRegionContainingPoint(double x, double y, double z)\n\nGet the id of the region containing the specified location.\n"},
  {(char*)"BuildLocator", PyvtkKdTree_BuildLocator, METH_VARARGS,
   (char*)"V.BuildLocator()\nC++: void BuildLocator()\n\nCreate the k-d tree decomposition of the cells of the data set or\ndata sets.  Cells are assigned to k-d tree spatial regions based\non the location of their centroids.\n"},
  {(char*)"ViewOrderAllRegionsInDirection", PyvtkKdTree_ViewOrderAllRegionsInDirection, METH_VARARGS,
   (char*)"V.ViewOrderAllRegionsInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllRegionsInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a direction of projection (typically obtained with\nvtkCamera::GetDirectionOfProjection()), this method, creates a\nlist of the k-d tree region IDs in order from front to back with\nrespect to that direction.  The number of ordered regions is\nreturned.  Use this method to view order regions for cameras that\nuse parallel projection.\n"},
  {(char*)"ViewOrderRegionsInDirection", PyvtkKdTree_ViewOrderRegionsInDirection, METH_VARARGS,
   (char*)"V.ViewOrderRegionsInDirection(vtkIntArray, (float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderRegionsInDirection(vtkIntArray *regionIds,\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a direction of projection and a list of k-d tree region\nIDs, this method, creates a list of the k-d tree region IDs in\norder from front to back with respect to that direction.  The\nnumber of ordered regions is returned.  Use this method to view\norder regions for cameras that use parallel projection.\n"},
  {(char*)"ViewOrderAllRegionsFromPosition", PyvtkKdTree_ViewOrderAllRegionsFromPosition, METH_VARARGS,
   (char*)"V.ViewOrderAllRegionsFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllRegionsFromPosition(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a camera position (typically obtained with\nvtkCamera::GetPosition()), this method, creates a list of the k-d\ntree region IDs in order from front to back with respect to that\ndirection.  The number of ordered regions is returned.  Use this\nmethod to view order regions for cameras that use perspective\nprojection.\n"},
  {(char*)"ViewOrderRegionsFromPosition", PyvtkKdTree_ViewOrderRegionsFromPosition, METH_VARARGS,
   (char*)"V.ViewOrderRegionsFromPosition(vtkIntArray, (float, float, float),\n     vtkIntArray) -> int\nC++: int ViewOrderRegionsFromPosition(vtkIntArray *regionIds,\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a camera position and a list of k-d tree region IDs, this\nmethod, creates a list of the k-d tree region IDs in order from\nfront to back with respect to that direction.  The number of\nordered regions is returned.  Use this method to view order\nregions for cameras that use perspective projection.\n"},
  {(char*)"BuildLocatorFromPoints", PyvtkKdTree_BuildLocatorFromPoints, METH_VARARGS,
   (char*)"V.BuildLocatorFromPoints(vtkPointSet)\nC++: void BuildLocatorFromPoints(vtkPointSet *pointset)\nV.BuildLocatorFromPoints(vtkPoints)\nC++: void BuildLocatorFromPoints(vtkPoints *ptArray)\n\nThis is a special purpose locator that builds a k-d tree to find\nduplicate and near-by points.  It builds the tree from one or\nmore vtkPoints objects instead of from the cells of a vtkDataSet.\n This build would normally be followed by\nBuildMapForDuplicatePoints, FindPoint, or FindClosestPoint. Since\nthis will build a normal k-d tree, all the region intersection\nqueries will still work, as will most other calls except those\nthat have \"Cell\" in the name.\n\nThis method works most efficiently when the point arrays are\nfloat arrays.\n"},
  {(char*)"BuildMapForDuplicatePoints", PyvtkKdTree_BuildMapForDuplicatePoints, METH_VARARGS,
   (char*)"V.BuildMapForDuplicatePoints(float) -> vtkIdTypeArray\nC++: vtkIdTypeArray *BuildMapForDuplicatePoints(float tolerance)\n\nThis call returns a mapping from the original point IDs supplied\nto BuildLocatorFromPoints to a subset of those IDs that is unique\nwithin the specified tolerance. If points 2, 5, and 12 are the\nsame, then IdMap[2] = IdMap[5] = IdMap[12] = 2 (or 5 or 12).\n\n\"original point IDs\" - For point IDs we start at 0 for the first\npoint in the first vtkPoints object, and increase by 1 for\nsubsequent points and subsequent vtkPoints objects.\n\nYou must have called BuildLocatorFromPoints() before calling\nthis. You are responsible for deleting the returned array.\n"},
  {(char*)"FindPoint", PyvtkKdTree_FindPoint, METH_VARARGS,
   (char*)"V.FindPoint([float, ...]) -> int\nC++: vtkIdType FindPoint(double *x)\nV.FindPoint(float, float, float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\n\nFind the Id of the point that was previously supplied to\nBuildLocatorFromPoints().  Returns -1 if the point was not in the\noriginal array.\n"},
  {(char*)"FindClosestPoint", PyvtkKdTree_FindClosestPoint, METH_VARARGS,
   (char*)"V.FindClosestPoint([float, ...], float) -> int\nC++: vtkIdType FindClosestPoint(double *x, double &dist2)\nV.FindClosestPoint(float, float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z,\n    double &dist2)\n\nFind the Id of the point that was previously supplied to\nBuildLocatorFromPoints() which is closest to the given point. Set\nthe square of the distance between the two points.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkKdTree_FindClosestPointWithinRadius, METH_VARARGS,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {(char*)"FindClosestPointInRegion", PyvtkKdTree_FindClosestPointInRegion, METH_VARARGS,
   (char*)"V.FindClosestPointInRegion(int, [float, ...], float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double *x,\n    double &dist2)\nV.FindClosestPointInRegion(int, float, float, float, float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double x,\n    double y, double z, double &dist2)\n\nFind the Id of the point in the given region which is closest to\nthe given point.  Return the ID of the point, and set the square\nof the distance of between the points.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkKdTree_FindPointsWithinRadius, METH_VARARGS,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: void FindPointsWithinRadius(double R, const double x[3],\n    vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {(char*)"FindClosestNPoints", PyvtkKdTree_FindClosestNPoints, METH_VARARGS,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"GetPointsInRegion", PyvtkKdTree_GetPointsInRegion, METH_VARARGS,
   (char*)"V.GetPointsInRegion(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetPointsInRegion(int regionId)\n\nGet a list of the original IDs of all points in a region.  You\nmust have called BuildLocatorFromPoints before calling this.\n"},
  {(char*)"FreeSearchStructure", PyvtkKdTree_FreeSearchStructure, METH_VARARGS,
   (char*)"V.FreeSearchStructure()\nC++: void FreeSearchStructure()\n\nDelete the k-d tree data structure. Also delete any cell lists\nthat were computed with CreateCellLists().\n"},
  {(char*)"GenerateRepresentation", PyvtkKdTree_GenerateRepresentation, METH_VARARGS,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\nV.GenerateRepresentation([int, ...], int, vtkPolyData)\nC++: void GenerateRepresentation(int *regionList, int len,\n    vtkPolyData *pd)\n\nCreate a polydata representation of the boundaries of the k-d\ntree regions.  If level equals GetLevel(), the leaf nodes are\nrepresented.\n"},
  {(char*)"GenerateRepresentationUsingDataBoundsOn", PyvtkKdTree_GenerateRepresentationUsingDataBoundsOn, METH_VARARGS,
   (char*)"V.GenerateRepresentationUsingDataBoundsOn()\nC++: void GenerateRepresentationUsingDataBoundsOn()\n\nThe polydata representation of the k-d tree shows the boundaries\n   of the k-d tree decomposition spatial regions.  The data\ninside\n   the regions may not occupy the entire space.  To draw just the\n   bounds of the data in the regions, set this variable ON.\n"},
  {(char*)"GenerateRepresentationUsingDataBoundsOff", PyvtkKdTree_GenerateRepresentationUsingDataBoundsOff, METH_VARARGS,
   (char*)"V.GenerateRepresentationUsingDataBoundsOff()\nC++: void GenerateRepresentationUsingDataBoundsOff()\n\nThe polydata representation of the k-d tree shows the boundaries\n   of the k-d tree decomposition spatial regions.  The data\ninside\n   the regions may not occupy the entire space.  To draw just the\n   bounds of the data in the regions, set this variable ON.\n"},
  {(char*)"SetGenerateRepresentationUsingDataBounds", PyvtkKdTree_SetGenerateRepresentationUsingDataBounds, METH_VARARGS,
   (char*)"V.SetGenerateRepresentationUsingDataBounds(int)\nC++: void SetGenerateRepresentationUsingDataBounds(int a)\n\nThe polydata representation of the k-d tree shows the boundaries\n   of the k-d tree decomposition spatial regions.  The data\ninside\n   the regions may not occupy the entire space.  To draw just the\n   bounds of the data in the regions, set this variable ON.\n"},
  {(char*)"GetGenerateRepresentationUsingDataBounds", PyvtkKdTree_GetGenerateRepresentationUsingDataBounds, METH_VARARGS,
   (char*)"V.GetGenerateRepresentationUsingDataBounds() -> int\nC++: int GetGenerateRepresentationUsingDataBounds()\n\nThe polydata representation of the k-d tree shows the boundaries\n   of the k-d tree decomposition spatial regions.  The data\ninside\n   the regions may not occupy the entire space.  To draw just the\n   bounds of the data in the regions, set this variable ON.\n"},
  {(char*)"NewGeometry", PyvtkKdTree_NewGeometry, METH_VARARGS,
   (char*)"V.NewGeometry() -> int\nC++: virtual int NewGeometry()\n\nReturn 1 if the geometry of the input data sets\n   has changed since the last time the k-d tree was built.\n"},
  {(char*)"InvalidateGeometry", PyvtkKdTree_InvalidateGeometry, METH_VARARGS,
   (char*)"V.InvalidateGeometry()\nC++: virtual void InvalidateGeometry()\n\nForget about the last geometry used.  The next call to\nNewGeometry will return 1.  A new k-d tree will be built the next\ntime BuildLocator is called.\n"},
  {(char*)"CopyTree", PyvtkKdTree_CopyTree, METH_VARARGS | METH_STATIC,
   (char*)"V.CopyTree(vtkKdNode) -> vtkKdNode\nC++: static vtkKdNode *CopyTree(vtkKdNode *kd)\n\nCreate a copy of the binary tree representation of the\n   k-d tree spatial partitioning provided.\n"},
  {(char*)"FindPointsInArea", PyvtkKdTree_FindPointsInArea, METH_VARARGS,
   (char*)"V.FindPointsInArea([float, ...], vtkIdTypeArray, bool)\nC++: void FindPointsInArea(double *area, vtkIdTypeArray *ids,\n    bool clearArray=true)\n\nFill ids with points found in area.  The area is a 6-tuple\ncontaining (xmin, xmax, ymin, ymax, zmin, zmax). This method will\nclear the array by default.  To append ids to an array, set\nclearArray to false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdTree_StaticNew()
{
  return vtkKdTree::New();
}

PyObject *PyVTKClass_vtkKdTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdTree_StaticNew,
    PyvtkKdTree_Methods,
    "vtkKdTree", modulename,
    NULL, NULL,
    PyvtkKdTree_Doc(),
    PyVTKClass_vtkLocatorNew(modulename));
  return cls;
}

const char **PyvtkKdTree_Doc()
{
  static const char *docstring[] = {
    "vtkKdTree - a Kd-tree spatial decomposition of a set of points\n\n",
    "Superclass: vtkLocator\n\n",
    "Given one or more vtkDataSets, create a load balancing\n    k-d tree decomposition of the points at the center of the cells.\n    Or, create a k-d tree point locator from a list of points.\n\n\n    This class can also generate a PolyData representation of\n    the boundaries of the spatial regions in the decomposition.\n\n\n    It can sort the regions with respect to a viewing direction,\n    and it can dec",
    "ompose a list of regions into subsets, each\n    of which represent a convex spatial region (since many algorithms\n    require a convex region).\n\n\n    If the points were derived from cells, vtkKdTree\n    can create a list of cell Ids for each region for each data set.\n    Two lists are available - all cells with centroid in the region,\n    and all cells that intersect the region but whose centroid ",
    "lies\n    in another region.\n\n\n    For the purpose of removing duplicate points quickly from large\n    data sets, or for finding nearby points, we added another mode\nfor\n    building the locator.  BuildLocatorFromPoints will build a k-d\ntree\n    from one or more vtkPoints objects.  This can be followed by\n    BuildMapForDuplicatePoints which returns a mapping from the\noriginal\n    ids to a subset o",
    "f the ids that is unique within a supplied\n    tolerance, or you can use FindPoint and FindClosestPoint to\n    locate points in the original set that the tree was built from.\n\nSee Also:\n\n\n     vtkLocator vtkCellLocator vtkPKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

