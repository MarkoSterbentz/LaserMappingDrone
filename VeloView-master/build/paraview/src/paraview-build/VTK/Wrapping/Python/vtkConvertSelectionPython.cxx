// python wrapper for vtkConvertSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkConvertSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkConvertSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkConvertSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkConvertSelection_Doc();


static PyObject *
PyvtkConvertSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkConvertSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvertSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkConvertSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvertSelection::NewInstance());

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
PyvtkConvertSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkConvertSelection *tempr = vtkConvertSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetDataObjectConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectConnection(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetDataObjectConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputFieldType(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetInputFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInputFieldType() :
      op->vtkConvertSelection::GetInputFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputType(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetOutputType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkConvertSelection::GetOutputType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkConvertSelection::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetArrayNames(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetArrayNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetArrayNames() :
      op->vtkConvertSelection::GetArrayNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_AddArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddArrayName(temp0);
      }
    else
      {
      op->vtkConvertSelection::AddArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ClearArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearArrayNames();
      }
    else
      {
      op->vtkConvertSelection::ClearArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMatchAnyValues(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetMatchAnyValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMatchAnyValues() :
      op->vtkConvertSelection::GetMatchAnyValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MatchAnyValuesOn();
      }
    else
      {
      op->vtkConvertSelection::MatchAnyValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MatchAnyValuesOff();
      }
    else
      {
      op->vtkConvertSelection::MatchAnyValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkExtractSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtractSelection"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionExtractor(temp0);
      }
    else
      {
      op->vtkConvertSelection::SetSelectionExtractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->GetSelectionExtractor() :
      op->vtkConvertSelection::GetSelectionExtractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToIndexSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToIndexSelection");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    vtkSelection *tempr = vtkConvertSelection::ToIndexSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToGlobalIdSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToGlobalIdSelection");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    vtkSelection *tempr = vtkConvertSelection::ToGlobalIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToPedigreeIdSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToPedigreeIdSelection");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    vtkSelection *tempr = vtkConvertSelection::ToPedigreeIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToValueSelection_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2))
    {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkConvertSelection_ToValueSelection_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  vtkStringArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkStringArray"))
    {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConvertSelection_ToValueSelection_Methods[] = {
  {NULL, PyvtkConvertSelection_ToValueSelection_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOz *vtkSelection *vtkDataObject"},
  {NULL, PyvtkConvertSelection_ToValueSelection_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOO *vtkSelection *vtkDataObject *vtkStringArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkConvertSelection_ToValueSelection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkConvertSelection_ToValueSelection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToValueSelection");
  return NULL;
}



static PyObject *
PyvtkConvertSelection_GetSelectedItems(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedItems");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  int temp2;
  vtkIdTypeArray *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedItems(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedVertices(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedVertices");

  vtkSelection *temp0 = NULL;
  vtkGraph *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedVertices(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedEdges(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedEdges");

  vtkSelection *temp0 = NULL;
  vtkGraph *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedEdges(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedPoints");

  vtkSelection *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedCells");

  vtkSelection *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedCells(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedRows(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedRows");

  vtkSelection *temp0 = NULL;
  vtkTable *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    vtkConvertSelection::GetSelectedRows(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToSelectionType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToSelectionType");

  vtkSelection *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  int temp2;
  vtkStringArray *temp3 = 0;
  int temp4 = -1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    vtkSelection *tempr = vtkConvertSelection::ToSelectionType(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConvertSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkConvertSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConvertSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConvertSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkConvertSelection\nC++: vtkConvertSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConvertSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConvertSelection\nC++: vtkConvertSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataObjectConnection", PyvtkConvertSelection_SetDataObjectConnection, METH_VARARGS,
   (char*)"V.SetDataObjectConnection(vtkAlgorithmOutput)\nC++: void SetDataObjectConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the data\nobject).\n"},
  {(char*)"SetInputFieldType", PyvtkConvertSelection_SetInputFieldType, METH_VARARGS,
   (char*)"V.SetInputFieldType(int)\nC++: void SetInputFieldType(int a)\n\nThe input field type. If this is set to a number other than -1,\nignores the input selection field type and instead assumes that\nall selection nodes have the field type specified. This should be\none of the constants defined in vtkSelectionNode.h. Default is\n-1.\n"},
  {(char*)"GetInputFieldType", PyvtkConvertSelection_GetInputFieldType, METH_VARARGS,
   (char*)"V.GetInputFieldType() -> int\nC++: int GetInputFieldType()\n\nThe input field type. If this is set to a number other than -1,\nignores the input selection field type and instead assumes that\nall selection nodes have the field type specified. This should be\none of the constants defined in vtkSelectionNode.h. Default is\n-1.\n"},
  {(char*)"SetOutputType", PyvtkConvertSelection_SetOutputType, METH_VARARGS,
   (char*)"V.SetOutputType(int)\nC++: void SetOutputType(int a)\n\nThe output selection content type. This should be one of the\nconstants defined in vtkSelectionNode.h.\n"},
  {(char*)"GetOutputType", PyvtkConvertSelection_GetOutputType, METH_VARARGS,
   (char*)"V.GetOutputType() -> int\nC++: int GetOutputType()\n\nThe output selection content type. This should be one of the\nconstants defined in vtkSelectionNode.h.\n"},
  {(char*)"SetArrayName", PyvtkConvertSelection_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *)\n\nThe output array name for value or threshold selections.\n"},
  {(char*)"GetArrayName", PyvtkConvertSelection_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: virtual const char *GetArrayName()\n\nThe output array name for value or threshold selections.\n"},
  {(char*)"SetArrayNames", PyvtkConvertSelection_SetArrayNames, METH_VARARGS,
   (char*)"V.SetArrayNames(vtkStringArray)\nC++: virtual void SetArrayNames(vtkStringArray *)\n\nThe output array names for value selection.\n"},
  {(char*)"GetArrayNames", PyvtkConvertSelection_GetArrayNames, METH_VARARGS,
   (char*)"V.GetArrayNames() -> vtkStringArray\nC++: vtkStringArray *GetArrayNames()\n\nThe output array names for value selection.\n"},
  {(char*)"AddArrayName", PyvtkConvertSelection_AddArrayName, METH_VARARGS,
   (char*)"V.AddArrayName(string)\nC++: void AddArrayName(const char *)\n\nConvenience methods used by UI\n"},
  {(char*)"ClearArrayNames", PyvtkConvertSelection_ClearArrayNames, METH_VARARGS,
   (char*)"V.ClearArrayNames()\nC++: void ClearArrayNames()\n\nConvenience methods used by UI\n"},
  {(char*)"SetMatchAnyValues", PyvtkConvertSelection_SetMatchAnyValues, METH_VARARGS,
   (char*)"V.SetMatchAnyValues(bool)\nC++: void SetMatchAnyValues(bool a)\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {(char*)"GetMatchAnyValues", PyvtkConvertSelection_GetMatchAnyValues, METH_VARARGS,
   (char*)"V.GetMatchAnyValues() -> bool\nC++: bool GetMatchAnyValues()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {(char*)"MatchAnyValuesOn", PyvtkConvertSelection_MatchAnyValuesOn, METH_VARARGS,
   (char*)"V.MatchAnyValuesOn()\nC++: void MatchAnyValuesOn()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {(char*)"MatchAnyValuesOff", PyvtkConvertSelection_MatchAnyValuesOff, METH_VARARGS,
   (char*)"V.MatchAnyValuesOff()\nC++: void MatchAnyValuesOff()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {(char*)"SetSelectionExtractor", PyvtkConvertSelection_SetSelectionExtractor, METH_VARARGS,
   (char*)"V.SetSelectionExtractor(vtkExtractSelection)\nC++: virtual void SetSelectionExtractor(vtkExtractSelection *)\n\nSet/get a selection extractor used in some conversions to obtain\nIDs.\n"},
  {(char*)"GetSelectionExtractor", PyvtkConvertSelection_GetSelectionExtractor, METH_VARARGS,
   (char*)"V.GetSelectionExtractor() -> vtkExtractSelection\nC++: vtkExtractSelection *GetSelectionExtractor()\n\nSet/get a selection extractor used in some conversions to obtain\nIDs.\n"},
  {(char*)"ToIndexSelection", PyvtkConvertSelection_ToIndexSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.ToIndexSelection(vtkSelection, vtkDataObject) -> vtkSelection\nC++: static vtkSelection *ToIndexSelection(vtkSelection *input,\n    vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {(char*)"ToGlobalIdSelection", PyvtkConvertSelection_ToGlobalIdSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.ToGlobalIdSelection(vtkSelection, vtkDataObject) -> vtkSelection\nC++: static vtkSelection *ToGlobalIdSelection(vtkSelection *input,\n     vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {(char*)"ToPedigreeIdSelection", PyvtkConvertSelection_ToPedigreeIdSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.ToPedigreeIdSelection(vtkSelection, vtkDataObject)\n    -> vtkSelection\nC++: static vtkSelection *ToPedigreeIdSelection(\n    vtkSelection *input, vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {(char*)"ToValueSelection", PyvtkConvertSelection_ToValueSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.ToValueSelection(vtkSelection, vtkDataObject, string)\n    -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, const char *arrayName)\nV.ToValueSelection(vtkSelection, vtkDataObject, vtkStringArray)\n    -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, vtkStringArray *arrayNames)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {(char*)"GetSelectedItems", PyvtkConvertSelection_GetSelectedItems, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedItems(vtkSelection, vtkDataObject, int,\n    vtkIdTypeArray)\nC++: static void GetSelectedItems(vtkSelection *input,\n    vtkDataObject *data, int fieldType, vtkIdTypeArray *indices)\n\nStatic generic method for obtaining selected items from a data\nobject. Other static methods (e.g. GetSelectedVertices) call this\none.\n"},
  {(char*)"GetSelectedVertices", PyvtkConvertSelection_GetSelectedVertices, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedVertices(vtkSelection, vtkGraph, vtkIdTypeArray)\nC++: static void GetSelectedVertices(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {(char*)"GetSelectedEdges", PyvtkConvertSelection_GetSelectedEdges, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedEdges(vtkSelection, vtkGraph, vtkIdTypeArray)\nC++: static void GetSelectedEdges(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {(char*)"GetSelectedPoints", PyvtkConvertSelection_GetSelectedPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedPoints(vtkSelection, vtkDataSet, vtkIdTypeArray)\nC++: static void GetSelectedPoints(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {(char*)"GetSelectedCells", PyvtkConvertSelection_GetSelectedCells, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedCells(vtkSelection, vtkDataSet, vtkIdTypeArray)\nC++: static void GetSelectedCells(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {(char*)"GetSelectedRows", PyvtkConvertSelection_GetSelectedRows, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSelectedRows(vtkSelection, vtkTable, vtkIdTypeArray)\nC++: static void GetSelectedRows(vtkSelection *input,\n    vtkTable *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {(char*)"ToSelectionType", PyvtkConvertSelection_ToSelectionType, METH_VARARGS | METH_STATIC,
   (char*)"V.ToSelectionType(vtkSelection, vtkDataObject, int,\n    vtkStringArray, int) -> vtkSelection\nC++: static vtkSelection *ToSelectionType(vtkSelection *input,\n    vtkDataObject *data, int type, vtkStringArray *arrayNames=0,\n    int inputFieldType=-1)\n\nA generic static method for converting selection types. The type\nshould be an integer constant defined in vtkSelectionNode.h.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConvertSelection_StaticNew()
{
  return vtkConvertSelection::New();
}

PyObject *PyVTKClass_vtkConvertSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConvertSelection_StaticNew,
    PyvtkConvertSelection_Methods,
    "vtkConvertSelection", modulename,
    NULL, NULL,
    PyvtkConvertSelection_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkConvertSelection_Doc()
{
  static const char *docstring[] = {
    "vtkConvertSelection - Convert a selection from one type to another\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "vtkConvertSelection converts an input selection from one type to\nanother in the context of a data object being selected. The first\ninput is the selection, while the second input is the data object\nthat the selection relates to.\n\nSee Also:\n\nvtkSelection vtkSelectionNode vtkExtractSelection\nvtkExtractSelectedGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConvertSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConvertSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConvertSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

