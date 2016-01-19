// python wrapper for vtkDataLabelRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataLabelRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataLabelRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataLabelRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkDataLabelRepresentation_Doc();


static PyObject *
PyvtkDataLabelRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataLabelRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataLabelRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataLabelRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataLabelRepresentation::NewInstance());

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
PyvtkDataLabelRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataLabelRepresentation *tempr = vtkDataLabelRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkDataLabelRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->vtkDataLabelRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkDataLabelRepresentation::GetVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelVisibility(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->vtkDataLabelRepresentation::SetPointFieldDataArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelMode(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetPointLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelOpacity(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelFontFamily(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelBold(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelItalic(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelShadow(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelJustification(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelFontSize(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointLabelFormat(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPointLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelVisibility(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->vtkDataLabelRepresentation::SetCellFieldDataArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelMode(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetCellLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelOpacity(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelFontFamily(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelBold(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelItalic(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelShadow(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelJustification(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelFontSize(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLabelFormat(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetCellLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUserTransform(temp0);
      }
    else
      {
      op->vtkDataLabelRepresentation::SetUserTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkDataLabelRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataLabelRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkDataLabelRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataLabelRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataLabelRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataLabelRepresentation\nC++: vtkDataLabelRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataLabelRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataLabelRepresentation\nC++: vtkDataLabelRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MarkModified", PyvtkDataLabelRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {(char*)"SetVisibility", PyvtkDataLabelRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"GetVisibility", PyvtkDataLabelRepresentation_GetVisibility, METH_VARARGS,
   (char*)"V.GetVisibility() -> bool\nC++: virtual bool GetVisibility()\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"SetPointLabelVisibility", PyvtkDataLabelRepresentation_SetPointLabelVisibility, METH_VARARGS,
   (char*)"V.SetPointLabelVisibility(int)\nC++: void SetPointLabelVisibility(int)\n\n"},
  {(char*)"SetPointFieldDataArrayName", PyvtkDataLabelRepresentation_SetPointFieldDataArrayName, METH_VARARGS,
   (char*)"V.SetPointFieldDataArrayName(string)\nC++: void SetPointFieldDataArrayName(const char *)\n\n"},
  {(char*)"SetPointLabelMode", PyvtkDataLabelRepresentation_SetPointLabelMode, METH_VARARGS,
   (char*)"V.SetPointLabelMode(int)\nC++: void SetPointLabelMode(int)\n\n"},
  {(char*)"SetPointLabelColor", PyvtkDataLabelRepresentation_SetPointLabelColor, METH_VARARGS,
   (char*)"V.SetPointLabelColor(float, float, float)\nC++: void SetPointLabelColor(double r, double g, double b)\n\n"},
  {(char*)"SetPointLabelOpacity", PyvtkDataLabelRepresentation_SetPointLabelOpacity, METH_VARARGS,
   (char*)"V.SetPointLabelOpacity(float)\nC++: void SetPointLabelOpacity(double)\n\n"},
  {(char*)"SetPointLabelFontFamily", PyvtkDataLabelRepresentation_SetPointLabelFontFamily, METH_VARARGS,
   (char*)"V.SetPointLabelFontFamily(int)\nC++: void SetPointLabelFontFamily(int)\n\n"},
  {(char*)"SetPointLabelBold", PyvtkDataLabelRepresentation_SetPointLabelBold, METH_VARARGS,
   (char*)"V.SetPointLabelBold(int)\nC++: void SetPointLabelBold(int)\n\n"},
  {(char*)"SetPointLabelItalic", PyvtkDataLabelRepresentation_SetPointLabelItalic, METH_VARARGS,
   (char*)"V.SetPointLabelItalic(int)\nC++: void SetPointLabelItalic(int)\n\n"},
  {(char*)"SetPointLabelShadow", PyvtkDataLabelRepresentation_SetPointLabelShadow, METH_VARARGS,
   (char*)"V.SetPointLabelShadow(int)\nC++: void SetPointLabelShadow(int)\n\n"},
  {(char*)"SetPointLabelJustification", PyvtkDataLabelRepresentation_SetPointLabelJustification, METH_VARARGS,
   (char*)"V.SetPointLabelJustification(int)\nC++: void SetPointLabelJustification(int)\n\n"},
  {(char*)"SetPointLabelFontSize", PyvtkDataLabelRepresentation_SetPointLabelFontSize, METH_VARARGS,
   (char*)"V.SetPointLabelFontSize(int)\nC++: void SetPointLabelFontSize(int)\n\n"},
  {(char*)"SetPointLabelFormat", PyvtkDataLabelRepresentation_SetPointLabelFormat, METH_VARARGS,
   (char*)"V.SetPointLabelFormat(string)\nC++: void SetPointLabelFormat(const char *)\n\n"},
  {(char*)"SetCellLabelVisibility", PyvtkDataLabelRepresentation_SetCellLabelVisibility, METH_VARARGS,
   (char*)"V.SetCellLabelVisibility(int)\nC++: void SetCellLabelVisibility(int)\n\n"},
  {(char*)"SetCellFieldDataArrayName", PyvtkDataLabelRepresentation_SetCellFieldDataArrayName, METH_VARARGS,
   (char*)"V.SetCellFieldDataArrayName(string)\nC++: void SetCellFieldDataArrayName(const char *)\n\n"},
  {(char*)"SetCellLabelMode", PyvtkDataLabelRepresentation_SetCellLabelMode, METH_VARARGS,
   (char*)"V.SetCellLabelMode(int)\nC++: void SetCellLabelMode(int)\n\n"},
  {(char*)"SetCellLabelColor", PyvtkDataLabelRepresentation_SetCellLabelColor, METH_VARARGS,
   (char*)"V.SetCellLabelColor(float, float, float)\nC++: void SetCellLabelColor(double r, double g, double b)\n\n"},
  {(char*)"SetCellLabelOpacity", PyvtkDataLabelRepresentation_SetCellLabelOpacity, METH_VARARGS,
   (char*)"V.SetCellLabelOpacity(float)\nC++: void SetCellLabelOpacity(double)\n\n"},
  {(char*)"SetCellLabelFontFamily", PyvtkDataLabelRepresentation_SetCellLabelFontFamily, METH_VARARGS,
   (char*)"V.SetCellLabelFontFamily(int)\nC++: void SetCellLabelFontFamily(int)\n\n"},
  {(char*)"SetCellLabelBold", PyvtkDataLabelRepresentation_SetCellLabelBold, METH_VARARGS,
   (char*)"V.SetCellLabelBold(int)\nC++: void SetCellLabelBold(int)\n\n"},
  {(char*)"SetCellLabelItalic", PyvtkDataLabelRepresentation_SetCellLabelItalic, METH_VARARGS,
   (char*)"V.SetCellLabelItalic(int)\nC++: void SetCellLabelItalic(int)\n\n"},
  {(char*)"SetCellLabelShadow", PyvtkDataLabelRepresentation_SetCellLabelShadow, METH_VARARGS,
   (char*)"V.SetCellLabelShadow(int)\nC++: void SetCellLabelShadow(int)\n\n"},
  {(char*)"SetCellLabelJustification", PyvtkDataLabelRepresentation_SetCellLabelJustification, METH_VARARGS,
   (char*)"V.SetCellLabelJustification(int)\nC++: void SetCellLabelJustification(int)\n\n"},
  {(char*)"SetCellLabelFontSize", PyvtkDataLabelRepresentation_SetCellLabelFontSize, METH_VARARGS,
   (char*)"V.SetCellLabelFontSize(int)\nC++: void SetCellLabelFontSize(int)\n\n"},
  {(char*)"SetCellLabelFormat", PyvtkDataLabelRepresentation_SetCellLabelFormat, METH_VARARGS,
   (char*)"V.SetCellLabelFormat(string)\nC++: void SetCellLabelFormat(const char *)\n\n"},
  {(char*)"SetOrientation", PyvtkDataLabelRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\nUsed to build the internal transform.\n"},
  {(char*)"SetOrigin", PyvtkDataLabelRepresentation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\nUsed to build the internal transform.\n"},
  {(char*)"SetPosition", PyvtkDataLabelRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\nUsed to build the internal transform.\n"},
  {(char*)"SetScale", PyvtkDataLabelRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\nUsed to build the internal transform.\n"},
  {(char*)"SetUserTransform", PyvtkDataLabelRepresentation_SetUserTransform, METH_VARARGS,
   (char*)"V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: void SetUserTransform(const double[16])\n\nUsed to build the internal transform.\n"},
  {(char*)"ProcessViewRequest", PyvtkDataLabelRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataLabelRepresentation_StaticNew()
{
  return vtkDataLabelRepresentation::New();
}

PyObject *PyVTKClass_vtkDataLabelRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataLabelRepresentation_StaticNew,
    PyvtkDataLabelRepresentation_Methods,
    "vtkDataLabelRepresentation", modulename,
    NULL, NULL,
    PyvtkDataLabelRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkDataLabelRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkDataLabelRepresentation - representation for showing cell and point\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkDataLabelRepresentation is a representation for showing cell\nand/or point labels. This representation relies on all the data being\ncloned on all nodes hence beware of using this representation for\nlarge datasets.\n\nCaveat:\n\nNote that vtkDataLabelRepresentation adds the label props to the\nnon-composited renderer.\n\nThanks:\n\nThe addition of a transformation matrix was supported by CEA/DIF\nCommissar",
    "iat a l'Energie Atomique, Centre DAM Ile-De-France, Arpajon,\nFrance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataLabelRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataLabelRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataLabelRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

