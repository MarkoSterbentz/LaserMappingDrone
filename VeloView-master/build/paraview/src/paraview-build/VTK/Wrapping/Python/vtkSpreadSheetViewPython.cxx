// python wrapper for vtkSpreadSheetView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkSpreadSheetView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpreadSheetView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpreadSheetViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVViewNew
extern "C" { PyObject *PyVTKClass_vtkPVViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVViewNew
#endif

static const char **PyvtkSpreadSheetView_Doc();


static PyObject *
PyvtkSpreadSheetView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpreadSheetView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpreadSheetView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpreadSheetView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpreadSheetView::NewInstance());

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
PyvtkSpreadSheetView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpreadSheetView *tempr = vtkSpreadSheetView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkSpreadSheetView::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkSpreadSheetView::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSpreadSheetView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetShowExtractedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowExtractedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowExtractedSelection(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::SetShowExtractedSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ShowExtractedSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowExtractedSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowExtractedSelectionOn();
      }
    else
      {
      op->vtkSpreadSheetView::ShowExtractedSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ShowExtractedSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowExtractedSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowExtractedSelectionOff();
      }
    else
      {
      op->vtkSpreadSheetView::ShowExtractedSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetShowExtractedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowExtractedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowExtractedSelection() :
      op->vtkSpreadSheetView::GetShowExtractedSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetNumberOfColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColumns() :
      op->vtkSpreadSheetView::GetNumberOfColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkSpreadSheetView::GetNumberOfRows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkSpreadSheetView::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1) :
      op->vtkSpreadSheetView::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValueByName(temp0, temp1) :
      op->vtkSpreadSheetView::GetValueByName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsRowSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRowSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsRowSelected(temp0) :
      op->vtkSpreadSheetView::IsRowSelected(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsAvailable(temp0) :
      op->vtkSpreadSheetView::IsAvailable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnNameToSort(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::SetColumnNameToSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColumnNameToSort();
      }
    else
      {
      op->vtkSpreadSheetView::SetColumnNameToSort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSpreadSheetView_SetColumnNameToSort_s1(self, args);
    case 0:
      return PyvtkSpreadSheetView_SetColumnNameToSort_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnNameToSort");
  return NULL;
}



static PyObject *
PyvtkSpreadSheetView_SetComponentToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentToSort(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::SetComponentToSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetInvertSortOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertSortOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvertSortOrder(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::SetInvertSortOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockSize(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::SetBlockSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkCSVExporter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
    {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkSpreadSheetView::Export(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCache();
      }
    else
      {
      op->vtkSpreadSheetView::ClearCache();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_FetchBlockCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchBlockCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->FetchBlockCallback(temp0);
      }
    else
      {
      op->vtkSpreadSheetView::FetchBlockCallback(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpreadSheetView_Methods[] = {
  {(char*)"GetClassName", PyvtkSpreadSheetView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpreadSheetView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpreadSheetView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpreadSheetView\nC++: vtkSpreadSheetView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpreadSheetView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpreadSheetView\nC++: vtkSpreadSheetView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StillRender", PyvtkSpreadSheetView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\nTriggers a high-resolution render.@CallOnAllProcessess\n"},
  {(char*)"InteractiveRender", PyvtkSpreadSheetView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.@CallOnAllProcessess\n"},
  {(char*)"Update", PyvtkSpreadSheetView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverridden to identify and locate the active-representation.\n"},
  {(char*)"SetShowExtractedSelection", PyvtkSpreadSheetView_SetShowExtractedSelection, METH_VARARGS,
   (char*)"V.SetShowExtractedSelection(bool)\nC++: void SetShowExtractedSelection(bool)\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.@CallOnAllProcessess\n"},
  {(char*)"ShowExtractedSelectionOn", PyvtkSpreadSheetView_ShowExtractedSelectionOn, METH_VARARGS,
   (char*)"V.ShowExtractedSelectionOn()\nC++: void ShowExtractedSelectionOn()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.@CallOnAllProcessess\n"},
  {(char*)"ShowExtractedSelectionOff", PyvtkSpreadSheetView_ShowExtractedSelectionOff, METH_VARARGS,
   (char*)"V.ShowExtractedSelectionOff()\nC++: void ShowExtractedSelectionOff()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.@CallOnAllProcessess\n"},
  {(char*)"GetShowExtractedSelection", PyvtkSpreadSheetView_GetShowExtractedSelection, METH_VARARGS,
   (char*)"V.GetShowExtractedSelection() -> bool\nC++: bool GetShowExtractedSelection()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.@CallOnAllProcessess\n"},
  {(char*)"GetNumberOfColumns", PyvtkSpreadSheetView_GetNumberOfColumns, METH_VARARGS,
   (char*)"V.GetNumberOfColumns() -> int\nC++: vtkIdType GetNumberOfColumns()\n\nGet the number of columns.@CallOnClient\n"},
  {(char*)"GetNumberOfRows", PyvtkSpreadSheetView_GetNumberOfRows, METH_VARARGS,
   (char*)"V.GetNumberOfRows() -> int\nC++: vtkIdType GetNumberOfRows()\n\nGet the number of rows.@CallOnClient\n"},
  {(char*)"GetColumnName", PyvtkSpreadSheetView_GetColumnName, METH_VARARGS,
   (char*)"V.GetColumnName(int) -> string\nC++: const char *GetColumnName(vtkIdType index)\n\nReturns the name for the column.@CallOnClient\n"},
  {(char*)"GetValue", PyvtkSpreadSheetView_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int, int) -> vtkVariant\nC++: vtkVariant GetValue(vtkIdType row, vtkIdType col)\n\nReturns the value at given location. This may result in\ncollective operations is data is not available locally. This\nmethod can only be called on the CLIENT process for\nnow.@CallOnClient\n"},
  {(char*)"GetValueByName", PyvtkSpreadSheetView_GetValueByName, METH_VARARGS,
   (char*)"V.GetValueByName(int, string) -> vtkVariant\nC++: vtkVariant GetValueByName(vtkIdType row,\n    const char *columnName)\n\nReturns the value at given location. This may result in\ncollective operations is data is not available locally. This\nmethod can only be called on the CLIENT process for\nnow.@CallOnClient\n"},
  {(char*)"IsRowSelected", PyvtkSpreadSheetView_IsRowSelected, METH_VARARGS,
   (char*)"V.IsRowSelected(int) -> bool\nC++: bool IsRowSelected(vtkIdType row)\n\nReturns true if the row is selected.\n"},
  {(char*)"IsAvailable", PyvtkSpreadSheetView_IsAvailable, METH_VARARGS,
   (char*)"V.IsAvailable(int) -> bool\nC++: bool IsAvailable(vtkIdType row)\n\nReturns true is the data for the particular row is locally\navailable.\n"},
  {(char*)"SetColumnNameToSort", PyvtkSpreadSheetView_SetColumnNameToSort, METH_VARARGS,
   (char*)"V.SetColumnNameToSort(string)\nC++: void SetColumnNameToSort(const char *)\nV.SetColumnNameToSort()\nC++: void SetColumnNameToSort()\n\nGet/Set the column name to sort by.@CallOnAllProcessess\n"},
  {(char*)"SetComponentToSort", PyvtkSpreadSheetView_SetComponentToSort, METH_VARARGS,
   (char*)"V.SetComponentToSort(int)\nC++: void SetComponentToSort(int val)\n\nGet/Set the component to sort with. Use -1 (default) for\nmagnitude.@CallOnAllProcessess\n"},
  {(char*)"SetInvertSortOrder", PyvtkSpreadSheetView_SetInvertSortOrder, METH_VARARGS,
   (char*)"V.SetInvertSortOrder(bool)\nC++: void SetInvertSortOrder(bool)\n\nGet/Set whether the sort order must be Max to Min rather than Min\nto Max.@CallOnAllProcessess\n"},
  {(char*)"SetBlockSize", PyvtkSpreadSheetView_SetBlockSize, METH_VARARGS,
   (char*)"V.SetBlockSize(int)\nC++: void SetBlockSize(vtkIdType val)\n\nSet the block size@CallOnAllProcessess\n"},
  {(char*)"Export", PyvtkSpreadSheetView_Export, METH_VARARGS,
   (char*)"V.Export(vtkCSVExporter) -> bool\nC++: bool Export(vtkCSVExporter *exporter)\n\nExport the contents of this view using the exporter.\n"},
  {(char*)"ClearCache", PyvtkSpreadSheetView_ClearCache, METH_VARARGS,
   (char*)"V.ClearCache()\nC++: void ClearCache()\n\nAllow user to clear the cache if he needs to.\n"},
  {(char*)"FetchBlockCallback", PyvtkSpreadSheetView_FetchBlockCallback, METH_VARARGS,
   (char*)"V.FetchBlockCallback(int)\nC++: void FetchBlockCallback(vtkIdType blockindex)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpreadSheetView_StaticNew()
{
  return vtkSpreadSheetView::New();
}

PyObject *PyVTKClass_vtkSpreadSheetViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpreadSheetView_StaticNew,
    PyvtkSpreadSheetView_Methods,
    "vtkSpreadSheetView", modulename,
    NULL, NULL,
    PyvtkSpreadSheetView_Doc(),
    PyVTKClass_vtkPVViewNew(modulename));
  return cls;
}

const char **PyvtkSpreadSheetView_Doc()
{
  static const char *docstring[] = {
    "vtkSpreadSheetView\n\n",
    "Superclass: vtkPVView\n\n",
    "vtkSpreadSheetView is a vtkPVView subclass for a view used to show\nany data as a spreadsheet. This view can only show one representation\nat a time. If more than one representation is added to this view,\nonly the first visible representation will be shown.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpreadSheetView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpreadSheetViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpreadSheetView", o) != 0)
    {
    Py_DECREF(o);
    }

}

