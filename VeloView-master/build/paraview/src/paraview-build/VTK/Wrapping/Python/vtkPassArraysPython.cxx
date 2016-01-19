// python wrapper for vtkPassArrays
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPassArrays.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPassArrays(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPassArraysNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPassArrays_Doc();


static PyObject *
PyvtkPassArrays_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPassArrays::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPassArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPassArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPassArrays::NewInstance());

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
PyvtkPassArrays_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPassArrays *tempr = vtkPassArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddArray(temp0, temp1);
      }
    else
      {
      op->vtkPassArrays::AddArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddPointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddPointDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::AddPointDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCellDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::AddCellDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFieldDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::AddFieldDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveArray(temp0, temp1);
      }
    else
      {
      op->vtkPassArrays::RemoveArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemovePointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemovePointDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::RemovePointDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveCellDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::RemoveCellDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveFieldDataArray(temp0);
      }
    else
      {
      op->vtkPassArrays::RemoveFieldDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearArrays();
      }
    else
      {
      op->vtkPassArrays::ClearArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearPointDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPointDataArrays();
      }
    else
      {
      op->vtkPassArrays::ClearPointDataArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearCellDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCellDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCellDataArrays();
      }
    else
      {
      op->vtkPassArrays::ClearCellDataArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearFieldDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFieldDataArrays();
      }
    else
      {
      op->vtkPassArrays::ClearFieldDataArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_SetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoveArrays(temp0);
      }
    else
      {
      op->vtkPassArrays::SetRemoveArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_GetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveArrays() :
      op->vtkPassArrays::GetRemoveArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveArraysOn();
      }
    else
      {
      op->vtkPassArrays::RemoveArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveArraysOff();
      }
    else
      {
      op->vtkPassArrays::RemoveArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_SetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFieldTypes(temp0);
      }
    else
      {
      op->vtkPassArrays::SetUseFieldTypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_GetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseFieldTypes() :
      op->vtkPassArrays::GetUseFieldTypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFieldTypesOn();
      }
    else
      {
      op->vtkPassArrays::UseFieldTypesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFieldTypesOff();
      }
    else
      {
      op->vtkPassArrays::UseFieldTypesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFieldType(temp0);
      }
    else
      {
      op->vtkPassArrays::AddFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFieldTypes();
      }
    else
      {
      op->vtkPassArrays::ClearFieldTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPassArrays_Methods[] = {
  {(char*)"GetClassName", PyvtkPassArrays_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassArrays_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassArrays_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPassArrays\nC++: vtkPassArrays *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassArrays_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassArrays\nC++: vtkPassArrays *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddArray", PyvtkPassArrays_AddArray, METH_VARARGS,
   (char*)"V.AddArray(int, string)\nC++: virtual void AddArray(int fieldType, const char *name)\n\nAdds an array to pass through. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration.\n"},
  {(char*)"AddPointDataArray", PyvtkPassArrays_AddPointDataArray, METH_VARARGS,
   (char*)"V.AddPointDataArray(string)\nC++: virtual void AddPointDataArray(const char *name)\n\n"},
  {(char*)"AddCellDataArray", PyvtkPassArrays_AddCellDataArray, METH_VARARGS,
   (char*)"V.AddCellDataArray(string)\nC++: virtual void AddCellDataArray(const char *name)\n\n"},
  {(char*)"AddFieldDataArray", PyvtkPassArrays_AddFieldDataArray, METH_VARARGS,
   (char*)"V.AddFieldDataArray(string)\nC++: virtual void AddFieldDataArray(const char *name)\n\n"},
  {(char*)"RemoveArray", PyvtkPassArrays_RemoveArray, METH_VARARGS,
   (char*)"V.RemoveArray(int, string)\nC++: virtual void RemoveArray(int fieldType, const char *name)\n\n"},
  {(char*)"RemovePointDataArray", PyvtkPassArrays_RemovePointDataArray, METH_VARARGS,
   (char*)"V.RemovePointDataArray(string)\nC++: virtual void RemovePointDataArray(const char *name)\n\n"},
  {(char*)"RemoveCellDataArray", PyvtkPassArrays_RemoveCellDataArray, METH_VARARGS,
   (char*)"V.RemoveCellDataArray(string)\nC++: virtual void RemoveCellDataArray(const char *name)\n\n"},
  {(char*)"RemoveFieldDataArray", PyvtkPassArrays_RemoveFieldDataArray, METH_VARARGS,
   (char*)"V.RemoveFieldDataArray(string)\nC++: virtual void RemoveFieldDataArray(const char *name)\n\n"},
  {(char*)"ClearArrays", PyvtkPassArrays_ClearArrays, METH_VARARGS,
   (char*)"V.ClearArrays()\nC++: virtual void ClearArrays()\n\nClear all arrays to pass through.\n"},
  {(char*)"ClearPointDataArrays", PyvtkPassArrays_ClearPointDataArrays, METH_VARARGS,
   (char*)"V.ClearPointDataArrays()\nC++: virtual void ClearPointDataArrays()\n\nClear all arrays to pass through.\n"},
  {(char*)"ClearCellDataArrays", PyvtkPassArrays_ClearCellDataArrays, METH_VARARGS,
   (char*)"V.ClearCellDataArrays()\nC++: virtual void ClearCellDataArrays()\n\nClear all arrays to pass through.\n"},
  {(char*)"ClearFieldDataArrays", PyvtkPassArrays_ClearFieldDataArrays, METH_VARARGS,
   (char*)"V.ClearFieldDataArrays()\nC++: virtual void ClearFieldDataArrays()\n\nClear all arrays to pass through.\n"},
  {(char*)"SetRemoveArrays", PyvtkPassArrays_SetRemoveArrays, METH_VARARGS,
   (char*)"V.SetRemoveArrays(bool)\nC++: void SetRemoveArrays(bool a)\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"GetRemoveArrays", PyvtkPassArrays_GetRemoveArrays, METH_VARARGS,
   (char*)"V.GetRemoveArrays() -> bool\nC++: bool GetRemoveArrays()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"RemoveArraysOn", PyvtkPassArrays_RemoveArraysOn, METH_VARARGS,
   (char*)"V.RemoveArraysOn()\nC++: void RemoveArraysOn()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"RemoveArraysOff", PyvtkPassArrays_RemoveArraysOff, METH_VARARGS,
   (char*)"V.RemoveArraysOff()\nC++: void RemoveArraysOff()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"SetUseFieldTypes", PyvtkPassArrays_SetUseFieldTypes, METH_VARARGS,
   (char*)"V.SetUseFieldTypes(bool)\nC++: void SetUseFieldTypes(bool a)\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"GetUseFieldTypes", PyvtkPassArrays_GetUseFieldTypes, METH_VARARGS,
   (char*)"V.GetUseFieldTypes() -> bool\nC++: bool GetUseFieldTypes()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"UseFieldTypesOn", PyvtkPassArrays_UseFieldTypesOn, METH_VARARGS,
   (char*)"V.UseFieldTypesOn()\nC++: void UseFieldTypesOn()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"UseFieldTypesOff", PyvtkPassArrays_UseFieldTypesOff, METH_VARARGS,
   (char*)"V.UseFieldTypesOff()\nC++: void UseFieldTypesOff()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"AddFieldType", PyvtkPassArrays_AddFieldType, METH_VARARGS,
   (char*)"V.AddFieldType(int)\nC++: virtual void AddFieldType(int fieldType)\n\nAdd a field type to process. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration. NOTE: These are only used if UseFieldType is turned\non.\n"},
  {(char*)"ClearFieldTypes", PyvtkPassArrays_ClearFieldTypes, METH_VARARGS,
   (char*)"V.ClearFieldTypes()\nC++: virtual void ClearFieldTypes()\n\nClear all field types to process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassArrays_StaticNew()
{
  return vtkPassArrays::New();
}

PyObject *PyVTKClass_vtkPassArraysNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassArrays_StaticNew,
    PyvtkPassArrays_Methods,
    "vtkPassArrays", modulename,
    NULL, NULL,
    PyvtkPassArrays_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPassArrays_Doc()
{
  static const char *docstring[] = {
    "vtkPassArrays - Passes a subset of arrays to the output\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "This filter preserves all the topology of the input, but only a\nsubset of arrays are passed to the output. Add an array to be passed\nto the output data object with AddArray(). If RemoveArrays is on, the\nspecified arrays will be the ones that are removed instead of the\nones that are kept.\n\nArrays with special attributes (scalars, pedigree ids, etc.) will\nretain those attributes in the output.\n\nBy d",
    "efault, only those field types with at least one array specified\nthrough AddArray will be processed. If instead UseFieldTypes is\nturned on, you explicitly set which field types to process with\nAddFieldType.\n\nExample 1:\n\npassArray->AddArray(vtkDataObject::POINT, \"velocity\"); \n\nThe output will have only that one array \"velocity\" in the point\ndata, but cell and field data will be untouched.\n\nExample ",
    "2:\n\npassArray->AddArray(vtkDataObject::POINT, \"velocity\");\npassArray->UseFieldTypesOn();\npassArray->AddFieldType(vtkDataObject::POINT);\npassArray->AddFieldType(vtkDataObject::CELL); \n\nThe point data would still contain the single array, but the cell\ndata would be cleared since you did not specify any arrays to pass.\nField data would still be untouched.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassArrays(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassArraysNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassArrays", o) != 0)
    {
    Py_DECREF(o);
    }

}

