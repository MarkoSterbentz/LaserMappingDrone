// python wrapper for vtkLabelHierarchyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkLabelHierarchyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelHierarchyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelHierarchyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLabelHierarchyIterator_Doc();


static PyObject *
PyvtkLabelHierarchyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelHierarchyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchyIterator::NewInstance());

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
PyvtkLabelHierarchyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelHierarchyIterator *tempr = vtkLabelHierarchyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->Begin(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::Begin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkLabelHierarchyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkLabelHierarchyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetPoint(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::GetPoint(temp0);
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
PyvtkLabelHierarchyIterator_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSize(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::GetSize(temp0);
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
PyvtkLabelHierarchyIterator_GetBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBoundedSize(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::GetBoundedSize(temp0);
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
PyvtkLabelHierarchyIterator_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkLabelHierarchyIterator::GetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkLabelHierarchyIterator::GetLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetUnicodeLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeLabel() :
      op->vtkLabelHierarchyIterator::GetUnicodeLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkLabelHierarchyIterator::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetLabelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLabelId() :
      op->vtkLabelHierarchyIterator::GetLabelId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetHierarchy() :
      op->vtkLabelHierarchyIterator::GetHierarchy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_SetTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetTraversedBounds(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::SetTraversedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetNodeGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetNodeGeometry(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_BoxNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoxNode();
      }
    else
      {
      op->vtkLabelHierarchyIterator::BoxNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_BoxAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->BoxAllNodes(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::BoxAllNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_SetAllBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllBounds(temp0);
      }
    else
      {
      op->vtkLabelHierarchyIterator::SetAllBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetAllBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllBounds() :
      op->vtkLabelHierarchyIterator::GetAllBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelHierarchyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelHierarchyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelHierarchyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelHierarchyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelHierarchyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Begin", PyvtkLabelHierarchyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin(vtkIdTypeArray)\nC++: virtual void Begin(vtkIdTypeArray *)\n\nInitializes the iterator. lastLabels is an array holding labels\nwhich should be traversed before any other labels in the\nhierarchy. This could include labels placed during a previous\nrendering or a label located under the mouse pointer. You may\npass a null pointer.\n"},
  {(char*)"Next", PyvtkLabelHierarchyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nAdvance the iterator.\n"},
  {(char*)"IsAtEnd", PyvtkLabelHierarchyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> bool\nC++: virtual bool IsAtEnd()\n\nReturns true if the iterator is at the end.\n"},
  {(char*)"GetPoint", PyvtkLabelHierarchyIterator_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint([float, float, float])\nC++: virtual void GetPoint(double x[3])\n\nRetrieves the current label location.\n"},
  {(char*)"GetSize", PyvtkLabelHierarchyIterator_GetSize, METH_VARARGS,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double sz[2])\n\nRetrieves the current label size.\n"},
  {(char*)"GetBoundedSize", PyvtkLabelHierarchyIterator_GetBoundedSize, METH_VARARGS,
   (char*)"V.GetBoundedSize([float, float])\nC++: virtual void GetBoundedSize(double sz[2])\n\nRetrieves the current label maximum width in world coordinates.\n"},
  {(char*)"GetType", PyvtkLabelHierarchyIterator_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: virtual int GetType()\n\nRetrieves the current label type.\n"},
  {(char*)"GetLabel", PyvtkLabelHierarchyIterator_GetLabel, METH_VARARGS,
   (char*)"V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\n\nRetrieves the current label string.\n"},
  {(char*)"GetUnicodeLabel", PyvtkLabelHierarchyIterator_GetUnicodeLabel, METH_VARARGS,
   (char*)"V.GetUnicodeLabel() -> unicode\nC++: virtual vtkUnicodeString GetUnicodeLabel()\n\nRetrieves the current label as a unicode string.\n"},
  {(char*)"GetOrientation", PyvtkLabelHierarchyIterator_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> float\nC++: virtual double GetOrientation()\n\nRetrieves the current label orientation.\n"},
  {(char*)"GetLabelId", PyvtkLabelHierarchyIterator_GetLabelId, METH_VARARGS,
   (char*)"V.GetLabelId() -> int\nC++: virtual vtkIdType GetLabelId()\n\nRetrieves the current label id.\n"},
  {(char*)"GetHierarchy", PyvtkLabelHierarchyIterator_GetHierarchy, METH_VARARGS,
   (char*)"V.GetHierarchy() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetHierarchy()\n\nGet the label hierarchy associated with the current label.\n"},
  {(char*)"SetTraversedBounds", PyvtkLabelHierarchyIterator_SetTraversedBounds, METH_VARARGS,
   (char*)"V.SetTraversedBounds(vtkPolyData)\nC++: virtual void SetTraversedBounds(vtkPolyData *)\n\nSets a polydata to fill with geometry representing the bounding\nboxes of the traversed octree nodes.\n"},
  {(char*)"GetNodeGeometry", PyvtkLabelHierarchyIterator_GetNodeGeometry, METH_VARARGS,
   (char*)"V.GetNodeGeometry([float, float, float], float)\nC++: virtual void GetNodeGeometry(double ctr[3], double &size)\n\nRetrieve the coordinates of the center of the current hierarchy\nnode and the size of the node. Nodes are n-cubes, so the size is\nthe length of any edge of the cube. This is used by BoxNode().\n"},
  {(char*)"BoxNode", PyvtkLabelHierarchyIterator_BoxNode, METH_VARARGS,
   (char*)"V.BoxNode()\nC++: virtual void BoxNode()\n\nAdd a representation to TraversedBounds for the current octree\nnode. This should be called by subclasses inside Next(). Does\nnothing if TraversedBounds is NULL.\n"},
  {(char*)"BoxAllNodes", PyvtkLabelHierarchyIterator_BoxAllNodes, METH_VARARGS,
   (char*)"V.BoxAllNodes(vtkPolyData)\nC++: virtual void BoxAllNodes(vtkPolyData *)\n\nAdd a representation for all existing octree nodes to the\nspecified polydata. This is equivalent to setting\nTraversedBounds, iterating over the entire hierarchy, and then\nresetting TraversedBounds to its original value.\n"},
  {(char*)"SetAllBounds", PyvtkLabelHierarchyIterator_SetAllBounds, METH_VARARGS,
   (char*)"V.SetAllBounds(int)\nC++: void SetAllBounds(int a)\n\nSet/get whether all nodes in the hierarchy should be added to the\nTraversedBounds polydata or only those traversed. When non-zero,\nall nodes will be added. By default, AllBounds is 0.\n"},
  {(char*)"GetAllBounds", PyvtkLabelHierarchyIterator_GetAllBounds, METH_VARARGS,
   (char*)"V.GetAllBounds() -> int\nC++: int GetAllBounds()\n\nSet/get whether all nodes in the hierarchy should be added to the\nTraversedBounds polydata or only those traversed. When non-zero,\nall nodes will be added. By default, AllBounds is 0.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkLabelHierarchyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkLabelHierarchyIterator_Methods,
    "vtkLabelHierarchyIterator", modulename,
    NULL, NULL,
    PyvtkLabelHierarchyIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkLabelHierarchyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkLabelHierarchyIterator - iterator over vtkLabelHierarchy\n\n",
    "Superclass: vtkObject\n\n",
    "Abstract superclass for iterators over vtkLabelHierarchy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelHierarchyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelHierarchyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelHierarchyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

