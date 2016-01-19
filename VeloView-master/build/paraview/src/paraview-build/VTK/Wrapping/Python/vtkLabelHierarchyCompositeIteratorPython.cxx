// python wrapper for vtkLabelHierarchyCompositeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabelHierarchyCompositeIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelHierarchyCompositeIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelHierarchyCompositeIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLabelHierarchyIteratorNew
extern "C" { PyObject *PyVTKClass_vtkLabelHierarchyIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabelHierarchyIteratorNew
#endif

static const char **PyvtkLabelHierarchyCompositeIterator_Doc();


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelHierarchyCompositeIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchyCompositeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchyCompositeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchyCompositeIterator::NewInstance());

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
PyvtkLabelHierarchyCompositeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelHierarchyCompositeIterator *tempr = vtkLabelHierarchyCompositeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_AddIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkLabelHierarchyIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabelHierarchyIterator"))
    {
    if (ap.IsBound())
      {
      op->AddIterator(temp0);
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::AddIterator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyCompositeIterator_AddIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkLabelHierarchyIterator *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLabelHierarchyIterator") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddIterator(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::AddIterator(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyCompositeIterator_AddIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchyCompositeIterator_AddIterator_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyCompositeIterator_AddIterator_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddIterator");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyCompositeIterator_ClearIterators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIterators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearIterators();
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::ClearIterators();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

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
      op->vtkLabelHierarchyCompositeIterator::Begin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkLabelHierarchyCompositeIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetLabelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLabelId() :
      op->vtkLabelHierarchyCompositeIterator::GetLabelId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetHierarchy() :
      op->vtkLabelHierarchyCompositeIterator::GetHierarchy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetNodeGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetNodeGeometry(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::GetNodeGeometry(temp0, temp1);
      }

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
PyvtkLabelHierarchyCompositeIterator_BoxNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoxNode();
      }
    else
      {
      op->vtkLabelHierarchyCompositeIterator::BoxNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_BoxAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

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
      op->vtkLabelHierarchyCompositeIterator::BoxAllNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelHierarchyCompositeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelHierarchyCompositeIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelHierarchyCompositeIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelHierarchyCompositeIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelHierarchyCompositeIterator\nC++: vtkLabelHierarchyCompositeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelHierarchyCompositeIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelHierarchyCompositeIterator\nC++: vtkLabelHierarchyCompositeIterator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"AddIterator", PyvtkLabelHierarchyCompositeIterator_AddIterator, METH_VARARGS,
   (char*)"V.AddIterator(vtkLabelHierarchyIterator)\nC++: virtual void AddIterator(vtkLabelHierarchyIterator *it)\nV.AddIterator(vtkLabelHierarchyIterator, int)\nC++: virtual void AddIterator(vtkLabelHierarchyIterator *it,\n    int count)\n\nAdds a label iterator to this composite iterator. The second\noptional argument is the number of times to repeat the iterator\nbefore moving to the next one round-robin style. Default is 1.\n"},
  {(char*)"ClearIterators", PyvtkLabelHierarchyCompositeIterator_ClearIterators, METH_VARARGS,
   (char*)"V.ClearIterators()\nC++: virtual void ClearIterators()\n\nRemove all iterators from this composite iterator.\n"},
  {(char*)"Begin", PyvtkLabelHierarchyCompositeIterator_Begin, METH_VARARGS,
   (char*)"V.Begin(vtkIdTypeArray)\nC++: virtual void Begin(vtkIdTypeArray *)\n\nInitializes the iterator. lastLabels is an array holding labels\nwhich should be traversed before any other labels in the\nhierarchy. This could include labels placed during a previous\nrendering or a label located under the mouse pointer. You may\npass a null pointer.\n"},
  {(char*)"Next", PyvtkLabelHierarchyCompositeIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nAdvance the iterator.\n"},
  {(char*)"IsAtEnd", PyvtkLabelHierarchyCompositeIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> bool\nC++: virtual bool IsAtEnd()\n\nReturns true if the iterator is at the end.\n"},
  {(char*)"GetLabelId", PyvtkLabelHierarchyCompositeIterator_GetLabelId, METH_VARARGS,
   (char*)"V.GetLabelId() -> int\nC++: virtual vtkIdType GetLabelId()\n\nRetrieves the current label id.\n"},
  {(char*)"GetHierarchy", PyvtkLabelHierarchyCompositeIterator_GetHierarchy, METH_VARARGS,
   (char*)"V.GetHierarchy() -> vtkLabelHierarchy\nC++: virtual vtkLabelHierarchy *GetHierarchy()\n\nRetrieve the current label hierarchy.\n"},
  {(char*)"GetNodeGeometry", PyvtkLabelHierarchyCompositeIterator_GetNodeGeometry, METH_VARARGS,
   (char*)"V.GetNodeGeometry([float, float, float], float)\nC++: virtual void GetNodeGeometry(double ctr[3], double &size)\n\nRetrieve the coordinates of the center of the current hierarchy\nnode and the size of the node. Nodes are n-cubes, so the size is\nthe length of any edge of the cube. This is used by BoxNode().\n"},
  {(char*)"BoxNode", PyvtkLabelHierarchyCompositeIterator_BoxNode, METH_VARARGS,
   (char*)"V.BoxNode()\nC++: virtual void BoxNode()\n\nNot implemented.\n"},
  {(char*)"BoxAllNodes", PyvtkLabelHierarchyCompositeIterator_BoxAllNodes, METH_VARARGS,
   (char*)"V.BoxAllNodes(vtkPolyData)\nC++: virtual void BoxAllNodes(vtkPolyData *)\n\nNot implemented.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelHierarchyCompositeIterator_StaticNew()
{
  return vtkLabelHierarchyCompositeIterator::New();
}

PyObject *PyVTKClass_vtkLabelHierarchyCompositeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelHierarchyCompositeIterator_StaticNew,
    PyvtkLabelHierarchyCompositeIterator_Methods,
    "vtkLabelHierarchyCompositeIterator", modulename,
    NULL, NULL,
    PyvtkLabelHierarchyCompositeIterator_Doc(),
    PyVTKClass_vtkLabelHierarchyIteratorNew(modulename));
  return cls;
}

const char **PyvtkLabelHierarchyCompositeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkLabelHierarchyCompositeIterator - Iterator over sub-iterators\n\n",
    "Superclass: vtkLabelHierarchyIterator\n\n",
    "Iterates over child iterators in a round-robin order. Each iterator\nmay have its own count, which is the number of times it is repeated\nuntil moving to the next iterator.\n\nFor example, if you initialize the iterator with\n\nit->AddIterator(A, 1); it->AddIterator(B, 3);  The order of iterators\nwill be A,B,B,B,A,B,B,B,...\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelHierarchyCompositeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelHierarchyCompositeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelHierarchyCompositeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

