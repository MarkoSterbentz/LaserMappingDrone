// python wrapper for vtkPointSetToLabelHierarchy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointSetToLabelHierarchy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointSetToLabelHierarchy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointSetToLabelHierarchyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLabelHierarchyAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabelHierarchyAlgorithmNew
#endif

static const char **PyvtkPointSetToLabelHierarchy_Doc();


static PyObject *
PyvtkPointSetToLabelHierarchy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointSetToLabelHierarchy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetToLabelHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointSetToLabelHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetToLabelHierarchy::NewInstance());

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
PyvtkPointSetToLabelHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointSetToLabelHierarchy *tempr = vtkPointSetToLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetLabelCount(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetTargetLabelCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTargetLabelCount() :
      op->vtkPointSetToLabelHierarchy::GetTargetLabelCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDepth(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetMaximumDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDepth() :
      op->vtkPointSetToLabelHierarchy::GetMaximumDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseUnicodeStrings(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseUnicodeStrings() :
      op->vtkPointSetToLabelHierarchy::GetUseUnicodeStrings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelArrayName() :
      op->vtkPointSetToLabelHierarchy::GetLabelArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSizeArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSizeArrayName() :
      op->vtkPointSetToLabelHierarchy::GetSizeArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriorityArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPriorityArrayName() :
      op->vtkPointSetToLabelHierarchy::GetPriorityArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconIndexArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetIconIndexArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetIconIndexArrayName() :
      op->vtkPointSetToLabelHierarchy::GetIconIndexArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetOrientationArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationArrayName() :
      op->vtkPointSetToLabelHierarchy::GetOrientationArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundedSizeArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetBoundedSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBoundedSizeArrayName() :
      op->vtkPointSetToLabelHierarchy::GetBoundedSizeArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkPointSetToLabelHierarchy::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetToLabelHierarchy_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetToLabelHierarchy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetToLabelHierarchy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetToLabelHierarchy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointSetToLabelHierarchy\nC++: vtkPointSetToLabelHierarchy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSetToLabelHierarchy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSetToLabelHierarchy\nC++: vtkPointSetToLabelHierarchy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetLabelCount", PyvtkPointSetToLabelHierarchy_SetTargetLabelCount, METH_VARARGS,
   (char*)"V.SetTargetLabelCount(int)\nC++: void SetTargetLabelCount(int a)\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {(char*)"GetTargetLabelCount", PyvtkPointSetToLabelHierarchy_GetTargetLabelCount, METH_VARARGS,
   (char*)"V.GetTargetLabelCount() -> int\nC++: int GetTargetLabelCount()\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {(char*)"SetMaximumDepth", PyvtkPointSetToLabelHierarchy_SetMaximumDepth, METH_VARARGS,
   (char*)"V.SetMaximumDepth(int)\nC++: void SetMaximumDepth(int a)\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {(char*)"GetMaximumDepth", PyvtkPointSetToLabelHierarchy_GetMaximumDepth, METH_VARARGS,
   (char*)"V.GetMaximumDepth() -> int\nC++: int GetMaximumDepth()\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nWhether to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nWhether to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nWhether to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nWhether to use unicode strings.\n"},
  {(char*)"SetLabelArrayName", PyvtkPointSetToLabelHierarchy_SetLabelArrayName, METH_VARARGS,
   (char*)"V.SetLabelArrayName(string)\nC++: virtual void SetLabelArrayName(const char *name)\n\nSet/get the label array name.\n"},
  {(char*)"GetLabelArrayName", PyvtkPointSetToLabelHierarchy_GetLabelArrayName, METH_VARARGS,
   (char*)"V.GetLabelArrayName() -> string\nC++: virtual const char *GetLabelArrayName()\n\nSet/get the label array name.\n"},
  {(char*)"SetSizeArrayName", PyvtkPointSetToLabelHierarchy_SetSizeArrayName, METH_VARARGS,
   (char*)"V.SetSizeArrayName(string)\nC++: virtual void SetSizeArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {(char*)"GetSizeArrayName", PyvtkPointSetToLabelHierarchy_GetSizeArrayName, METH_VARARGS,
   (char*)"V.GetSizeArrayName() -> string\nC++: virtual const char *GetSizeArrayName()\n\nSet/get the priority array name.\n"},
  {(char*)"SetPriorityArrayName", PyvtkPointSetToLabelHierarchy_SetPriorityArrayName, METH_VARARGS,
   (char*)"V.SetPriorityArrayName(string)\nC++: virtual void SetPriorityArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {(char*)"GetPriorityArrayName", PyvtkPointSetToLabelHierarchy_GetPriorityArrayName, METH_VARARGS,
   (char*)"V.GetPriorityArrayName() -> string\nC++: virtual const char *GetPriorityArrayName()\n\nSet/get the priority array name.\n"},
  {(char*)"SetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName, METH_VARARGS,
   (char*)"V.SetIconIndexArrayName(string)\nC++: virtual void SetIconIndexArrayName(const char *name)\n\nSet/get the icon index array name.\n"},
  {(char*)"GetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName, METH_VARARGS,
   (char*)"V.GetIconIndexArrayName() -> string\nC++: virtual const char *GetIconIndexArrayName()\n\nSet/get the icon index array name.\n"},
  {(char*)"SetOrientationArrayName", PyvtkPointSetToLabelHierarchy_SetOrientationArrayName, METH_VARARGS,
   (char*)"V.SetOrientationArrayName(string)\nC++: virtual void SetOrientationArrayName(const char *name)\n\nSet/get the text orientation array name.\n"},
  {(char*)"GetOrientationArrayName", PyvtkPointSetToLabelHierarchy_GetOrientationArrayName, METH_VARARGS,
   (char*)"V.GetOrientationArrayName() -> string\nC++: virtual const char *GetOrientationArrayName()\n\nSet/get the text orientation array name.\n"},
  {(char*)"SetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName, METH_VARARGS,
   (char*)"V.SetBoundedSizeArrayName(string)\nC++: virtual void SetBoundedSizeArrayName(const char *name)\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {(char*)"GetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName, METH_VARARGS,
   (char*)"V.GetBoundedSizeArrayName() -> string\nC++: virtual const char *GetBoundedSizeArrayName()\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {(char*)"SetTextProperty", PyvtkPointSetToLabelHierarchy_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nSet/get the text property assigned to the hierarchy.\n"},
  {(char*)"GetTextProperty", PyvtkPointSetToLabelHierarchy_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/get the text property assigned to the hierarchy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSetToLabelHierarchy_StaticNew()
{
  return vtkPointSetToLabelHierarchy::New();
}

PyObject *PyVTKClass_vtkPointSetToLabelHierarchyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSetToLabelHierarchy_StaticNew,
    PyvtkPointSetToLabelHierarchy_Methods,
    "vtkPointSetToLabelHierarchy", modulename,
    NULL, NULL,
    PyvtkPointSetToLabelHierarchy_Doc(),
    PyVTKClass_vtkLabelHierarchyAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointSetToLabelHierarchy_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetToLabelHierarchy - build a label hierarchy for a graph or\npoint set.\n\n",
    "Superclass: vtkLabelHierarchyAlgorithm\n\n",
    "Every point in the input vtkPoints object is taken to be an anchor\npoint for a label. Statistics on the input points are used to\nsubdivide an octree referencing the points until the points each\noctree node contains have a variance close to the node size and a\nlimited population (< 100).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetToLabelHierarchy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetToLabelHierarchyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetToLabelHierarchy", o) != 0)
    {
    Py_DECREF(o);
    }

}

