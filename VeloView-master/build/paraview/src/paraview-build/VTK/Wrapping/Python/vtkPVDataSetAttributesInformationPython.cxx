// python wrapper for vtkPVDataSetAttributesInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDataSetAttributesInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataSetAttributesInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataSetAttributesInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVDataSetAttributesInformation_Doc();


static PyObject *
PyvtkPVDataSetAttributesInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataSetAttributesInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataSetAttributesInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataSetAttributesInformation::NewInstance());

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
PyvtkPVDataSetAttributesInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataSetAttributesInformation *tempr = vtkPVDataSetAttributesInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromDataSetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromDataSetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
    {
    if (ap.IsBound())
      {
      op->CopyFromDataSetAttributes(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyFromDataSetAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVDataSetAttributesInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataSetAttributesInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->CopyFromFieldData(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyFromFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromGenericAttributesOnPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
    {
    if (ap.IsBound())
      {
      op->CopyFromGenericAttributesOnPoints(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyFromGenericAttributesOnPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromGenericAttributesOnCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
    {
    if (ap.IsBound())
      {
      op->CopyFromGenericAttributesOnCells(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyFromGenericAttributesOnCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVDataSetAttributesInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataSetAttributesInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_AddInformation_Methods[] = {
  {NULL, PyvtkPVDataSetAttributesInformation_AddInformation_s1, METH_VARARGS,
   (char*)"@O *vtkDataSetAttributes"},
  {NULL, PyvtkPVDataSetAttributesInformation_AddInformation_s2, METH_VARARGS,
   (char*)"@O *vtkPVDataSetAttributesInformation"},
  {NULL, PyvtkPVDataSetAttributesInformation_AddInformation_s3, METH_VARARGS,
   (char*)"@O *vtkPVInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataSetAttributesInformation_AddInformation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInformation");
  return NULL;
}



static PyObject *
PyvtkPVDataSetAttributesInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkPVDataSetAttributesInformation::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetMaximumNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTuples() :
      op->vtkPVDataSetAttributesInformation::GetMaximumNumberOfTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetArrayInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetArrayInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_GetArrayInformation_Methods[] = {
  {NULL, PyvtkPVDataSetAttributesInformation_GetArrayInformation_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkPVDataSetAttributesInformation_GetArrayInformation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataSetAttributesInformation_GetArrayInformation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayInformation");
  return NULL;
}



static PyObject *
PyvtkPVDataSetAttributesInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_IsArrayAnAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAnAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsArrayAnAttribute(temp0) :
      op->vtkPVDataSetAttributesInformation::IsArrayAnAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_SetSortArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortArrays(temp0);
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::SetSortArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetSortArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSortArrays() :
      op->vtkPVDataSetAttributesInformation::GetSortArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_SortArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SortArraysOn();
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::SortArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_SortArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SortArraysOff();
      }
    else
      {
      op->vtkPVDataSetAttributesInformation::SortArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataSetAttributesInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataSetAttributesInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataSetAttributesInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataSetAttributesInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromDataSetAttributes", PyvtkPVDataSetAttributesInformation_CopyFromDataSetAttributes, METH_VARARGS,
   (char*)"V.CopyFromDataSetAttributes(vtkDataSetAttributes)\nC++: void CopyFromDataSetAttributes(vtkDataSetAttributes *data)\n\nTransfer information about a single vtk data object into this\nobject.\n"},
  {(char*)"DeepCopy", PyvtkPVDataSetAttributesInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVDataSetAttributesInformation)\nC++: void DeepCopy(vtkPVDataSetAttributesInformation *info)\n\nTransfer information about a single vtk data object into this\nobject.\n"},
  {(char*)"CopyFromFieldData", PyvtkPVDataSetAttributesInformation_CopyFromFieldData, METH_VARARGS,
   (char*)"V.CopyFromFieldData(vtkFieldData)\nC++: void CopyFromFieldData(vtkFieldData *data)\n\n"},
  {(char*)"CopyFromGenericAttributesOnPoints", PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnPoints, METH_VARARGS,
   (char*)"V.CopyFromGenericAttributesOnPoints(vtkGenericAttributeCollection)\nC++: void CopyFromGenericAttributesOnPoints(\n    vtkGenericAttributeCollection *data)\n\n"},
  {(char*)"CopyFromGenericAttributesOnCells", PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnCells, METH_VARARGS,
   (char*)"V.CopyFromGenericAttributesOnCells(vtkGenericAttributeCollection)\nC++: void CopyFromGenericAttributesOnCells(\n    vtkGenericAttributeCollection *data)\n\n"},
  {(char*)"AddInformation", PyvtkPVDataSetAttributesInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkDataSetAttributes)\nC++: void AddInformation(vtkDataSetAttributes *da)\nV.AddInformation(vtkPVDataSetAttributesInformation)\nC++: void AddInformation(vtkPVDataSetAttributesInformation *info)\nV.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *info)\n\nIntersect information of argument with information currently in\nthis object.  Arrays must be in both (same name and number of\ncomponents)to be in final.\n"},
  {(char*)"Initialize", PyvtkPVDataSetAttributesInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRemove all infommation. next add will be like a copy.\n"},
  {(char*)"GetNumberOfArrays", PyvtkPVDataSetAttributesInformation_GetNumberOfArrays, METH_VARARGS,
   (char*)"V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nAccess to information.\n"},
  {(char*)"GetMaximumNumberOfTuples", PyvtkPVDataSetAttributesInformation_GetMaximumNumberOfTuples, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfTuples() -> int\nC++: int GetMaximumNumberOfTuples()\n\n"},
  {(char*)"GetArrayInformation", PyvtkPVDataSetAttributesInformation_GetArrayInformation, METH_VARARGS,
   (char*)"V.GetArrayInformation(int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(int idx)\nV.GetArrayInformation(string) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(const char *name)\n\n"},
  {(char*)"GetAttributeInformation", PyvtkPVDataSetAttributesInformation_GetAttributeInformation, METH_VARARGS,
   (char*)"V.GetAttributeInformation(int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetAttributeInformation(\n    int attributeType)\n\nFor getting default scalars ... (vtkDataSetAttributes::SCALARS).\n"},
  {(char*)"IsArrayAnAttribute", PyvtkPVDataSetAttributesInformation_IsArrayAnAttribute, METH_VARARGS,
   (char*)"V.IsArrayAnAttribute(int) -> int\nC++: int IsArrayAnAttribute(int arrayIndex)\n\nMimicks data set attribute call.  Returns -1 if array (of index)\nis not a standard attribute.  Returns attribute type otherwise.\n"},
  {(char*)"CopyToStream", PyvtkPVDataSetAttributesInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVDataSetAttributesInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"SetSortArrays", PyvtkPVDataSetAttributesInformation_SetSortArrays, METH_VARARGS,
   (char*)"V.SetSortArrays(bool)\nC++: void SetSortArrays(bool a)\n\nSpecify whether or not to sort the arrays. The default is to\nsort.\n"},
  {(char*)"GetSortArrays", PyvtkPVDataSetAttributesInformation_GetSortArrays, METH_VARARGS,
   (char*)"V.GetSortArrays() -> bool\nC++: bool GetSortArrays()\n\nSpecify whether or not to sort the arrays. The default is to\nsort.\n"},
  {(char*)"SortArraysOn", PyvtkPVDataSetAttributesInformation_SortArraysOn, METH_VARARGS,
   (char*)"V.SortArraysOn()\nC++: void SortArraysOn()\n\nSpecify whether or not to sort the arrays. The default is to\nsort.\n"},
  {(char*)"SortArraysOff", PyvtkPVDataSetAttributesInformation_SortArraysOff, METH_VARARGS,
   (char*)"V.SortArraysOff()\nC++: void SortArraysOff()\n\nSpecify whether or not to sort the arrays. The default is to\nsort.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDataSetAttributesInformation_StaticNew()
{
  return vtkPVDataSetAttributesInformation::New();
}

PyObject *PyVTKClass_vtkPVDataSetAttributesInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDataSetAttributesInformation_StaticNew,
    PyvtkPVDataSetAttributesInformation_Methods,
    "vtkPVDataSetAttributesInformation", modulename,
    NULL, NULL,
    PyvtkPVDataSetAttributesInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVDataSetAttributesInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataSetAttributesInformation - List of array info\n\n",
    "Superclass: vtkPVInformation\n\n",
    "Information associated with vtkDataSetAttributes object (i.e point\ndata). This object does not have any user interface.  It is created\nand destroyed on the fly as needed.  It may be possible to add\nfeatures of this object to vtkDataSetAttributes.  That would\neliminate all of the \"Information\" in ParaView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataSetAttributesInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataSetAttributesInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataSetAttributesInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

