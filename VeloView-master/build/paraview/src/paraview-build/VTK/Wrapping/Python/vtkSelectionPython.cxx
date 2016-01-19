// python wrapper for vtkSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkSelection_Doc();


static PyObject *
PyvtkSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelection::NewInstance());

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
PyvtkSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelection *tempr = vtkSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSelection::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkSelection::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkSelection::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->GetNode(temp0) :
      op->vtkSelection::GetNode(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->AddNode(temp0);
      }
    else
      {
      op->vtkSelection::AddNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_RemoveNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveNode(temp0);
      }
    else
      {
      op->vtkSelection::RemoveNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->RemoveNode(temp0);
      }
    else
      {
      op->vtkSelection::RemoveNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_RemoveNode_Methods[] = {
  {NULL, PyvtkSelection_RemoveNode_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSelection_RemoveNode_s2, METH_VARARGS,
   (char*)"@O *vtkSelectionNode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_RemoveNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_RemoveNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveNode");
  return NULL;
}



static PyObject *
PyvtkSelection_RemoveAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllNodes();
      }
    else
      {
      op->vtkSelection::RemoveAllNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkSelection::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkSelection::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Union_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->Union(temp0);
      }
    else
      {
      op->vtkSelection::Union(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_Union_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->Union(temp0);
      }
    else
      {
      op->vtkSelection::Union(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_Union_Methods[] = {
  {NULL, PyvtkSelection_Union_s1, METH_VARARGS,
   (char*)"@O *vtkSelection"},
  {NULL, PyvtkSelection_Union_s2, METH_VARARGS,
   (char*)"@O *vtkSelectionNode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_Union(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Union_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Union");
  return NULL;
}



static PyObject *
PyvtkSelection_Subtract_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->Subtract(temp0);
      }
    else
      {
      op->vtkSelection::Subtract(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_Subtract_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->Subtract(temp0);
      }
    else
      {
      op->vtkSelection::Subtract(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_Subtract_Methods[] = {
  {NULL, PyvtkSelection_Subtract_s1, METH_VARARGS,
   (char*)"@O *vtkSelection"},
  {NULL, PyvtkSelection_Subtract_s2, METH_VARARGS,
   (char*)"@O *vtkSelectionNode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_Subtract(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Subtract_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Subtract");
  return NULL;
}



static PyObject *
PyvtkSelection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelection::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dump();
      }
    else
      {
      op->vtkSelection::Dump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkSelection *tempr = vtkSelection::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkSelection *tempr = vtkSelection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_GetData_Methods[] = {
  {NULL, PyvtkSelection_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkSelection_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSelection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelection\nC++: vtkSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelection\nC++: vtkSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSelection_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"GetDataObjectType", PyvtkSelection_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturns VTK_SELECTION enumeration value.\n"},
  {(char*)"GetNumberOfNodes", PyvtkSelection_GetNumberOfNodes, METH_VARARGS,
   (char*)"V.GetNumberOfNodes() -> int\nC++: unsigned int GetNumberOfNodes()\n\nReturns the number of nodes in this selection. Each node contains\ninformation about part of the selection.\n"},
  {(char*)"GetNode", PyvtkSelection_GetNode, METH_VARARGS,
   (char*)"V.GetNode(int) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(unsigned int idx)\n\nReturns a node given it's index. Performs bound checking and will\nreturn 0 if out-of-bounds.\n"},
  {(char*)"AddNode", PyvtkSelection_AddNode, METH_VARARGS,
   (char*)"V.AddNode(vtkSelectionNode)\nC++: virtual void AddNode(vtkSelectionNode *)\n\nAdds a selection node.\n"},
  {(char*)"RemoveNode", PyvtkSelection_RemoveNode, METH_VARARGS,
   (char*)"V.RemoveNode(int)\nC++: virtual void RemoveNode(unsigned int idx)\nV.RemoveNode(vtkSelectionNode)\nC++: virtual void RemoveNode(vtkSelectionNode *)\n\nRemoves a selection node.\n"},
  {(char*)"RemoveAllNodes", PyvtkSelection_RemoveAllNodes, METH_VARARGS,
   (char*)"V.RemoveAllNodes()\nC++: virtual void RemoveAllNodes()\n\nRemoves a selection node.\n"},
  {(char*)"DeepCopy", PyvtkSelection_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nCopy selection nodes of the input.\n"},
  {(char*)"ShallowCopy", PyvtkSelection_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nCopy selection nodes of the input. This is a shallow copy:\nselection lists and pointers in the properties are passed by\nreference.\n"},
  {(char*)"Union", PyvtkSelection_Union, METH_VARARGS,
   (char*)"V.Union(vtkSelection)\nC++: virtual void Union(vtkSelection *selection)\nV.Union(vtkSelectionNode)\nC++: virtual void Union(vtkSelectionNode *node)\n\nUnion this selection with the specified selection. Attempts to\nreuse selection nodes in this selection if properties match\nexactly. Otherwise, creates new selection nodes.\n"},
  {(char*)"Subtract", PyvtkSelection_Subtract, METH_VARARGS,
   (char*)"V.Subtract(vtkSelection)\nC++: virtual void Subtract(vtkSelection *selection)\nV.Subtract(vtkSelectionNode)\nC++: virtual void Subtract(vtkSelectionNode *node)\n\nRemove the nodes from the specified selection from this\nselection. Assumes that selection node internal arrays are\nvtkIdTypeArrays.\n"},
  {(char*)"GetMTime", PyvtkSelection_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the properties\n"},
  {(char*)"Dump", PyvtkSelection_Dump, METH_VARARGS,
   (char*)"V.Dump()\nC++: virtual void Dump()\n\nDumps the contents of the selection, giving basic information\nonly.\n"},
  {(char*)"GetData", PyvtkSelection_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkSelection stored inside an invormation object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelection_StaticNew()
{
  return vtkSelection::New();
}

PyObject *PyVTKClass_vtkSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelection_StaticNew,
    PyvtkSelection_Methods,
    "vtkSelection", modulename,
    NULL, NULL,
    PyvtkSelection_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkSelection_Doc()
{
  static const char *docstring[] = {
    "vtkSelection - A node in a selection tree. Used to store selection\nresults.\n\n",
    "Superclass: vtkDataObject\n\n",
    "See Also:\n\nvtkSelectionNode\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

