// python wrapper for vtkCPInputDataDescription
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCPInputDataDescription.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPInputDataDescription(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPInputDataDescriptionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCPInputDataDescription_Doc();


static PyObject *
PyvtkCPInputDataDescription_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPInputDataDescription::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPInputDataDescription::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPInputDataDescription::NewInstance());

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
PyvtkCPInputDataDescription_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPInputDataDescription *tempr = vtkCPInputDataDescription::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkCPInputDataDescription::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AddPointField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddPointField(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::AddPointField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AddCellField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCellField(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::AddCellField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkCPInputDataDescription::GetNumberOfFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldName(temp0) :
      op->vtkCPInputDataDescription::GetFieldName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_IsFieldNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFieldNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsFieldNeeded(temp0) :
      op->vtkCPInputDataDescription::IsFieldNeeded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_IsFieldPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFieldPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsFieldPointData(temp0) :
      op->vtkCPInputDataDescription::IsFieldPointData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllFields(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::SetAllFields(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAllFields() :
      op->vtkCPInputDataDescription::GetAllFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllFieldsOn();
      }
    else
      {
      op->vtkCPInputDataDescription::AllFieldsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllFieldsOff();
      }
    else
      {
      op->vtkCPInputDataDescription::AllFieldsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetGenerateMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateMesh(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::SetGenerateMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetGenerateMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateMesh() :
      op->vtkCPInputDataDescription::GetGenerateMesh());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GenerateMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateMeshOn();
      }
    else
      {
      op->vtkCPInputDataDescription::GenerateMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GenerateMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateMeshOff();
      }
    else
      {
      op->vtkCPInputDataDescription::GenerateMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetGrid(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::SetGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkCPInputDataDescription::GetGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetIfGridIsNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfGridIsNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIfGridIsNecessary() :
      op->vtkCPInputDataDescription::GetIfGridIsNecessary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCPInputDataDescription::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkCPInputDataDescription::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCPInputDataDescription_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkCPInputDataDescription_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkCPInputDataDescription_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkCPInputDataDescription::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPInputDataDescription_Methods[] = {
  {(char*)"GetClassName", PyvtkCPInputDataDescription_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPInputDataDescription_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPInputDataDescription_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPInputDataDescription_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Reset", PyvtkCPInputDataDescription_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the names of the fields that are needed.\n"},
  {(char*)"AddPointField", PyvtkCPInputDataDescription_AddPointField, METH_VARARGS,
   (char*)"V.AddPointField(string)\nC++: void AddPointField(const char *FieldName)\n\nAdd in a name of a point field .\n"},
  {(char*)"AddCellField", PyvtkCPInputDataDescription_AddCellField, METH_VARARGS,
   (char*)"V.AddCellField(string)\nC++: void AddCellField(const char *FieldName)\n\nAdd in a name of a cell field.\n"},
  {(char*)"GetNumberOfFields", PyvtkCPInputDataDescription_GetNumberOfFields, METH_VARARGS,
   (char*)"V.GetNumberOfFields() -> int\nC++: unsigned int GetNumberOfFields()\n\nGet the number of fields currently specified in this object.\n"},
  {(char*)"GetFieldName", PyvtkCPInputDataDescription_GetFieldName, METH_VARARGS,
   (char*)"V.GetFieldName(int) -> string\nC++: const char *GetFieldName(unsigned int FieldIndex)\n\nGet the name of the field given its current index.\n"},
  {(char*)"IsFieldNeeded", PyvtkCPInputDataDescription_IsFieldNeeded, METH_VARARGS,
   (char*)"V.IsFieldNeeded(string) -> bool\nC++: bool IsFieldNeeded(const char *FieldName)\n\nReturn true if a field with FieldName is needed.\n"},
  {(char*)"IsFieldPointData", PyvtkCPInputDataDescription_IsFieldPointData, METH_VARARGS,
   (char*)"V.IsFieldPointData(string) -> bool\nC++: bool IsFieldPointData(const char *FieldName)\n\nReturn true if the field associated with FieldName is point data\nand false if it is cell data.\n"},
  {(char*)"SetAllFields", PyvtkCPInputDataDescription_SetAllFields, METH_VARARGS,
   (char*)"V.SetAllFields(bool)\nC++: void SetAllFields(bool a)\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {(char*)"GetAllFields", PyvtkCPInputDataDescription_GetAllFields, METH_VARARGS,
   (char*)"V.GetAllFields() -> bool\nC++: bool GetAllFields()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {(char*)"AllFieldsOn", PyvtkCPInputDataDescription_AllFieldsOn, METH_VARARGS,
   (char*)"V.AllFieldsOn()\nC++: void AllFieldsOn()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {(char*)"AllFieldsOff", PyvtkCPInputDataDescription_AllFieldsOff, METH_VARARGS,
   (char*)"V.AllFieldsOff()\nC++: void AllFieldsOff()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {(char*)"SetGenerateMesh", PyvtkCPInputDataDescription_SetGenerateMesh, METH_VARARGS,
   (char*)"V.SetGenerateMesh(bool)\nC++: void SetGenerateMesh(bool a)\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {(char*)"GetGenerateMesh", PyvtkCPInputDataDescription_GetGenerateMesh, METH_VARARGS,
   (char*)"V.GetGenerateMesh() -> bool\nC++: bool GetGenerateMesh()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {(char*)"GenerateMeshOn", PyvtkCPInputDataDescription_GenerateMeshOn, METH_VARARGS,
   (char*)"V.GenerateMeshOn()\nC++: void GenerateMeshOn()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {(char*)"GenerateMeshOff", PyvtkCPInputDataDescription_GenerateMeshOff, METH_VARARGS,
   (char*)"V.GenerateMeshOff()\nC++: void GenerateMeshOff()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {(char*)"SetGrid", PyvtkCPInputDataDescription_SetGrid, METH_VARARGS,
   (char*)"V.SetGrid(vtkDataObject)\nC++: void SetGrid(vtkDataObject *grid)\n\nSet the grid input for coprocessing.  The grid should have all of\nthe point data and cell data properly set.\n"},
  {(char*)"GetGrid", PyvtkCPInputDataDescription_GetGrid, METH_VARARGS,
   (char*)"V.GetGrid() -> vtkDataObject\nC++: vtkDataObject *GetGrid()\n\nGet the grid for coprocessing.\n"},
  {(char*)"GetIfGridIsNecessary", PyvtkCPInputDataDescription_GetIfGridIsNecessary, METH_VARARGS,
   (char*)"V.GetIfGridIsNecessary() -> bool\nC++: bool GetIfGridIsNecessary()\n\nReturns true if the grid is necessary..\n"},
  {(char*)"SetWholeExtent", PyvtkCPInputDataDescription_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkCPInputDataDescription_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPInputDataDescription_StaticNew()
{
  return vtkCPInputDataDescription::New();
}

PyObject *PyVTKClass_vtkCPInputDataDescriptionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPInputDataDescription_StaticNew,
    PyvtkCPInputDataDescription_Methods,
    "vtkCPInputDataDescription", modulename,
    NULL, NULL,
    PyvtkCPInputDataDescription_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCPInputDataDescription_Doc()
{
  static const char *docstring[] = {
    "vtkCPInputDataDescription - no description provided.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPInputDataDescription(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPInputDataDescriptionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPInputDataDescription", o) != 0)
    {
    Py_DECREF(o);
    }

}

