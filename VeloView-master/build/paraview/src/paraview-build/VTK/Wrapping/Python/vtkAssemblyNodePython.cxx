// python wrapper for vtkAssemblyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAssemblyNode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAssemblyNode(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAssemblyNodeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAssemblyNode_Doc();


static PyObject *
PyvtkAssemblyNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAssemblyNode::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyNode::NewInstance());

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
PyvtkAssemblyNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAssemblyNode *tempr = vtkAssemblyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetViewProp(temp0);
      }
    else
      {
      op->vtkAssemblyNode::SetViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkAssemblyNode::GetViewProp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkAssemblyNode::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkAssemblyNode::GetMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyNode::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAssemblyNode_Methods[] = {
  {(char*)"GetClassName", PyvtkAssemblyNode_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssemblyNode_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssemblyNode_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAssemblyNode\nC++: vtkAssemblyNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssemblyNode_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssemblyNode\nC++: vtkAssemblyNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewProp", PyvtkAssemblyNode_SetViewProp, METH_VARARGS,
   (char*)"V.SetViewProp(vtkProp)\nC++: virtual void SetViewProp(vtkProp *prop)\n\nSet/Get the prop that this assembly node refers to.\n"},
  {(char*)"GetViewProp", PyvtkAssemblyNode_GetViewProp, METH_VARARGS,
   (char*)"V.GetViewProp() -> vtkProp\nC++: vtkProp *GetViewProp()\n\nSet/Get the prop that this assembly node refers to.\n"},
  {(char*)"SetMatrix", PyvtkAssemblyNode_SetMatrix, METH_VARARGS,
   (char*)"V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {(char*)"GetMatrix", PyvtkAssemblyNode_GetMatrix, METH_VARARGS,
   (char*)"V.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix()\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {(char*)"GetMTime", PyvtkAssemblyNode_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride the standard GetMTime() to check for the modified times\nof the prop and matrix.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssemblyNode_StaticNew()
{
  return vtkAssemblyNode::New();
}

PyObject *PyVTKClass_vtkAssemblyNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssemblyNode_StaticNew,
    PyvtkAssemblyNode_Methods,
    "vtkAssemblyNode", modulename,
    NULL, NULL,
    PyvtkAssemblyNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAssemblyNode_Doc()
{
  static const char *docstring[] = {
    "vtkAssemblyNode - represent a node in an assembly\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAssemblyNode represents a node in an assembly. It is used by\nvtkAssemblyPath to create hierarchical assemblies of props. The props\ncan be either 2D or 3D.\n\nAn assembly node refers to a vtkProp, and possibly a vtkMatrix4x4.\nNodes are used by vtkAssemblyPath to build fully evaluated path\n(matrices are concatenated through the path) that is used by picking\nand other operations involving assemblies",
    ".\n\nCaveats:\n\nThe assembly node is guaranteed to contain a reference to an instance\nof vtkMatrix4x4 if the prop referred to by the node is of type\nvtkProp3D (or subclass). The matrix is evaluated through the assembly\npath, so the assembly node's matrix is a function of its location in\nthe vtkAssemblyPath.\n\nvtkAssemblyNode does not reference count its association with\nvtkProp. Therefore, do not crea",
    "te an assembly node, associate a prop\nwith it, delete the prop, and then try to dereference the prop. The\nprogram will break! (Reason: vtkAssemblyPath (which uses\nvtkAssemblyNode) create self-referencing loops that destroy reference\ncounting.)\n\nSee Also:\n\nvtkAssemblyPath vtkProp vtkPicker vtkMatrix4x4\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssemblyNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssemblyNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

