// python wrapper for vtkModifiedBSPTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkModifiedBSPTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkModifiedBSPTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkModifiedBSPTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractCellLocatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractCellLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractCellLocatorNew
#endif

static const char **PyvtkModifiedBSPTree_Doc();


static PyObject *
PyvtkModifiedBSPTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkModifiedBSPTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkModifiedBSPTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkModifiedBSPTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkModifiedBSPTree::NewInstance());

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
PyvtkModifiedBSPTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkModifiedBSPTree *tempr = vtkModifiedBSPTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkModifiedBSPTree::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkModifiedBSPTree::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkModifiedBSPTree::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentationLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentationLeafs(temp0);
      }
    else
      {
      op->vtkModifiedBSPTree::GenerateRepresentationLeafs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  vtkIdType temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  vtkIdType temp7;
  vtkGenericCell *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  vtkPoints *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  vtkPoints *temp3 = NULL;
  vtkIdList *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList"))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkModifiedBSPTree_IntersectWithLine_s1(self, args);
    case 8:
      return PyvtkModifiedBSPTree_IntersectWithLine_s2(self, args);
    case 9:
      return PyvtkModifiedBSPTree_IntersectWithLine_s3(self, args);
    case 4:
      return PyvtkModifiedBSPTree_IntersectWithLine_s4(self, args);
    case 5:
      return PyvtkModifiedBSPTree_IntersectWithLine_s5(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return NULL;
}



static PyObject *
PyvtkModifiedBSPTree_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0) :
      op->vtkModifiedBSPTree::FindCell(temp0));

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

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  vtkGenericCell *temp2 = NULL;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::FindCell(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
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

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkModifiedBSPTree_FindCell_s1(self, args);
    case 5:
      return PyvtkModifiedBSPTree_FindCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return NULL;
}



static PyObject *
PyvtkModifiedBSPTree_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->InsideCellBounds(temp0, temp1) :
      op->vtkModifiedBSPTree::InsideCellBounds(temp0, temp1));

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

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GetLeafNodeCellInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafNodeCellInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdListCollection *tempr = (ap.IsBound() ?
      op->GetLeafNodeCellInformation() :
      op->vtkModifiedBSPTree::GetLeafNodeCellInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkModifiedBSPTree_Methods[] = {
  {(char*)"GetClassName", PyvtkModifiedBSPTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard Type-Macro\n"},
  {(char*)"IsA", PyvtkModifiedBSPTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard Type-Macro\n"},
  {(char*)"NewInstance", PyvtkModifiedBSPTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkModifiedBSPTree\nC++: vtkModifiedBSPTree *NewInstance()\n\nStandard Type-Macro\n"},
  {(char*)"SafeDownCast", PyvtkModifiedBSPTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkModifiedBSPTree\nC++: vtkModifiedBSPTree *SafeDownCast(vtkObject* o)\n\nStandard Type-Macro\n"},
  {(char*)"FreeSearchStructure", PyvtkModifiedBSPTree_FreeSearchStructure, METH_VARARGS,
   (char*)"V.FreeSearchStructure()\nC++: void FreeSearchStructure()\n\nFree tree memory\n"},
  {(char*)"BuildLocator", PyvtkModifiedBSPTree_BuildLocator, METH_VARARGS,
   (char*)"V.BuildLocator()\nC++: void BuildLocator()\n\nBuild Tree\n"},
  {(char*)"GenerateRepresentation", PyvtkModifiedBSPTree_GenerateRepresentation, METH_VARARGS,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nGenerate BBox representation of Nth level\n"},
  {(char*)"GenerateRepresentationLeafs", PyvtkModifiedBSPTree_GenerateRepresentationLeafs, METH_VARARGS,
   (char*)"V.GenerateRepresentationLeafs(vtkPolyData)\nC++: virtual void GenerateRepresentationLeafs(vtkPolyData *pd)\n\nGenerate BBox representation of all leaf nodes\n"},
  {(char*)"IntersectWithLine", PyvtkModifiedBSPTree_IntersectWithLine, METH_VARARGS,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], const double tol, vtkPoints *points,\n    vtkIdList *cellIds)\n\nReturn intersection point (if any) of finite line with cells\ncontained in cell locator.\n"},
  {(char*)"FindCell", PyvtkModifiedBSPTree_FindCell, METH_VARARGS,
   (char*)"V.FindCell([float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nV.FindCell([float, float, float], float, vtkGenericCell, [float,\n    float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n\nReturns the Id of the cell containing the point, returns -1 if no\ncell found. This interface uses a tolerance of zero\n"},
  {(char*)"InsideCellBounds", PyvtkModifiedBSPTree_InsideCellBounds, METH_VARARGS,
   (char*)"V.InsideCellBounds([float, float, float], int) -> bool\nC++: bool InsideCellBounds(double x[3], vtkIdType cell_ID)\n\n"},
  {(char*)"GetLeafNodeCellInformation", PyvtkModifiedBSPTree_GetLeafNodeCellInformation, METH_VARARGS,
   (char*)"V.GetLeafNodeCellInformation() -> vtkIdListCollection\nC++: vtkIdListCollection *GetLeafNodeCellInformation()\n\nAfter subdivision has completed, one may wish to query the tree\nto find which cells are in which leaf nodes. This function\nreturns a list which holds a cell Id list for each leaf node.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkModifiedBSPTree_StaticNew()
{
  return vtkModifiedBSPTree::New();
}

PyObject *PyVTKClass_vtkModifiedBSPTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkModifiedBSPTree_StaticNew,
    PyvtkModifiedBSPTree_Methods,
    "vtkModifiedBSPTree", modulename,
    NULL, NULL,
    PyvtkModifiedBSPTree_Doc(),
    PyVTKClass_vtkAbstractCellLocatorNew(modulename));
  return cls;
}

const char **PyvtkModifiedBSPTree_Doc()
{
  static const char *docstring[] = {
    "vtkModifiedBSPTree - Generate axis aligned BBox tree for raycasting\nand other Locator based searches\n\n",
    "Superclass: vtkAbstractCellLocator\n\n",
    "vtkModifiedBSPTree creates an evenly balanced BSP tree using a top\ndown implementation. Axis aligned split planes are found which evenly\ndivide cells into two buckets. Generally a split plane will intersect\nsome cells and these are usually stored in both child nodes of the\ncurrent parent. (Or split into separate cells which we cannot\nconsider in this case). Storing cells in multiple buckets create",
    "s\nproblems associated with multiple tests against rays and increases\nthe required storage as complex meshes will have many cells\nstraddling a split plane (and further splits may cause multiple\ncopies of these).\n\nDuring a discussion with Arno Formella in 1998 he suggested using a\nthird child node to store objects which straddle split planes. I've\nnot seen this published (Yes! - see below), but thou",
    "ght it worth\ntrying. This implementation of the BSP tree creates a third child\nnode for storing cells laying across split planes, the third cell may\noverlap the other two, but the two 'proper' nodes otherwise conform\nto usual BSP rules.\n\nThe advantage of this implementation is cells only ever lie in one\nnode and mailbox testing is avoided. All BBoxes are axis aligned and\na ray cast uses an efficie",
    "nt search strategy based on near/far nodes\nand rejects all BBoxes using simple tests.\n\nFor fast raytracing, 6 copies of cell lists are stored in each leaf\nnode each list is in axis sorted order +/- x,y,z and cells are always\ntested in the direction of the ray dominant axis. Once an\nintersection is found any cell or BBox with a closest point further\nthan the I-point can be instantly rejected and ra",
    "ytracing stops as\nsoon as no nodes can be closer than the current best intersection\npoint.\n\nThe addition of the 'middle' node upsets the optimal balance of the\ntree, but is a minor overhead during the raytrace. Each child node is\ncontracted such that it tightly fits all cells inside it, enabling\nfurther ray/box rejections.\n\nThis class is intended for persons requiring many ray tests and is\noptimiz",
    "ed for this purpose. As no cell ever lies in more than one\nleaf node, and parent nodes do not maintain cell lists, the memory\noverhead of the sorted cell lists is 6*num_cells*4 for 6 lists of\nints, each num_cells in length. The memory requirement of the nodes\nthemselves is usually of minor significance.\n\nSubdividision is controlled by MaxCellsPerNode - any node with more\nthan this number will be s",
    "ubdivided providing a good split plane can\nbe found and the max depth is not exceeded.\n\nThe average cells per leaf will usually be around half the\nMaxCellsPerNode, though the middle node is usually sparsely populated\nand lowers the average slightly. The middle node will not be created\nwhen not needed. Subdividing down to very small cells per node is not\ngenerally suggested as then the 6 stored cel",
    "l lists are effectively\nredundant.\n\nValues of MaxcellsPerNode of around 16->128 depending on dataset size\nwill usually give good results.\n\nCells are only sorted into 6 lists once - before tree creation, each\nnode segments the lists and passes them down to the new child nodes\nwhilst maintaining sorted order. This makes for an efficient\nsubdivision strategy.\n\nNB. The following reference has been sen",
    "t to me \n@Article{formella-1995-ray,\n    author =     \"Arno Formella and Christian Gill\",\n    title =      \"{Ray Tracing: A Quantitative Analysis and a New\n                  Practical Algorithm}\",\n    journal =    \"{The Visual Computer}\",\n    year =       \"{1995}\",\n    month =       dec,\n    pages =      \"{465--476}\",\n    volume =     \"{11}\",\n    number =     \"{9}\",\n    publisher =  \"{Springer}\",\n",
    "    keywords =   \"{ray tracing, space subdivision, plane traversal,\n                   octree, clustering, benchmark scenes}\",\n    annote =     \"{We present a new method to accelerate the process\nof\n                   finding nearest ray--object intersections in ray\n                   tracing. The algorithm consumes an amount of\nmemory\n                   more or less linear in the number of object",
    "s. The\nbasic\n                   ideas can be characterized with a modified\nBSP--tree\n                   and plane traversal. Plane traversal is a fast\nlinear\n                   time algorithm to find the closest intersection\npoint\n                   in a list of bounding volumes hit by a ray. We use\n                   plane traversal at every node of the high\noutdegree\n                   BSP--tree",
    ". Our implementation is competitive to\nfast\n                   ray tracing programs. We present a benchmark suite\n                   which allows for an extensive comparison of ray\ntracing\n                   algorithms.}\",\n  }\n\nThanks:\n\n\n John Biddiscombe for developing and contributing this class\n\nToDo:\n\n------------- Implement intersection heap for testing rays against\n    transparent objects\n\nS",
    "tyle:\n\n-------------- This class is currently maintained by J. Biddiscombe\n    who has specially requested that the code style not be modified\n    to the kitware standard. Please respect the contribution of this\n    class by keeping the style as close as possible to the author's\n    original.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkModifiedBSPTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkModifiedBSPTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkModifiedBSPTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

