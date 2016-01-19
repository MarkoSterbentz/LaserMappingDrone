// python wrapper for vtkCPExodusIIElementBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkCPExodusIIElementBlock.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPExodusIIElementBlock(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPExodusIIElementBlockImplNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCPExodusIIElementBlockImpl_Doc();


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPExodusIIElementBlockImpl::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlockImpl::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPExodusIIElementBlockImpl *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlockImpl::NewInstance());

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
PyvtkCPExodusIIElementBlockImpl_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPExodusIIElementBlockImpl *tempr = vtkCPExodusIIElementBlockImpl::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExodusConnectivityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  std::string temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetExodusConnectivityArray(temp0, temp1, temp2, temp3) :
      op->vtkCPExodusIIElementBlockImpl::SetExodusConnectivityArray(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCPExodusIIElementBlockImpl::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCPExodusIIElementBlockImpl::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkCPExodusIIElementBlockImpl::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkCPExodusIIElementBlockImpl::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCPExodusIIElementBlockImpl::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetIdsOfCellsOfType(temp0, temp1);
      }
    else
      {
      op->vtkCPExodusIIElementBlockImpl::GetIdsOfCellsOfType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkCPExodusIIElementBlockImpl::IsHomogeneous());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkCPExodusIIElementBlockImpl::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType temp3;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(self, args);
    case 3:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return NULL;
}



static PyObject *
PyvtkCPExodusIIElementBlockImpl_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ReplaceCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCPExodusIIElementBlockImpl::ReplaceCell(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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

static PyMethodDef PyvtkCPExodusIIElementBlockImpl_Methods[] = {
  {(char*)"GetClassName", PyvtkCPExodusIIElementBlockImpl_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPExodusIIElementBlockImpl_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPExodusIIElementBlockImpl_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPExodusIIElementBlockImpl\nC++: vtkCPExodusIIElementBlockImpl *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPExodusIIElementBlockImpl_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPExodusIIElementBlockImpl\nC++: vtkCPExodusIIElementBlockImpl *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExodusConnectivityArray", PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray, METH_VARARGS,
   (char*)"V.SetExodusConnectivityArray([int, ...], string, int, int) -> bool\nC++: bool SetExodusConnectivityArray(int *elements,\n    const std::string &type, int numElements, int nodesPerElement)\n\nSet the Exodus element block data. 'elements' is the array\nreturned from ex_get_elem_conn. 'type', 'numElements', and\n'nodesPerElement' are obtained from ex_get_elem_block. Returns\ntrue or false depending on whether or not the element type can be\ntranslated into a VTK cell type. This object takes ownership of\nthe elements array unless this function returns false.\n"},
  {(char*)"GetNumberOfCells", PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\n"},
  {(char*)"GetCellType", PyvtkCPExodusIIElementBlockImpl_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\n"},
  {(char*)"GetCellPoints", PyvtkCPExodusIIElementBlockImpl_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\n"},
  {(char*)"GetPointCells", PyvtkCPExodusIIElementBlockImpl_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\n"},
  {(char*)"GetMaxCellSize", PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\n"},
  {(char*)"GetIdsOfCellsOfType", PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType, METH_VARARGS,
   (char*)"V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n\n"},
  {(char*)"IsHomogeneous", PyvtkCPExodusIIElementBlockImpl_IsHomogeneous, METH_VARARGS,
   (char*)"V.IsHomogeneous() -> int\nC++: int IsHomogeneous()\n\n"},
  {(char*)"Allocate", PyvtkCPExodusIIElementBlockImpl_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(vtkIdType numCells, int extSize=1000)\n\n"},
  {(char*)"InsertNextCell", PyvtkCPExodusIIElementBlockImpl_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nV.InsertNextCell(int, int, [int, ...]) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds)\nV.InsertNextCell(int, int, [int, ...], int, [int, ...]) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)\n\n"},
  {(char*)"ReplaceCell", PyvtkCPExodusIIElementBlockImpl_ReplaceCell, METH_VARARGS,
   (char*)"V.ReplaceCell(int, int, [int, ...])\nC++: void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPExodusIIElementBlockImpl_StaticNew()
{
  return vtkCPExodusIIElementBlockImpl::New();
}

PyObject *PyVTKClass_vtkCPExodusIIElementBlockImplNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPExodusIIElementBlockImpl_StaticNew,
    PyvtkCPExodusIIElementBlockImpl_Methods,
    "vtkCPExodusIIElementBlockImpl", modulename,
    NULL, NULL,
    PyvtkCPExodusIIElementBlockImpl_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCPExodusIIElementBlockImpl_Doc()
{
  static const char *docstring[] = {
    "vtkCPExodusIIElementBlock - Uses an Exodus II element block as a\n\n",
    "Superclass: vtkObject\n\n",
    "This class allows raw data arrays returned by the Exodus II library\nto be used directly in VTK without repacking the data into the\nvtkUnstructuredGrid memory layout. Use the vtkCPExodusIIInSituReader\nto read an Exodus II file's data into this structure.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPExodusIIElementBlockNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridBaseNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridBaseNew
#endif

static const char **PyvtkCPExodusIIElementBlock_Doc();


static PyObject *
PyvtkCPExodusIIElementBlock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPExodusIIElementBlock::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPExodusIIElementBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlock::NewInstance());

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
PyvtkCPExodusIIElementBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPExodusIIElementBlock *tempr = vtkCPExodusIIElementBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPExodusIIElementBlock_Methods[] = {
  {(char*)"GetClassName", PyvtkCPExodusIIElementBlock_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPExodusIIElementBlock_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPExodusIIElementBlock_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPExodusIIElementBlock\nC++: vtkCPExodusIIElementBlock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPExodusIIElementBlock_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPExodusIIElementBlock\nC++: vtkCPExodusIIElementBlock *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPExodusIIElementBlock_StaticNew()
{
  return vtkCPExodusIIElementBlock::New();
}

PyObject *PyVTKClass_vtkCPExodusIIElementBlockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPExodusIIElementBlock_StaticNew,
    PyvtkCPExodusIIElementBlock_Methods,
    "vtkCPExodusIIElementBlock", modulename,
    NULL, NULL,
    PyvtkCPExodusIIElementBlock_Doc(),
    PyVTKClass_vtkUnstructuredGridBaseNew(modulename));
  return cls;
}

const char **PyvtkCPExodusIIElementBlock_Doc()
{
  static const char *docstring[] = {
    "vtkCPExodusIIElementBlock - Uses an Exodus II element block as a\n\n",
    "Superclass: vtkUnstructuredGridBase\n\n",
    "This class allows raw data arrays returned by the Exodus II library\nto be used directly in VTK without repacking the data into the\nvtkUnstructuredGrid memory layout. Use the vtkCPExodusIIInSituReader\nto read an Exodus II file's data into this structure.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPExodusIIElementBlock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPExodusIIElementBlockImplNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPExodusIIElementBlockImpl", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkCPExodusIIElementBlockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPExodusIIElementBlock", o) != 0)
    {
    Py_DECREF(o);
    }

}

