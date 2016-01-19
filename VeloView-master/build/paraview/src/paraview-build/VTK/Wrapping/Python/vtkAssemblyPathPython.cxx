// python wrapper for vtkAssemblyPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAssemblyPath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAssemblyPath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAssemblyPathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkAssemblyPath_Doc();


static PyObject *
PyvtkAssemblyPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAssemblyPath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyPath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyPath::NewInstance());

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
PyvtkAssemblyPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAssemblyPath *tempr = vtkAssemblyPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkProp *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->AddNode(temp0, temp1);
      }
    else
      {
      op->vtkAssemblyPath::AddNode(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetNextNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetNextNode() :
      op->vtkAssemblyPath::GetNextNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetFirstNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetFirstNode() :
      op->vtkAssemblyPath::GetFirstNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetLastNode() :
      op->vtkAssemblyPath::GetLastNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteLastNode();
      }
    else
      {
      op->vtkAssemblyPath::DeleteLastNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAssemblyPath::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyPath::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAssemblyPath_Methods[] = {
  {(char*)"GetClassName", PyvtkAssemblyPath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssemblyPath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssemblyPath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAssemblyPath\nC++: vtkAssemblyPath *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssemblyPath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssemblyPath\nC++: vtkAssemblyPath *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddNode", PyvtkAssemblyPath_AddNode, METH_VARARGS,
   (char*)"V.AddNode(vtkProp, vtkMatrix4x4)\nC++: void AddNode(vtkProp *p, vtkMatrix4x4 *m)\n\nConvenience method adds a prop and matrix together, creating an\nassembly node transparently. The matrix pointer m may be NULL.\nNote: that matrix is the one, if any, associated with the prop.\n"},
  {(char*)"GetNextNode", PyvtkAssemblyPath_GetNextNode, METH_VARARGS,
   (char*)"V.GetNextNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetNextNode()\n\nGet the next assembly node in the list. The node returned\ncontains a pointer to a prop and a 4x4 matrix. The matrix is\nevaluated based on the preceding assembly hierarchy (i.e., the\nmatrix is not necessarily as the same as the one that was added\nwith AddNode() because of the concatenation of matrices in the\nassembly hierarchy).\n"},
  {(char*)"GetFirstNode", PyvtkAssemblyPath_GetFirstNode, METH_VARARGS,
   (char*)"V.GetFirstNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetFirstNode()\n\nGet the first assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node. (Note:\nThis node corresponds to the vtkProp associated with the\nvtkRenderer.\n"},
  {(char*)"GetLastNode", PyvtkAssemblyPath_GetLastNode, METH_VARARGS,
   (char*)"V.GetLastNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetLastNode()\n\nGet the last assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node.\n"},
  {(char*)"DeleteLastNode", PyvtkAssemblyPath_DeleteLastNode, METH_VARARGS,
   (char*)"V.DeleteLastNode()\nC++: void DeleteLastNode()\n\nDelete the last assembly node in the list. This is like a stack\npop.\n"},
  {(char*)"ShallowCopy", PyvtkAssemblyPath_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkAssemblyPath)\nC++: void ShallowCopy(vtkAssemblyPath *path)\n\nPerform a shallow copy (reference counted) on the incoming path.\n"},
  {(char*)"GetMTime", PyvtkAssemblyPath_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride the standard GetMTime() to check for the modified times\nof the nodes in this path.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssemblyPath_StaticNew()
{
  return vtkAssemblyPath::New();
}

PyObject *PyVTKClass_vtkAssemblyPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssemblyPath_StaticNew,
    PyvtkAssemblyPath_Methods,
    "vtkAssemblyPath", modulename,
    NULL, NULL,
    PyvtkAssemblyPath_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkAssemblyPath_Doc()
{
  static const char *docstring[] = {
    "vtkAssemblyPath - a list of nodes that form an assembly path\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkAssemblyPath represents an ordered list of assembly nodes that\nrepresent a fully evaluated assembly path. This class is used\nprimarily for picking. Note that the use of this class is to add one\nor more assembly nodes to form the path. (An assembly node consists\nof an instance of vtkProp and vtkMatrix4x4, the matrix may be NULL.)\nAs each node is added, the matrices are concatenated to create a\nf",
    "inal, evaluated matrix.\n\nSee Also:\n\nvtkAssemblyNode vtkAssembly vtkActor vtkMatrix4x4 vtkProp\nvtkAbstractPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssemblyPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssemblyPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

