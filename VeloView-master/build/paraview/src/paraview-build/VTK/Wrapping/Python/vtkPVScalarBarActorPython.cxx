// python wrapper for vtkPVScalarBarActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVScalarBarActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVScalarBarActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVScalarBarActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarBarActorNew
extern "C" { PyObject *PyVTKClass_vtkScalarBarActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarBarActorNew
#endif

static const char **PyvtkPVScalarBarActor_Doc();


static PyObject *
PyvtkPVScalarBarActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVScalarBarActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVScalarBarActor::NewInstance());

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
PyvtkPVScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVScalarBarActor *tempr = vtkPVScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAspectRatio() :
      op->vtkPVScalarBarActor::GetAspectRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAspectRatio(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetAspectRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLabelFormat() :
      op->vtkPVScalarBarActor::GetAutomaticLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticLabelFormat(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetAutomaticLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticLabelFormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLabelFormatOn();
      }
    else
      {
      op->vtkPVScalarBarActor::AutomaticLabelFormatOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticLabelFormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLabelFormatOff();
      }
    else
      {
      op->vtkPVScalarBarActor::AutomaticLabelFormatOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawTickMarks() :
      op->vtkPVScalarBarActor::GetDrawTickMarks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawTickMarks(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetDrawTickMarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawTickMarksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickMarksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawTickMarksOn();
      }
    else
      {
      op->vtkPVScalarBarActor::DrawTickMarksOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawTickMarksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickMarksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawTickMarksOff();
      }
    else
      {
      op->vtkPVScalarBarActor::DrawTickMarksOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetDrawSubTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawSubTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawSubTickMarks() :
      op->vtkPVScalarBarActor::GetDrawSubTickMarks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetDrawSubTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawSubTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawSubTickMarks(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetDrawSubTickMarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawSubTickMarksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSubTickMarksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawSubTickMarksOn();
      }
    else
      {
      op->vtkPVScalarBarActor::DrawSubTickMarksOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawSubTickMarksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSubTickMarksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawSubTickMarksOff();
      }
    else
      {
      op->vtkPVScalarBarActor::DrawSubTickMarksOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeLabels() :
      op->vtkPVScalarBarActor::GetAddRangeLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddRangeLabels(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetAddRangeLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddRangeLabelsOn();
      }
    else
      {
      op->vtkPVScalarBarActor::AddRangeLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddRangeLabelsOff();
      }
    else
      {
      op->vtkPVScalarBarActor::AddRangeLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticAnnotations(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetAutomaticAnnotations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticAnnotations() :
      op->vtkPVScalarBarActor::GetAutomaticAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticAnnotationsOn();
      }
    else
      {
      op->vtkPVScalarBarActor::AutomaticAnnotationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticAnnotationsOff();
      }
    else
      {
      op->vtkPVScalarBarActor::AutomaticAnnotationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetRangeLabelFormat() :
      op->vtkPVScalarBarActor::GetRangeLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRangeLabelFormat(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetRangeLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddValueLabelIfUnoccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValueLabelIfUnoccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

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
      op->AddValueLabelIfUnoccluded(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVScalarBarActor::AddValueLabelIfUnoccluded(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustification() :
      op->vtkPVScalarBarActor::GetTitleJustification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleJustification(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetTitleJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMinValue() :
      op->vtkPVScalarBarActor::GetTitleJustificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMaxValue() :
      op->vtkPVScalarBarActor::GetTitleJustificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeAnnotations() :
      op->vtkPVScalarBarActor::GetAddRangeAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddRangeAnnotations(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::SetAddRangeAnnotations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddRangeAnnotationsOn();
      }
    else
      {
      op->vtkPVScalarBarActor::AddRangeAnnotationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddRangeAnnotationsOff();
      }
    else
      {
      op->vtkPVScalarBarActor::AddRangeAnnotationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkPVScalarBarActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPVScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVScalarBarActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVScalarBarActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVScalarBarActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVScalarBarActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVScalarBarActor\nC++: vtkPVScalarBarActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVScalarBarActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVScalarBarActor\nC++: vtkPVScalarBarActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAspectRatio", PyvtkPVScalarBarActor_GetAspectRatio, METH_VARARGS,
   (char*)"V.GetAspectRatio() -> float\nC++: double GetAspectRatio()\n\nThe bar aspect ratio (length/width).  Defaults to 20.  Note that\nthis the aspect ratio of the color bar only, not including\nlabels.\n"},
  {(char*)"SetAspectRatio", PyvtkPVScalarBarActor_SetAspectRatio, METH_VARARGS,
   (char*)"V.SetAspectRatio(float)\nC++: void SetAspectRatio(double a)\n\nThe bar aspect ratio (length/width).  Defaults to 20.  Note that\nthis the aspect ratio of the color bar only, not including\nlabels.\n"},
  {(char*)"GetAutomaticLabelFormat", PyvtkPVScalarBarActor_GetAutomaticLabelFormat, METH_VARARGS,
   (char*)"V.GetAutomaticLabelFormat() -> int\nC++: int GetAutomaticLabelFormat()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {(char*)"SetAutomaticLabelFormat", PyvtkPVScalarBarActor_SetAutomaticLabelFormat, METH_VARARGS,
   (char*)"V.SetAutomaticLabelFormat(int)\nC++: void SetAutomaticLabelFormat(int a)\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {(char*)"AutomaticLabelFormatOn", PyvtkPVScalarBarActor_AutomaticLabelFormatOn, METH_VARARGS,
   (char*)"V.AutomaticLabelFormatOn()\nC++: void AutomaticLabelFormatOn()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {(char*)"AutomaticLabelFormatOff", PyvtkPVScalarBarActor_AutomaticLabelFormatOff, METH_VARARGS,
   (char*)"V.AutomaticLabelFormatOff()\nC++: void AutomaticLabelFormatOff()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {(char*)"GetDrawTickMarks", PyvtkPVScalarBarActor_GetDrawTickMarks, METH_VARARGS,
   (char*)"V.GetDrawTickMarks() -> int\nC++: int GetDrawTickMarks()\n\nIf true (the default), tick marks will be drawn.\n"},
  {(char*)"SetDrawTickMarks", PyvtkPVScalarBarActor_SetDrawTickMarks, METH_VARARGS,
   (char*)"V.SetDrawTickMarks(int)\nC++: void SetDrawTickMarks(int a)\n\nIf true (the default), tick marks will be drawn.\n"},
  {(char*)"DrawTickMarksOn", PyvtkPVScalarBarActor_DrawTickMarksOn, METH_VARARGS,
   (char*)"V.DrawTickMarksOn()\nC++: void DrawTickMarksOn()\n\nIf true (the default), tick marks will be drawn.\n"},
  {(char*)"DrawTickMarksOff", PyvtkPVScalarBarActor_DrawTickMarksOff, METH_VARARGS,
   (char*)"V.DrawTickMarksOff()\nC++: void DrawTickMarksOff()\n\nIf true (the default), tick marks will be drawn.\n"},
  {(char*)"GetDrawSubTickMarks", PyvtkPVScalarBarActor_GetDrawSubTickMarks, METH_VARARGS,
   (char*)"V.GetDrawSubTickMarks() -> int\nC++: int GetDrawSubTickMarks()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {(char*)"SetDrawSubTickMarks", PyvtkPVScalarBarActor_SetDrawSubTickMarks, METH_VARARGS,
   (char*)"V.SetDrawSubTickMarks(int)\nC++: void SetDrawSubTickMarks(int a)\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {(char*)"DrawSubTickMarksOn", PyvtkPVScalarBarActor_DrawSubTickMarksOn, METH_VARARGS,
   (char*)"V.DrawSubTickMarksOn()\nC++: void DrawSubTickMarksOn()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {(char*)"DrawSubTickMarksOff", PyvtkPVScalarBarActor_DrawSubTickMarksOff, METH_VARARGS,
   (char*)"V.DrawSubTickMarksOff()\nC++: void DrawSubTickMarksOff()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {(char*)"GetAddRangeLabels", PyvtkPVScalarBarActor_GetAddRangeLabels, METH_VARARGS,
   (char*)"V.GetAddRangeLabels() -> int\nC++: int GetAddRangeLabels()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {(char*)"SetAddRangeLabels", PyvtkPVScalarBarActor_SetAddRangeLabels, METH_VARARGS,
   (char*)"V.SetAddRangeLabels(int)\nC++: void SetAddRangeLabels(int a)\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {(char*)"AddRangeLabelsOn", PyvtkPVScalarBarActor_AddRangeLabelsOn, METH_VARARGS,
   (char*)"V.AddRangeLabelsOn()\nC++: void AddRangeLabelsOn()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {(char*)"AddRangeLabelsOff", PyvtkPVScalarBarActor_AddRangeLabelsOff, METH_VARARGS,
   (char*)"V.AddRangeLabelsOff()\nC++: void AddRangeLabelsOff()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {(char*)"SetAutomaticAnnotations", PyvtkPVScalarBarActor_SetAutomaticAnnotations, METH_VARARGS,
   (char*)"V.SetAutomaticAnnotations(int)\nC++: void SetAutomaticAnnotations(int a)\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {(char*)"GetAutomaticAnnotations", PyvtkPVScalarBarActor_GetAutomaticAnnotations, METH_VARARGS,
   (char*)"V.GetAutomaticAnnotations() -> int\nC++: int GetAutomaticAnnotations()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {(char*)"AutomaticAnnotationsOn", PyvtkPVScalarBarActor_AutomaticAnnotationsOn, METH_VARARGS,
   (char*)"V.AutomaticAnnotationsOn()\nC++: void AutomaticAnnotationsOn()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {(char*)"AutomaticAnnotationsOff", PyvtkPVScalarBarActor_AutomaticAnnotationsOff, METH_VARARGS,
   (char*)"V.AutomaticAnnotationsOff()\nC++: void AutomaticAnnotationsOff()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {(char*)"GetRangeLabelFormat", PyvtkPVScalarBarActor_GetRangeLabelFormat, METH_VARARGS,
   (char*)"V.GetRangeLabelFormat() -> string\nC++: char *GetRangeLabelFormat()\n\nSet the C-style format string for the range labels.\n"},
  {(char*)"SetRangeLabelFormat", PyvtkPVScalarBarActor_SetRangeLabelFormat, METH_VARARGS,
   (char*)"V.SetRangeLabelFormat(string)\nC++: void SetRangeLabelFormat(char *)\n\nSet the C-style format string for the range labels.\n"},
  {(char*)"AddValueLabelIfUnoccluded", PyvtkPVScalarBarActor_AddValueLabelIfUnoccluded, METH_VARARGS,
   (char*)"V.AddValueLabelIfUnoccluded(float, float, float)\nC++: virtual void AddValueLabelIfUnoccluded(double value,\n    double pos, double diff)\n\nAdd value as annotation label on scalar bar at the given position\n"},
  {(char*)"GetTitleJustification", PyvtkPVScalarBarActor_GetTitleJustification, METH_VARARGS,
   (char*)"V.GetTitleJustification() -> int\nC++: int GetTitleJustification()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {(char*)"SetTitleJustification", PyvtkPVScalarBarActor_SetTitleJustification, METH_VARARGS,
   (char*)"V.SetTitleJustification(int)\nC++: void SetTitleJustification(int)\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {(char*)"GetTitleJustificationMinValue", PyvtkPVScalarBarActor_GetTitleJustificationMinValue, METH_VARARGS,
   (char*)"V.GetTitleJustificationMinValue() -> int\nC++: int GetTitleJustificationMinValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {(char*)"GetTitleJustificationMaxValue", PyvtkPVScalarBarActor_GetTitleJustificationMaxValue, METH_VARARGS,
   (char*)"V.GetTitleJustificationMaxValue() -> int\nC++: int GetTitleJustificationMaxValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {(char*)"GetAddRangeAnnotations", PyvtkPVScalarBarActor_GetAddRangeAnnotations, METH_VARARGS,
   (char*)"V.GetAddRangeAnnotations() -> int\nC++: int GetAddRangeAnnotations()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {(char*)"SetAddRangeAnnotations", PyvtkPVScalarBarActor_SetAddRangeAnnotations, METH_VARARGS,
   (char*)"V.SetAddRangeAnnotations(int)\nC++: void SetAddRangeAnnotations(int a)\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {(char*)"AddRangeAnnotationsOn", PyvtkPVScalarBarActor_AddRangeAnnotationsOn, METH_VARARGS,
   (char*)"V.AddRangeAnnotationsOn()\nC++: void AddRangeAnnotationsOn()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {(char*)"AddRangeAnnotationsOff", PyvtkPVScalarBarActor_AddRangeAnnotationsOff, METH_VARARGS,
   (char*)"V.AddRangeAnnotationsOff()\nC++: void AddRangeAnnotationsOff()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPVScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"RenderOverlay", PyvtkPVScalarBarActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVScalarBarActor_StaticNew()
{
  return vtkPVScalarBarActor::New();
}

PyObject *PyVTKClass_vtkPVScalarBarActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVScalarBarActor_StaticNew,
    PyvtkPVScalarBarActor_Methods,
    "vtkPVScalarBarActor", modulename,
    NULL, NULL,
    PyvtkPVScalarBarActor_Doc(),
    PyVTKClass_vtkScalarBarActorNew(modulename));
  return cls;
}

const char **PyvtkPVScalarBarActor_Doc()
{
  static const char *docstring[] = {
    "vtkPVScalarBarActor - A scalar bar with labels of fixed font.\n\n",
    "Superclass: vtkScalarBarActor\n\n",
    "vtkPVScalarBarActor has basically the same functionality as\nvtkScalarBarActor except that the fonts are set to a fixed size and\ntick labels vary in precision before their size is adjusted to meet\ngeometric constraints. These changes make it easier to control in\nParaView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVScalarBarActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVScalarBarActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVScalarBarActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

