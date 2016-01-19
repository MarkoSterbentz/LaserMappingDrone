// python wrapper for vtkIncrementalOctreeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIncrementalOctreeNode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIncrementalOctreeNode(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIncrementalOctreeNodeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkIncrementalOctreeNode_Doc();


static PyObject *
PyvtkIncrementalOctreeNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIncrementalOctreeNode::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalOctreeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalOctreeNode::NewInstance());

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
PyvtkIncrementalOctreeNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIncrementalOctreeNode *tempr = vtkIncrementalOctreeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkIncrementalOctreeNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetPointIdSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIdSet() :
      op->vtkIncrementalOctreeNode::GetPointIdSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteChildNodes();
      }
    else
      {
      op->vtkIncrementalOctreeNode::DeleteChildNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_SetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkIncrementalOctreeNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkIncrementalOctreeNode::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkIncrementalOctreeNode::GetMinBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkIncrementalOctreeNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkIncrementalOctreeNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkIncrementalOctreeNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkIncrementalOctreeNode::IsLeaf());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChildIndex(temp0) :
      op->vtkIncrementalOctreeNode::GetChildIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->GetChild(temp0) :
      op->vtkIncrementalOctreeNode::GetChild(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->ContainsPoint(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPointByData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPointByData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    int tempr = (ap.IsBound() ?
      op->ContainsPointByData(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPointByData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[3];
  const int size1 = 3;
  int temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIncrementalOctreeNode::InsertPoint(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIncrementalOctreeNode *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode"))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1) :
      op->vtkIncrementalOctreeNode::GetDistance2ToInnerBoundary(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIncrementalOctreeNode *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIncrementalOctreeNode *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(self, args);
    case 4:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return NULL;
}



static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->ExportAllPointIdsByInsertion(temp0);
      }
    else
      {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByInsertion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByDirectSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ExportAllPointIdsByDirectSet(temp0, temp1);
      }
    else
      {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByDirectSet(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkIncrementalOctreeNode_Methods[] = {
  {(char*)"GetClassName", PyvtkIncrementalOctreeNode_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIncrementalOctreeNode_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIncrementalOctreeNode_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIncrementalOctreeNode_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkIncrementalOctreeNode_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nGet the number of points inside or under this node.\n"},
  {(char*)"GetPointIdSet", PyvtkIncrementalOctreeNode_GetPointIdSet, METH_VARARGS,
   (char*)"V.GetPointIdSet() -> vtkIdList\nC++: vtkIdList *GetPointIdSet()\n\nGet the list of point indices, NULL for a non-leaf node.\n"},
  {(char*)"DeleteChildNodes", PyvtkIncrementalOctreeNode_DeleteChildNodes, METH_VARARGS,
   (char*)"V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the eight child nodes.\n"},
  {(char*)"SetBounds", PyvtkIncrementalOctreeNode_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\n\nSet the spatial bounding box of the node. This function sets a\ndefault data bounding box.\n"},
  {(char*)"GetBounds", PyvtkIncrementalOctreeNode_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the spatial bounding box of the node. The values are returned\nvia an array in order of: x_min, x_max, y_min, y_max, z_min,\nz_max.\n"},
  {(char*)"GetMinBounds", PyvtkIncrementalOctreeNode_GetMinBounds, METH_VARARGS,
   (char*)"V.GetMinBounds() -> (float, float, float)\nC++: double *GetMinBounds()\n\n"},
  {(char*)"GetMaxBounds", PyvtkIncrementalOctreeNode_GetMaxBounds, METH_VARARGS,
   (char*)"V.GetMaxBounds() -> (float, float, float)\nC++: double *GetMaxBounds()\n\n"},
  {(char*)"GetMinDataBounds", PyvtkIncrementalOctreeNode_GetMinDataBounds, METH_VARARGS,
   (char*)"V.GetMinDataBounds() -> (float, ...)\nC++: double *GetMinDataBounds()\n\nGet access to MinDataBounds. Note that MinDataBounds is not valid\nuntil point insertion.\n"},
  {(char*)"GetMaxDataBounds", PyvtkIncrementalOctreeNode_GetMaxDataBounds, METH_VARARGS,
   (char*)"V.GetMaxDataBounds() -> (float, ...)\nC++: double *GetMaxDataBounds()\n\nGet access to MaxDataBounds. Note that MaxDataBounds is not valid\nuntil point insertion.\n"},
  {(char*)"IsLeaf", PyvtkIncrementalOctreeNode_IsLeaf, METH_VARARGS,
   (char*)"V.IsLeaf() -> int\nC++: int IsLeaf()\n\nDetermine whether or not this node is a leaf.\n"},
  {(char*)"GetChildIndex", PyvtkIncrementalOctreeNode_GetChildIndex, METH_VARARGS,
   (char*)"V.GetChildIndex((float, float, float)) -> int\nC++: int GetChildIndex(const double point[3])\n\nDetermine which specific child / octant contains a given point.\nNote that the point is assumed to be inside this node and no\nchecking is performed on the inside issue.\n"},
  {(char*)"GetChild", PyvtkIncrementalOctreeNode_GetChild, METH_VARARGS,
   (char*)"V.GetChild(int) -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *GetChild(int i)\n\nGet quick access to a child of this node. Note that this node is\nassumed to be a non-leaf one and no checking is performed on the\nnode type.\n"},
  {(char*)"ContainsPoint", PyvtkIncrementalOctreeNode_ContainsPoint, METH_VARARGS,
   (char*)"V.ContainsPoint((float, float, float)) -> int\nC++: int ContainsPoint(const double pnt[3])\n\nA point is in a node if and only if MinBounds[i] < p[i] <=\nMaxBounds[i], which allows a node to be divided into eight\nnon-overlapping children.\n"},
  {(char*)"ContainsPointByData", PyvtkIncrementalOctreeNode_ContainsPointByData, METH_VARARGS,
   (char*)"V.ContainsPointByData((float, float, float)) -> int\nC++: int ContainsPointByData(const double pnt[3])\n\nA point is in a node, in terms of data, if and only if\nMinDataBounds[i] <= p[i] <= MaxDataBounds[i].\n"},
  {(char*)"InsertPoint", PyvtkIncrementalOctreeNode_InsertPoint, METH_VARARGS,
   (char*)"V.InsertPoint(vtkPoints, (float, float, float), int, [int, ...],\n    int) -> int\nC++: int InsertPoint(vtkPoints *points, const double newPnt[3],\n    int maxPts, vtkIdType *pntId, int ptMode)\n\nThis function is called after a successful point-insertion check\nand only applies to a leaf node. Prior to a call to this\nfunction, the octree should have been retrieved top-down to find\nthe specific leaf node in which this new point (newPt) will be\ninserted. The actual index of the new point (to be inserted to\npoints) is stored in pntId. Argument ptMode specifies whether the\npoint is not inserted at all but instead only the point index is\nprovided upon 0, the point is inserted via vtkPoints::\nInsertPoint() upon 1, or it is inserted via\nvtkPoints::InsertNextPoint() upon 2. For case 0, pntId needs to\nbe specified. For cases 1 and 2, the actual point index is\nreturned via pntId. Note that this function always returns 1 to\nindicate the success of point insertion.\n"},
  {(char*)"GetDistance2ToInnerBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   (char*)"V.GetDistance2ToInnerBoundary((float, float, float),\n    vtkIncrementalOctreeNode) -> float\nC++: double GetDistance2ToInnerBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode)\n\nGiven a point inside this node, get the minimum squared distance\nto all inner boundaries. An inner boundary is a node's face that\nis shared by another non-root node.\n"},
  {(char*)"GetDistance2ToBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToBoundary, METH_VARARGS,
   (char*)"V.GetDistance2ToBoundary((float, float, float),\n    vtkIncrementalOctreeNode, int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode, int checkData)\nV.GetDistance2ToBoundary((float, float, float), [float, float,\n    float], vtkIncrementalOctreeNode, int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    double closest[3], vtkIncrementalOctreeNode *rootNode,\n    int checkData)\n\nCompute the minimum squared distance from a point to this node,\nwith all six boundaries considered. The data bounding box is\nchecked if checkData is non-zero.\n"},
  {(char*)"ExportAllPointIdsByInsertion", PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion, METH_VARARGS,
   (char*)"V.ExportAllPointIdsByInsertion(vtkIdList)\nC++: void ExportAllPointIdsByInsertion(vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by inserting them to an allocated vtkIdList via\nvtkIdList::InsertNextId().\n"},
  {(char*)"ExportAllPointIdsByDirectSet", PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet, METH_VARARGS,
   (char*)"V.ExportAllPointIdsByDirectSet([int, ...], vtkIdList)\nC++: void ExportAllPointIdsByDirectSet(vtkIdType *pntIdx,\n    vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by directly setting them in an allocated vtkIdList object.\npntIdx indicates the starting location (in terms of vtkIdList)\nfrom which new point indices are added to vtkIdList by\nvtkIdList::SetId().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIncrementalOctreeNode_StaticNew()
{
  return vtkIncrementalOctreeNode::New();
}

PyObject *PyVTKClass_vtkIncrementalOctreeNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIncrementalOctreeNode_StaticNew,
    PyvtkIncrementalOctreeNode_Methods,
    "vtkIncrementalOctreeNode", modulename,
    NULL, NULL,
    PyvtkIncrementalOctreeNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkIncrementalOctreeNode_Doc()
{
  static const char *docstring[] = {
    "vtkIncrementalOctreeNode - Octree node constituting incremental\n\n",
    "Superclass: vtkObject\n\n",
    "Octree nodes serve as spatial sub-division primitives to build the\nsearch\n structure of an incremental octree in a recursive top-down manner.\nThe\n hierarchy takes the form of a tree-like representation by which a\nparent\n node contains eight mutually non-overlapping child nodes. Each child\nis\n assigned with an axis-aligned rectangular volume (Spatial Bounding\nBox)\n and the eight children together c",
    "over exactly the same region as\ngoverned\n by their parent. The eight child nodes / octants are ordered as\n\n\n { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n},\n { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n},\n { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n},\n { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n},\n",
    " { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n},\n { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n},\n { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n},\n { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n},\n\n\n where { xrange & yRange & zRange } defines the region of each 3D\noctant.\n In addition, the points falling",
    " within and registered, by means of\npoint\n indices, in the parent node are distributed to the child nodes for\ndelegated\n maintenance. In fact, only leaf nodes, i.e., those without any\ndescendants,\n actually store point indices while each node, regardless of a leaf\nor non-\n leaf node, keeps a dynamically updated Data Bounding Box of the\ninhabitant\n points, if any. Given a maximum number of points p",
    "er leaf node, an\noctree\n is initialized with an empty leaf node that is then recursively\nsub-divided,\n but only on demand as points are incrementally inserted, to\nconstruct a\n populated tree.\n\n\n Please note that this octree node class is able to handle a large\nnumber\n of EXACTLY duplicate points that is greater than the specified\nmaximum\n number of points per leaf node. In other words, as an excep",
    "tion, a\nleaf\n node may maintain an arbitrary number of exactly duplicate points to\ndeal\n with possible extreme cases.\n\nSee Also:\n\n\n vtkIncrementalOctreePointLocator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIncrementalOctreeNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIncrementalOctreeNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIncrementalOctreeNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

