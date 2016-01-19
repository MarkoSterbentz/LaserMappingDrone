// python wrapper for vtkCellArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCellArray_Doc();


static PyObject *
PyvtkCellArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellArray::NewInstance());

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
PyvtkCellArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellArray *tempr = vtkCellArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCellArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellArray::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_SetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCells(temp0);
      }
    else
      {
      op->vtkCellArray::SetNumberOfCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_EstimateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstimateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->EstimateSize(temp0, temp1) :
      op->vtkCellArray::EstimateSize(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCellArray::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    int tempr = (ap.IsBound() ?
      op->GetNextCell(temp0) :
      op->vtkCellArray::GetNextCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkCellArray::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfConnectivityEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfConnectivityEntries() :
      op->vtkCellArray::GetNumberOfConnectivityEntries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkCellArray::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellArray::InsertNextCell(temp0, temp1));

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
PyvtkCellArray_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellArray_InsertNextCell_Methods[] = {
  {NULL, PyvtkCellArray_InsertNextCell_s1, METH_VARARGS,
   (char*)"@O *vtkCell"},
  {NULL, PyvtkCellArray_InsertNextCell_s3, METH_VARARGS,
   (char*)"@O *vtkIdList"},
  {NULL, PyvtkCellArray_InsertNextCell_s4, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCellArray_InsertNextCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellArray_InsertNextCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCellArray_InsertNextCell_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return NULL;
}



static PyObject *
PyvtkCellArray_InsertCellPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InsertCellPoint(temp0);
      }
    else
      {
      op->vtkCellArray::InsertCellPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_UpdateCellCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCellCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateCellCount(temp0);
      }
    else
      {
      op->vtkCellArray::UpdateCellCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetInsertLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsertLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetInsertLocation(temp0) :
      op->vtkCellArray::GetInsertLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetTraversalLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTraversalLocation() :
      op->vtkCellArray::GetTraversalLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTraversalLocation(temp0) :
      op->vtkCellArray::GetTraversalLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCellArray_GetTraversalLocation_s1(self, args);
    case 1:
      return PyvtkCellArray_GetTraversalLocation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTraversalLocation");
  return NULL;
}



static PyObject *
PyvtkCellArray_SetTraversalLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTraversalLocation(temp0);
      }
    else
      {
      op->vtkCellArray::SetTraversalLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReverseCell(temp0);
      }
    else
      {
      op->vtkCellArray::ReverseCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->ReplaceCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCellArray::ReplaceCell(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCellArray::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetPointer() :
      op->vtkCellArray::GetPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkCellArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_SetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1);
      }
    else
      {
      op->vtkCellArray::SetCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCellArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkCellArray::GetData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkCellArray::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkCellArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellArray_Methods[] = {
  {(char*)"GetClassName", PyvtkCellArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellArray\nC++: vtkCellArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellArray\nC++: vtkCellArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkCellArray_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(const vtkIdType sz, const int ext=1000)\n\nAllocate memory and set the size to extend by.\n"},
  {(char*)"Initialize", PyvtkCellArray_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nFree any memory and reset to an empty state.\n"},
  {(char*)"GetNumberOfCells", PyvtkCellArray_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nGet the number of cells in the array.\n"},
  {(char*)"SetNumberOfCells", PyvtkCellArray_SetNumberOfCells, METH_VARARGS,
   (char*)"V.SetNumberOfCells(int)\nC++: void SetNumberOfCells(vtkIdType a)\n\nSet the number of cells in the array. DO NOT do any kind of\nallocation, advanced use only.\n"},
  {(char*)"EstimateSize", PyvtkCellArray_EstimateSize, METH_VARARGS,
   (char*)"V.EstimateSize(int, int) -> int\nC++: vtkIdType EstimateSize(vtkIdType numCells, int maxPtsPerCell)\n\nUtility routines help manage memory of cell array. EstimateSize()\nreturns a value used to initialize and allocate memory for array\nbased on number of cells and maximum number of points making up\ncell.  If every cell is the same size (in terms of number of\npoints), then the memory estimate is guaranteed exact. (If not\nexact, use Squeeze() to reclaim any extra memory.)\n"},
  {(char*)"InitTraversal", PyvtkCellArray_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nA cell traversal methods that is more efficient than vtkDataSet\ntraversal methods.  InitTraversal() initializes the traversal of\nthe list of cells.\n"},
  {(char*)"GetNextCell", PyvtkCellArray_GetNextCell, METH_VARARGS,
   (char*)"V.GetNextCell(vtkIdList) -> int\nC++: int GetNextCell(vtkIdList *pts)\n\nA cell traversal methods that is more efficient than vtkDataSet\ntraversal methods.  GetNextCell() gets the next cell in the list.\nIf end of list is encountered, 0 is returned.\n"},
  {(char*)"GetSize", PyvtkCellArray_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: vtkIdType GetSize()\n\nGet the size of the allocated connectivity array.\n"},
  {(char*)"GetNumberOfConnectivityEntries", PyvtkCellArray_GetNumberOfConnectivityEntries, METH_VARARGS,
   (char*)"V.GetNumberOfConnectivityEntries() -> int\nC++: vtkIdType GetNumberOfConnectivityEntries()\n\nGet the total number of entries (i.e., data values) in the\nconnectivity array. This may be much less than the allocated size\n(i.e., return value from GetSize().)\n"},
  {(char*)"GetCell", PyvtkCellArray_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int, vtkIdList)\nC++: void GetCell(vtkIdType loc, vtkIdList *pts)\n\nInternal method used to retrieve a cell given an offset into the\ninternal array.\n"},
  {(char*)"InsertNextCell", PyvtkCellArray_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(vtkCell) -> int\nC++: vtkIdType InsertNextCell(vtkCell *cell)\nV.InsertNextCell(int, (int, ...)) -> int\nC++: vtkIdType InsertNextCell(vtkIdType npts,\n    const vtkIdType *pts)\nV.InsertNextCell(vtkIdList) -> int\nC++: vtkIdType InsertNextCell(vtkIdList *pts)\nV.InsertNextCell(int) -> int\nC++: vtkIdType InsertNextCell(int npts)\n\nInsert a cell object. Return the cell id of the cell.\n"},
  {(char*)"InsertCellPoint", PyvtkCellArray_InsertCellPoint, METH_VARARGS,
   (char*)"V.InsertCellPoint(int)\nC++: void InsertCellPoint(vtkIdType id)\n\nUsed in conjunction with InsertNextCell(int npts) to add another\npoint to the list of cells.\n"},
  {(char*)"UpdateCellCount", PyvtkCellArray_UpdateCellCount, METH_VARARGS,
   (char*)"V.UpdateCellCount(int)\nC++: void UpdateCellCount(int npts)\n\nUsed in conjunction with InsertNextCell(int npts) and\nInsertCellPoint() to update the number of points defining the\ncell.\n"},
  {(char*)"GetInsertLocation", PyvtkCellArray_GetInsertLocation, METH_VARARGS,
   (char*)"V.GetInsertLocation(int) -> int\nC++: vtkIdType GetInsertLocation(int npts)\n\nComputes the current insertion location within the internal\narray. Used in conjunction with GetCell(int loc,...).\n"},
  {(char*)"GetTraversalLocation", PyvtkCellArray_GetTraversalLocation, METH_VARARGS,
   (char*)"V.GetTraversalLocation() -> int\nC++: vtkIdType GetTraversalLocation()\nV.GetTraversalLocation(int) -> int\nC++: vtkIdType GetTraversalLocation(vtkIdType npts)\n\nGet/Set the current traversal location.\n"},
  {(char*)"SetTraversalLocation", PyvtkCellArray_SetTraversalLocation, METH_VARARGS,
   (char*)"V.SetTraversalLocation(int)\nC++: void SetTraversalLocation(vtkIdType loc)\n\nGet/Set the current traversal location.\n"},
  {(char*)"ReverseCell", PyvtkCellArray_ReverseCell, METH_VARARGS,
   (char*)"V.ReverseCell(int)\nC++: void ReverseCell(vtkIdType loc)\n\nSpecial method inverts ordering of current cell. Must be called\ncarefully or the cell topology may be corrupted.\n"},
  {(char*)"ReplaceCell", PyvtkCellArray_ReplaceCell, METH_VARARGS,
   (char*)"V.ReplaceCell(int, int, (int, ...))\nC++: void ReplaceCell(vtkIdType loc, int npts,\n    const vtkIdType *pts)\n\nReplace the point ids of the cell with a different list of point\nids.\n"},
  {(char*)"GetMaxCellSize", PyvtkCellArray_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nReturns the size of the largest cell. The size is the number of\npoints defining the cell.\n"},
  {(char*)"GetPointer", PyvtkCellArray_GetPointer, METH_VARARGS,
   (char*)"V.GetPointer() -> (int, ...)\nC++: vtkIdType *GetPointer()\n\nGet pointer to array of cell data.\n"},
  {(char*)"WritePointer", PyvtkCellArray_WritePointer, METH_VARARGS,
   (char*)"V.WritePointer(int, int) -> (int, ...)\nC++: vtkIdType *WritePointer(const vtkIdType ncells,\n    const vtkIdType size)\n\nGet pointer to data array for purpose of direct writes of data.\nSize is the total storage consumed by the cell array. ncells is\nthe number of cells represented in the array.\n"},
  {(char*)"SetCells", PyvtkCellArray_SetCells, METH_VARARGS,
   (char*)"V.SetCells(int, vtkIdTypeArray)\nC++: void SetCells(vtkIdType ncells, vtkIdTypeArray *cells)\n\nDefine multiple cells by providing a connectivity list. The list\nis in the form (npts,p0,p1,...p(npts-1), repeated for each cell).\nBe careful using this method because it discards the old cells,\nand anything referring these cells becomes invalid (for example,\nif BuildCells() has been called see vtkPolyData).  The traversal\nlocation is reset to the beginning of the list; the insertion\nlocation is set to the end of the list.\n"},
  {(char*)"DeepCopy", PyvtkCellArray_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkCellArray)\nC++: void DeepCopy(vtkCellArray *ca)\n\nPerform a deep copy (no reference counting) of the given cell\narray.\n"},
  {(char*)"GetData", PyvtkCellArray_GetData, METH_VARARGS,
   (char*)"V.GetData() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetData()\n\nReturn the underlying data as a data array.\n"},
  {(char*)"Reset", PyvtkCellArray_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReuse list. Reset to initial condition.\n"},
  {(char*)"Squeeze", PyvtkCellArray_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nReclaim any extra memory.\n"},
  {(char*)"GetActualMemorySize", PyvtkCellArray_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this cell array. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object. The\ninformation returned is valid only after the pipeline has been\nupdated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellArray_StaticNew()
{
  return vtkCellArray::New();
}

PyObject *PyVTKClass_vtkCellArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellArray_StaticNew,
    PyvtkCellArray_Methods,
    "vtkCellArray", modulename,
    NULL, NULL,
    PyvtkCellArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCellArray_Doc()
{
  static const char *docstring[] = {
    "vtkCellArray - object to represent cell connectivity\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCellArray is a supporting object that explicitly represents cell\nconnectivity. The cell array structure is a raw integer list of the\nform: (n,id1,id2,...,idn, n,id1,id2,...,idn, ...) where n is the\nnumber of points in the cell, and id is a zero-offset index into an\nassociated point list.\n\nAdvantages of this data structure are its compactness, simplicity,\nand easy interface to external data.  Ho",
    "wever, it is totally\ninadequate for random access.  This functionality (when necessary) is\naccomplished by using the vtkCellTypes and vtkCellLinks objects to\nextend the definition of the data structure.\n\nSee Also:\n\nvtkCellTypes vtkCellLinks\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

