// python wrapper for vtkPVPlotMatrixView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPlotMatrixView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPlotMatrixView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPlotMatrixViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVContextViewNew
extern "C" { PyObject *PyVTKClass_vtkPVContextViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVContextViewNew
#endif

static const char **PyvtkPVPlotMatrixView_Doc();


static PyObject *
PyvtkPVPlotMatrixView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPlotMatrixView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotMatrixView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPlotMatrixView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotMatrixView::NewInstance());

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
PyvtkPVPlotMatrixView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPlotMatrixView *tempr = vtkPVPlotMatrixView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkPVPlotMatrixView::GetContextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  vtkChartRepresentation *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetActivePlot(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlot(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetActiveRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveRow() :
      op->vtkPVPlotMatrixView::GetActiveRow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetActiveColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveColumn() :
      op->vtkPVPlotMatrixView::GetActiveColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_ClearAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAnimationPath();
      }
    else
      {
      op->vtkPVPlotMatrixView::ClearAnimationPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_AddAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddAnimationPath(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::AddAnimationPath(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_StartAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartAnimationPath();
      }
    else
      {
      op->vtkPVPlotMatrixView::StartAnimationPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_AdvanceAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdvanceAnimationPath();
      }
    else
      {
      op->vtkPVPlotMatrixView::AdvanceAnimationPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkPVPlotMatrixView::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  int temp1;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetTitleFont(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleFont(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleFontFamily(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleFontSize(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleBold(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleItalic(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleFontFamily() :
      op->vtkPVPlotMatrixView::GetTitleFontFamily());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontSize() :
      op->vtkPVPlotMatrixView::GetTitleFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontBold() :
      op->vtkPVPlotMatrixView::GetTitleFontBold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleFontItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontItalic() :
      op->vtkPVPlotMatrixView::GetTitleFontItalic());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetTitleColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTitleColor() :
      op->vtkPVPlotMatrixView::GetTitleColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTitleAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleAlignment(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTitleAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTitleAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleAlignment() :
      op->vtkPVPlotMatrixView::GetTitleAlignment());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetNumberOfAnimationFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAnimationFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfAnimationFrames(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetNumberOfAnimationFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGutter(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetGutter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutterX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGutterX(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetGutterX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGutterY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGutterY(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetGutterY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBorders(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBorders(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderLeft(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBorderLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderBottom(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBorderBottom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderRight(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBorderRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBorderTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderTop(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBorderTop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGridVisibility(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetGridVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotGridVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotGridVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramGridVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramGridVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotGridVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotGridVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridVisibility(temp0) :
      op->vtkPVPlotMatrixView::GetGridVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetBackgroundColor(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor(temp0) :
      op->vtkPVPlotMatrixView::GetBackgroundColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetScatterPlotBackgroundColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotBackgroundColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetHistogramBackgroundColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramBackgroundColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetActivePlotBackgroundColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotBackgroundColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
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
    if (ap.IsBound())
      {
      op->SetAxisColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisColor(temp0) :
      op->vtkPVPlotMatrixView::GetAxisColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
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
    if (ap.IsBound())
      {
      op->SetGridColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetGridColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetGridColor(temp0) :
      op->vtkPVPlotMatrixView::GetGridColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotGridColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotGridColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramGridColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramGridColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotGridColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotGridColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelVisibility(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelVisibility(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelFont(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelFont(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelFontFamily(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelFontFamily(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelFontFamily(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelFontFamily(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelFontFamily(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelFontSize(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelFontSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelFontSize(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelFontSize(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelFontSize(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelBold(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelBold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelBold(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelBold(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelBold(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelItalic(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelItalic(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelItalic(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelItalic(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelItalic(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabelFontFamily(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontFamily(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontSize(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontBold(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontBold(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelFontItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontItalic(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelFontItalic(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
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
    if (ap.IsBound())
      {
      op->SetAxisLabelColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetScatterPlotAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetHistogramAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
      op->SetActivePlotAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisLabelColor(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelNotation(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelNotation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelNotation(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelNotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelPrecision(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetAxisLabelPrecision(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotAxisLabelPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotAxisLabelPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramAxisLabelPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramAxisLabelPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotAxisLabelPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotAxisLabelPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelPrecision(temp0) :
      op->vtkPVPlotMatrixView::GetAxisLabelPrecision(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTooltipNotation(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTooltipNotation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotTooltipNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotTooltipNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramTooltipNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramTooltipNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotTooltipNotation(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotTooltipNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTooltipPrecision(temp0, temp1);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetTooltipPrecision(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScatterPlotTooltipPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotTooltipPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetHistogramTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramTooltipPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetHistogramTooltipPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetActivePlotTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotTooltipPrecision(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetActivePlotTooltipPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation(temp0) :
      op->vtkPVPlotMatrixView::GetTooltipNotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision(temp0) :
      op->vtkPVPlotMatrixView::GetTooltipPrecision(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetScatterPlotSelectedRowColumnColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotSelectedRowColumnColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedRowColumnColor() :
      op->vtkPVPlotMatrixView::GetScatterPlotSelectedRowColumnColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_SetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

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
    if (ap.IsBound())
      {
      op->SetScatterPlotSelectedActiveColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVPlotMatrixView::SetScatterPlotSelectedActiveColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_GetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedActiveColor() :
      op->vtkPVPlotMatrixView::GetScatterPlotSelectedActiveColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixView_UpdateSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixView *op = static_cast<vtkPVPlotMatrixView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateSettings();
      }
    else
      {
      op->vtkPVPlotMatrixView::UpdateSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPlotMatrixView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPlotMatrixView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPlotMatrixView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPlotMatrixView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPlotMatrixView\nC++: vtkPVPlotMatrixView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPlotMatrixView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPlotMatrixView\nC++: vtkPVPlotMatrixView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetContextItem", PyvtkPVPlotMatrixView_GetContextItem, METH_VARARGS,
   (char*)"V.GetContextItem() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetContextItem()\n\n"},
  {(char*)"SetSelection", PyvtkPVPlotMatrixView_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkChartRepresentation, vtkSelection)\nC++: virtual void SetSelection(vtkChartRepresentation *repr,\n    vtkSelection *selection)\n\nRepresentations can use this method to set the selection for a\nparticular representation. Subclasses override this method to\npass on the selection to the chart using annotation link. Note\nthis is meant to pass selection for the local process alone. The\nview does not manage data movement for the selection.\n"},
  {(char*)"SetActivePlot", PyvtkPVPlotMatrixView_SetActivePlot, METH_VARARGS,
   (char*)"V.SetActivePlot(int, int)\nC++: void SetActivePlot(int i, int j)\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {(char*)"GetActiveRow", PyvtkPVPlotMatrixView_GetActiveRow, METH_VARARGS,
   (char*)"V.GetActiveRow() -> int\nC++: int GetActiveRow()\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {(char*)"GetActiveColumn", PyvtkPVPlotMatrixView_GetActiveColumn, METH_VARARGS,
   (char*)"V.GetActiveColumn() -> int\nC++: int GetActiveColumn()\n\nGet/set the active plot in the scatter plot matrix.\n"},
  {(char*)"ClearAnimationPath", PyvtkPVPlotMatrixView_ClearAnimationPath, METH_VARARGS,
   (char*)"V.ClearAnimationPath()\nC++: void ClearAnimationPath()\n\nClear the animation path, ensuring it is empty.\n"},
  {(char*)"AddAnimationPath", PyvtkPVPlotMatrixView_AddAnimationPath, METH_VARARGS,
   (char*)"V.AddAnimationPath(int, int)\nC++: void AddAnimationPath(int i, int j)\n\nAppend to the animation path of the scatter plot matrix.\n"},
  {(char*)"StartAnimationPath", PyvtkPVPlotMatrixView_StartAnimationPath, METH_VARARGS,
   (char*)"V.StartAnimationPath()\nC++: void StartAnimationPath()\n\nAppend to the animation path of the scatter plot matrix.\n"},
  {(char*)"AdvanceAnimationPath", PyvtkPVPlotMatrixView_AdvanceAnimationPath, METH_VARARGS,
   (char*)"V.AdvanceAnimationPath()\nC++: void AdvanceAnimationPath()\n\nPush the animation forward a frame.\n"},
  {(char*)"SetTitle", PyvtkPVPlotMatrixView_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(const char *title)\n\nSet the title of the active plot. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitle", PyvtkPVPlotMatrixView_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: const char *GetTitle()\n\nSet the title of the active plot. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleFont", PyvtkPVPlotMatrixView_SetTitleFont, METH_VARARGS,
   (char*)"V.SetTitleFont(string, int, bool, bool)\nC++: void SetTitleFont(const char *family, int pointSize,\n    bool bold, bool italic)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleFontFamily", PyvtkPVPlotMatrixView_SetTitleFontFamily, METH_VARARGS,
   (char*)"V.SetTitleFontFamily(string)\nC++: void SetTitleFontFamily(const char *family)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleFontSize", PyvtkPVPlotMatrixView_SetTitleFontSize, METH_VARARGS,
   (char*)"V.SetTitleFontSize(int)\nC++: void SetTitleFontSize(int pointSize)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleBold", PyvtkPVPlotMatrixView_SetTitleBold, METH_VARARGS,
   (char*)"V.SetTitleBold(bool)\nC++: void SetTitleBold(bool bold)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleItalic", PyvtkPVPlotMatrixView_SetTitleItalic, METH_VARARGS,
   (char*)"V.SetTitleItalic(bool)\nC++: void SetTitleItalic(bool italic)\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleFontFamily", PyvtkPVPlotMatrixView_GetTitleFontFamily, METH_VARARGS,
   (char*)"V.GetTitleFontFamily() -> string\nC++: const char *GetTitleFontFamily()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleFontSize", PyvtkPVPlotMatrixView_GetTitleFontSize, METH_VARARGS,
   (char*)"V.GetTitleFontSize() -> int\nC++: int GetTitleFontSize()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleFontBold", PyvtkPVPlotMatrixView_GetTitleFontBold, METH_VARARGS,
   (char*)"V.GetTitleFontBold() -> int\nC++: int GetTitleFontBold()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleFontItalic", PyvtkPVPlotMatrixView_GetTitleFontItalic, METH_VARARGS,
   (char*)"V.GetTitleFontItalic() -> int\nC++: int GetTitleFontItalic()\n\nSet the active plot title's font. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleColor", PyvtkPVPlotMatrixView_SetTitleColor, METH_VARARGS,
   (char*)"V.SetTitleColor(float, float, float)\nC++: void SetTitleColor(double red, double green, double blue)\n\nSet the active plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleColor", PyvtkPVPlotMatrixView_GetTitleColor, METH_VARARGS,
   (char*)"V.GetTitleColor() -> (float, ...)\nC++: double *GetTitleColor()\n\nSet the active plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetTitleAlignment", PyvtkPVPlotMatrixView_SetTitleAlignment, METH_VARARGS,
   (char*)"V.SetTitleAlignment(int)\nC++: void SetTitleAlignment(int alignment)\n\nSet the active plot title's alignment. These methods should not\nbe called directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetTitleAlignment", PyvtkPVPlotMatrixView_GetTitleAlignment, METH_VARARGS,
   (char*)"V.GetTitleAlignment() -> int\nC++: int GetTitleAlignment()\n\nSet the active plot title's alignment. These methods should not\nbe called directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetNumberOfAnimationFrames", PyvtkPVPlotMatrixView_SetNumberOfAnimationFrames, METH_VARARGS,
   (char*)"V.SetNumberOfAnimationFrames(int)\nC++: void SetNumberOfAnimationFrames(int value)\n\nSet the number of animation frames used when changing the active\nscatterplot.\n"},
  {(char*)"SetGutter", PyvtkPVPlotMatrixView_SetGutter, METH_VARARGS,
   (char*)"V.SetGutter(float, float)\nC++: virtual void SetGutter(float x, float y)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetGutterX", PyvtkPVPlotMatrixView_SetGutterX, METH_VARARGS,
   (char*)"V.SetGutterX(float)\nC++: void SetGutterX(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetGutterY", PyvtkPVPlotMatrixView_SetGutterY, METH_VARARGS,
   (char*)"V.SetGutterY(float)\nC++: void SetGutterY(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix. These methods should not be called directly. They are\nmade public only so that the client-server-stream-interpreter can\ninvoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetBorders", PyvtkPVPlotMatrixView_SetBorders, METH_VARARGS,
   (char*)"V.SetBorders(int, int, int, int)\nC++: virtual void SetBorders(int left, int bottom, int right,\n    int top)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetBorderLeft", PyvtkPVPlotMatrixView_SetBorderLeft, METH_VARARGS,
   (char*)"V.SetBorderLeft(int)\nC++: virtual void SetBorderLeft(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetBorderBottom", PyvtkPVPlotMatrixView_SetBorderBottom, METH_VARARGS,
   (char*)"V.SetBorderBottom(int)\nC++: virtual void SetBorderBottom(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetBorderRight", PyvtkPVPlotMatrixView_SetBorderRight, METH_VARARGS,
   (char*)"V.SetBorderRight(int)\nC++: virtual void SetBorderRight(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetBorderTop", PyvtkPVPlotMatrixView_SetBorderTop, METH_VARARGS,
   (char*)"V.SetBorderTop(int)\nC++: virtual void SetBorderTop(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart). These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetGridVisibility", PyvtkPVPlotMatrixView_SetGridVisibility, METH_VARARGS,
   (char*)"V.SetGridVisibility(int, bool)\nC++: void SetGridVisibility(int plotType, bool visible)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetScatterPlotGridVisibility", PyvtkPVPlotMatrixView_SetScatterPlotGridVisibility, METH_VARARGS,
   (char*)"V.SetScatterPlotGridVisibility(bool)\nC++: void SetScatterPlotGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetHistogramGridVisibility", PyvtkPVPlotMatrixView_SetHistogramGridVisibility, METH_VARARGS,
   (char*)"V.SetHistogramGridVisibility(bool)\nC++: void SetHistogramGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetActivePlotGridVisibility", PyvtkPVPlotMatrixView_SetActivePlotGridVisibility, METH_VARARGS,
   (char*)"V.SetActivePlotGridVisibility(bool)\nC++: void SetActivePlotGridVisibility(bool value)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetGridVisibility", PyvtkPVPlotMatrixView_GetGridVisibility, METH_VARARGS,
   (char*)"V.GetGridVisibility(int) -> int\nC++: int GetGridVisibility(int plotType)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetBackgroundColor", PyvtkPVPlotMatrixView_SetBackgroundColor, METH_VARARGS,
   (char*)"V.SetBackgroundColor(int, float, float, float, float)\nC++: void SetBackgroundColor(int plotType, double red,\n    double green, double blue, double alpha)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetBackgroundColor", PyvtkPVPlotMatrixView_GetBackgroundColor, METH_VARARGS,
   (char*)"V.GetBackgroundColor(int) -> (float, ...)\nC++: double *GetBackgroundColor(int plotType)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotBackgroundColor", PyvtkPVPlotMatrixView_SetScatterPlotBackgroundColor, METH_VARARGS,
   (char*)"V.SetScatterPlotBackgroundColor(float, float, float, float)\nC++: void SetScatterPlotBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramBackgroundColor", PyvtkPVPlotMatrixView_SetHistogramBackgroundColor, METH_VARARGS,
   (char*)"V.SetHistogramBackgroundColor(float, float, float, float)\nC++: void SetHistogramBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotBackgroundColor", PyvtkPVPlotMatrixView_SetActivePlotBackgroundColor, METH_VARARGS,
   (char*)"V.SetActivePlotBackgroundColor(float, float, float, float)\nC++: void SetActivePlotBackgroundColor(double value1,\n    double value2, double value3, double value4)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisColor", PyvtkPVPlotMatrixView_SetAxisColor, METH_VARARGS,
   (char*)"V.SetAxisColor(int, float, float, float)\nC++: void SetAxisColor(int plotType, double red, double green,\n    double blue)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"GetAxisColor", PyvtkPVPlotMatrixView_GetAxisColor, METH_VARARGS,
   (char*)"V.GetAxisColor(int) -> (float, ...)\nC++: double *GetAxisColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetScatterPlotAxisColor", PyvtkPVPlotMatrixView_SetScatterPlotAxisColor, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisColor(float, float, float)\nC++: void SetScatterPlotAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetHistogramAxisColor", PyvtkPVPlotMatrixView_SetHistogramAxisColor, METH_VARARGS,
   (char*)"V.SetHistogramAxisColor(float, float, float)\nC++: void SetHistogramAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetActivePlotAxisColor", PyvtkPVPlotMatrixView_SetActivePlotAxisColor, METH_VARARGS,
   (char*)"V.SetActivePlotAxisColor(float, float, float)\nC++: void SetActivePlotAxisColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetGridColor", PyvtkPVPlotMatrixView_SetGridColor, METH_VARARGS,
   (char*)"V.SetGridColor(int, float, float, float)\nC++: void SetGridColor(int plotType, double red, double green,\n    double blue)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"GetGridColor", PyvtkPVPlotMatrixView_GetGridColor, METH_VARARGS,
   (char*)"V.GetGridColor(int) -> (float, ...)\nC++: double *GetGridColor(int plotType)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetScatterPlotGridColor", PyvtkPVPlotMatrixView_SetScatterPlotGridColor, METH_VARARGS,
   (char*)"V.SetScatterPlotGridColor(float, float, float)\nC++: void SetScatterPlotGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetHistogramGridColor", PyvtkPVPlotMatrixView_SetHistogramGridColor, METH_VARARGS,
   (char*)"V.SetHistogramGridColor(float, float, float)\nC++: void SetHistogramGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetActivePlotGridColor", PyvtkPVPlotMatrixView_SetActivePlotGridColor, METH_VARARGS,
   (char*)"V.SetActivePlotGridColor(float, float, float)\nC++: void SetActivePlotGridColor(double value1, double value2,\n    double value3)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}. These\nmethods should not be called directly. They are made public only\nso that the client-server-stream-interpreter can invoke them. Use\nthe corresponding properties to change these values.\n"},
  {(char*)"SetAxisLabelVisibility", PyvtkPVPlotMatrixView_SetAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetAxisLabelVisibility(int, bool)\nC++: void SetAxisLabelVisibility(int plotType, bool visible)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetAxisLabelVisibility", PyvtkPVPlotMatrixView_GetAxisLabelVisibility, METH_VARARGS,
   (char*)"V.GetAxisLabelVisibility(int) -> int\nC++: int GetAxisLabelVisibility(int plotType)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetScatterPlotAxisLabelVisibility", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelVisibility(bool)\nC++: void SetScatterPlotAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetHistogramAxisLabelVisibility", PyvtkPVPlotMatrixView_SetHistogramAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelVisibility(bool)\nC++: void SetHistogramAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetActivePlotAxisLabelVisibility", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelVisibility, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelVisibility(bool)\nC++: void SetActivePlotAxisLabelVisibility(bool value)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}. These methods should not be called\ndirectly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetAxisLabelFont", PyvtkPVPlotMatrixView_SetAxisLabelFont, METH_VARARGS,
   (char*)"V.SetAxisLabelFont(int, string, int, bool, bool)\nC++: void SetAxisLabelFont(int plotType, const char *family,\n    int pointSize, bool bold, bool italic)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.SetAxisLabelFontFamily(int, string)\nC++: void SetAxisLabelFontFamily(int plotType, const char *family)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelFontFamily(string)\nC++: void SetScatterPlotAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelFontFamily(string)\nC++: void SetHistogramAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelFontFamily", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelFontFamily(string)\nC++: void SetActivePlotAxisLabelFontFamily(const char *value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelFontSize", PyvtkPVPlotMatrixView_SetAxisLabelFontSize, METH_VARARGS,
   (char*)"V.SetAxisLabelFontSize(int, int)\nC++: void SetAxisLabelFontSize(int plotType, int pointSize)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelFontSize", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelFontSize, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelFontSize(int)\nC++: void SetScatterPlotAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelFontSize", PyvtkPVPlotMatrixView_SetHistogramAxisLabelFontSize, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelFontSize(int)\nC++: void SetHistogramAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelFontSize", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelFontSize, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelFontSize(int)\nC++: void SetActivePlotAxisLabelFontSize(int value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelBold", PyvtkPVPlotMatrixView_SetAxisLabelBold, METH_VARARGS,
   (char*)"V.SetAxisLabelBold(int, bool)\nC++: void SetAxisLabelBold(int plotType, bool bold)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelBold", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelBold, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelBold(bool)\nC++: void SetScatterPlotAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelBold", PyvtkPVPlotMatrixView_SetHistogramAxisLabelBold, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelBold(bool)\nC++: void SetHistogramAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelBold", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelBold, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelBold(bool)\nC++: void SetActivePlotAxisLabelBold(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelItalic", PyvtkPVPlotMatrixView_SetAxisLabelItalic, METH_VARARGS,
   (char*)"V.SetAxisLabelItalic(int, bool)\nC++: void SetAxisLabelItalic(int plotType, bool italic)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelItalic", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelItalic, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelItalic(bool)\nC++: void SetScatterPlotAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelItalic", PyvtkPVPlotMatrixView_SetHistogramAxisLabelItalic, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelItalic(bool)\nC++: void SetHistogramAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelItalic", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelItalic, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelItalic(bool)\nC++: void SetActivePlotAxisLabelItalic(bool value)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelFontFamily", PyvtkPVPlotMatrixView_GetAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.GetAxisLabelFontFamily(int) -> string\nC++: const char *GetAxisLabelFontFamily(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelFontSize", PyvtkPVPlotMatrixView_GetAxisLabelFontSize, METH_VARARGS,
   (char*)"V.GetAxisLabelFontSize(int) -> int\nC++: int GetAxisLabelFontSize(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelFontBold", PyvtkPVPlotMatrixView_GetAxisLabelFontBold, METH_VARARGS,
   (char*)"V.GetAxisLabelFontBold(int) -> int\nC++: int GetAxisLabelFontBold(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelFontItalic", PyvtkPVPlotMatrixView_GetAxisLabelFontItalic, METH_VARARGS,
   (char*)"V.GetAxisLabelFontItalic(int) -> int\nC++: int GetAxisLabelFontItalic(int plotType)\n\nSet the axis label font for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelColor", PyvtkPVPlotMatrixView_SetAxisLabelColor, METH_VARARGS,
   (char*)"V.SetAxisLabelColor(int, float, float, float)\nC++: void SetAxisLabelColor(int plotType, double red,\n    double green, double blue)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelColor", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelColor, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelColor(float, float, float)\nC++: void SetScatterPlotAxisLabelColor(double value1,\n    double value2, double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelColor", PyvtkPVPlotMatrixView_SetHistogramAxisLabelColor, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelColor(float, float, float)\nC++: void SetHistogramAxisLabelColor(double value1, double value2,\n     double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelColor", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelColor, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelColor(float, float, float)\nC++: void SetActivePlotAxisLabelColor(double value1,\n    double value2, double value3)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelColor", PyvtkPVPlotMatrixView_GetAxisLabelColor, METH_VARARGS,
   (char*)"V.GetAxisLabelColor(int) -> (float, ...)\nC++: double *GetAxisLabelColor(int plotType)\n\nSets the axis label color for the axes given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelNotation", PyvtkPVPlotMatrixView_SetAxisLabelNotation, METH_VARARGS,
   (char*)"V.SetAxisLabelNotation(int, int)\nC++: void SetAxisLabelNotation(int plotType, int notation)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelNotation", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelNotation, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelNotation(int)\nC++: void SetScatterPlotAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelNotation", PyvtkPVPlotMatrixView_SetHistogramAxisLabelNotation, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelNotation(int)\nC++: void SetHistogramAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelNotation", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelNotation, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelNotation(int)\nC++: void SetActivePlotAxisLabelNotation(int value)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelNotation", PyvtkPVPlotMatrixView_GetAxisLabelNotation, METH_VARARGS,
   (char*)"V.GetAxisLabelNotation(int) -> int\nC++: int GetAxisLabelNotation(int plotType)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetAxisLabelPrecision", PyvtkPVPlotMatrixView_SetAxisLabelPrecision, METH_VARARGS,
   (char*)"V.SetAxisLabelPrecision(int, int)\nC++: void SetAxisLabelPrecision(int plotType, int precision)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotAxisLabelPrecision", PyvtkPVPlotMatrixView_SetScatterPlotAxisLabelPrecision, METH_VARARGS,
   (char*)"V.SetScatterPlotAxisLabelPrecision(int)\nC++: void SetScatterPlotAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramAxisLabelPrecision", PyvtkPVPlotMatrixView_SetHistogramAxisLabelPrecision, METH_VARARGS,
   (char*)"V.SetHistogramAxisLabelPrecision(int)\nC++: void SetHistogramAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotAxisLabelPrecision", PyvtkPVPlotMatrixView_SetActivePlotAxisLabelPrecision, METH_VARARGS,
   (char*)"V.SetActivePlotAxisLabelPrecision(int)\nC++: void SetActivePlotAxisLabelPrecision(int value)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetAxisLabelPrecision", PyvtkPVPlotMatrixView_GetAxisLabelPrecision, METH_VARARGS,
   (char*)"V.GetAxisLabelPrecision(int) -> int\nC++: int GetAxisLabelPrecision(int plotType)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetTooltipNotation", PyvtkPVPlotMatrixView_SetTooltipNotation, METH_VARARGS,
   (char*)"V.SetTooltipNotation(int, int)\nC++: void SetTooltipNotation(int plotType, int notation)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotTooltipNotation", PyvtkPVPlotMatrixView_SetScatterPlotTooltipNotation, METH_VARARGS,
   (char*)"V.SetScatterPlotTooltipNotation(int)\nC++: void SetScatterPlotTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramTooltipNotation", PyvtkPVPlotMatrixView_SetHistogramTooltipNotation, METH_VARARGS,
   (char*)"V.SetHistogramTooltipNotation(int)\nC++: void SetHistogramTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotTooltipNotation", PyvtkPVPlotMatrixView_SetActivePlotTooltipNotation, METH_VARARGS,
   (char*)"V.SetActivePlotTooltipNotation(int)\nC++: void SetActivePlotTooltipNotation(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetTooltipPrecision", PyvtkPVPlotMatrixView_SetTooltipPrecision, METH_VARARGS,
   (char*)"V.SetTooltipPrecision(int, int)\nC++: void SetTooltipPrecision(int plotType, int precision)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotTooltipPrecision", PyvtkPVPlotMatrixView_SetScatterPlotTooltipPrecision, METH_VARARGS,
   (char*)"V.SetScatterPlotTooltipPrecision(int)\nC++: void SetScatterPlotTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetHistogramTooltipPrecision", PyvtkPVPlotMatrixView_SetHistogramTooltipPrecision, METH_VARARGS,
   (char*)"V.SetHistogramTooltipPrecision(int)\nC++: void SetHistogramTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetActivePlotTooltipPrecision", PyvtkPVPlotMatrixView_SetActivePlotTooltipPrecision, METH_VARARGS,
   (char*)"V.SetActivePlotTooltipPrecision(int)\nC++: void SetActivePlotTooltipPrecision(int value)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetTooltipNotation", PyvtkPVPlotMatrixView_GetTooltipNotation, METH_VARARGS,
   (char*)"V.GetTooltipNotation(int) -> int\nC++: int GetTooltipNotation(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"GetTooltipPrecision", PyvtkPVPlotMatrixView_GetTooltipPrecision, METH_VARARGS,
   (char*)"V.GetTooltipPrecision(int) -> int\nC++: int GetTooltipPrecision(int plotType)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}. These methods should not be called directly. They\nare made public only so that the client-server-stream-interpreter\ncan invoke them. Use the corresponding properties to change these\nvalues.\n"},
  {(char*)"SetScatterPlotSelectedRowColumnColor", PyvtkPVPlotMatrixView_SetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   (char*)"V.SetScatterPlotSelectedRowColumnColor(float, float, float, float)\nC++: void SetScatterPlotSelectedRowColumnColor(double red,\n    double green, double blue, double alpha)\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetScatterPlotSelectedRowColumnColor", PyvtkPVPlotMatrixView_GetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   (char*)"V.GetScatterPlotSelectedRowColumnColor() -> (float, ...)\nC++: double *GetScatterPlotSelectedRowColumnColor()\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"SetScatterPlotSelectedActiveColor", PyvtkPVPlotMatrixView_SetScatterPlotSelectedActiveColor, METH_VARARGS,
   (char*)"V.SetScatterPlotSelectedActiveColor(float, float, float, float)\nC++: void SetScatterPlotSelectedActiveColor(double red,\n    double green, double blue, double alpha)\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"GetScatterPlotSelectedActiveColor", PyvtkPVPlotMatrixView_GetScatterPlotSelectedActiveColor, METH_VARARGS,
   (char*)"V.GetScatterPlotSelectedActiveColor() -> (float, ...)\nC++: double *GetScatterPlotSelectedActiveColor()\n\nSet the scatter plot title's color. These methods should not be\ncalled directly. They are made public only so that the\nclient-server-stream-interpreter can invoke them. Use the\ncorresponding properties to change these values.\n"},
  {(char*)"UpdateSettings", PyvtkPVPlotMatrixView_UpdateSettings, METH_VARARGS,
   (char*)"V.UpdateSettings()\nC++: void UpdateSettings()\n\nUpdate all the settings\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPlotMatrixView_StaticNew()
{
  return vtkPVPlotMatrixView::New();
}

PyObject *PyVTKClass_vtkPVPlotMatrixViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPlotMatrixView_StaticNew,
    PyvtkPVPlotMatrixView_Methods,
    "vtkPVPlotMatrixView", modulename,
    NULL, NULL,
    PyvtkPVPlotMatrixView_Doc(),
    PyVTKClass_vtkPVContextViewNew(modulename));
  return cls;
}

const char **PyvtkPVPlotMatrixView_Doc()
{
  static const char *docstring[] = {
    "vtkPVPlotMatrixView - no description provided.\n\n",
    "Superclass: vtkPVContextView\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPlotMatrixView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPlotMatrixViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPlotMatrixView", o) != 0)
    {
    Py_DECREF(o);
    }

}

