// python wrapper for vtkPVProxyDefinitionIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVProxyDefinitionIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVProxyDefinitionIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVProxyDefinitionIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVProxyDefinitionIterator_Doc();


static PyObject *
PyvtkPVProxyDefinitionIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVProxyDefinitionIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProxyDefinitionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProxyDefinitionIterator::NewInstance());

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
PyvtkPVProxyDefinitionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVProxyDefinitionIterator *tempr = vtkPVProxyDefinitionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->GoToFirstItem();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkPVProxyDefinitionIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->GoToNextItem();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GoToNextGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->GoToNextGroup();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_AddTraversalGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTraversalGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->AddTraversalGroupName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    const char *tempr = op->GetGroupName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    const char *tempr = op->GetProxyName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsCustom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCustom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsCustom() :
      op->vtkPVProxyDefinitionIterator::IsCustom());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = op->GetProxyDefinition();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = op->GetProxyHints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVProxyDefinitionIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVProxyDefinitionIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVProxyDefinitionIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVProxyDefinitionIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVProxyDefinitionIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GoToFirstItem", PyvtkPVProxyDefinitionIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning.\n"},
  {(char*)"InitTraversal", PyvtkPVProxyDefinitionIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\nReset the iterator and move it to the head.\n"},
  {(char*)"GoToNextItem", PyvtkPVProxyDefinitionIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item. This will also move to next\ngroup automatically if needed.\n"},
  {(char*)"GoToNextGroup", PyvtkPVProxyDefinitionIterator_GoToNextGroup, METH_VARARGS,
   (char*)"V.GoToNextGroup()\nC++: virtual void GoToNextGroup()\n\nMove the iterator to the next group.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkPVProxyDefinitionIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nTest whether the iterator is currently pointing to a valid item.\n"},
  {(char*)"AddTraversalGroupName", PyvtkPVProxyDefinitionIterator_AddTraversalGroupName, METH_VARARGS,
   (char*)"V.AddTraversalGroupName(string)\nC++: virtual void AddTraversalGroupName(const char *groupName)\n\n"},
  {(char*)"GetGroupName", PyvtkPVProxyDefinitionIterator_GetGroupName, METH_VARARGS,
   (char*)"V.GetGroupName() -> string\nC++: virtual const char *GetGroupName()\n\n"},
  {(char*)"GetProxyName", PyvtkPVProxyDefinitionIterator_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName() -> string\nC++: virtual const char *GetProxyName()\n\n"},
  {(char*)"IsCustom", PyvtkPVProxyDefinitionIterator_IsCustom, METH_VARARGS,
   (char*)"V.IsCustom() -> bool\nC++: virtual bool IsCustom()\n\n"},
  {(char*)"GetProxyDefinition", PyvtkPVProxyDefinitionIterator_GetProxyDefinition, METH_VARARGS,
   (char*)"V.GetProxyDefinition() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetProxyDefinition()\n\n"},
  {(char*)"GetProxyHints", PyvtkPVProxyDefinitionIterator_GetProxyHints, METH_VARARGS,
   (char*)"V.GetProxyHints() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetProxyHints()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVProxyDefinitionIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVProxyDefinitionIterator_Methods,
    "vtkPVProxyDefinitionIterator", modulename,
    NULL, NULL,
    PyvtkPVProxyDefinitionIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVProxyDefinitionIterator_Doc()
{
  static const char *docstring[] = {
    "vtkPVProxyDefinitionIterator - iterates over all proxy definitions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVProxyDefinitionIterator iterates over all proxy definitions\nknown to the proxy manager. The iterator allow to filter the\niteration on a subset of group and/or on the global or custom\nproxies. Custom and Compound proxy are exactly the same thing. We\nshould stick with only one name.\n\nSee Also:\n\nvtkSMProxyManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVProxyDefinitionIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVProxyDefinitionIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVProxyDefinitionIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

