// python wrapper for vtkEquivalenceSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEquivalenceSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEquivalenceSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEquivalenceSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEquivalenceSet_Doc();


static PyObject *
PyvtkEquivalenceSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEquivalenceSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEquivalenceSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEquivalenceSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEquivalenceSet::NewInstance());

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
PyvtkEquivalenceSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEquivalenceSet *tempr = vtkEquivalenceSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkEquivalenceSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_AddEquivalence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEquivalence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddEquivalence(temp0, temp1);
      }
    else
      {
      op->vtkEquivalenceSet::AddEquivalence(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetNumberOfMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMembers() :
      op->vtkEquivalenceSet::GetNumberOfMembers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetNumberOfResolvedSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfResolvedSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfResolvedSets() :
      op->vtkEquivalenceSet::GetNumberOfResolvedSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetEquivalentSetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEquivalentSetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEquivalentSetId(temp0) :
      op->vtkEquivalenceSet::GetEquivalentSetId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_ResolveEquivalences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResolveEquivalences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ResolveEquivalences() :
      op->vtkEquivalenceSet::ResolveEquivalences());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  vtkEquivalenceSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEquivalenceSet"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkEquivalenceSet::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPointer() :
      op->vtkEquivalenceSet::GetPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkEquivalenceSet::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_Capacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Capacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->Capacity() :
      op->vtkEquivalenceSet::Capacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReference(temp0) :
      op->vtkEquivalenceSet::GetReference(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEquivalenceSet_Methods[] = {
  {(char*)"GetClassName", PyvtkEquivalenceSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEquivalenceSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEquivalenceSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEquivalenceSet\nC++: vtkEquivalenceSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEquivalenceSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEquivalenceSet\nC++: vtkEquivalenceSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkEquivalenceSet_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"AddEquivalence", PyvtkEquivalenceSet_AddEquivalence, METH_VARARGS,
   (char*)"V.AddEquivalence(int, int)\nC++: void AddEquivalence(int id1, int id2)\n\n"},
  {(char*)"GetNumberOfMembers", PyvtkEquivalenceSet_GetNumberOfMembers, METH_VARARGS,
   (char*)"V.GetNumberOfMembers() -> int\nC++: int GetNumberOfMembers()\n\n"},
  {(char*)"GetNumberOfResolvedSets", PyvtkEquivalenceSet_GetNumberOfResolvedSets, METH_VARARGS,
   (char*)"V.GetNumberOfResolvedSets() -> int\nC++: int GetNumberOfResolvedSets()\n\n"},
  {(char*)"GetEquivalentSetId", PyvtkEquivalenceSet_GetEquivalentSetId, METH_VARARGS,
   (char*)"V.GetEquivalentSetId(int) -> int\nC++: int GetEquivalentSetId(int memberId)\n\n"},
  {(char*)"ResolveEquivalences", PyvtkEquivalenceSet_ResolveEquivalences, METH_VARARGS,
   (char*)"V.ResolveEquivalences() -> int\nC++: virtual int ResolveEquivalences()\n\n"},
  {(char*)"DeepCopy", PyvtkEquivalenceSet_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkEquivalenceSet)\nC++: void DeepCopy(vtkEquivalenceSet *in)\n\n"},
  {(char*)"GetPointer", PyvtkEquivalenceSet_GetPointer, METH_VARARGS,
   (char*)"V.GetPointer() -> (int, ...)\nC++: int *GetPointer()\n\n"},
  {(char*)"Squeeze", PyvtkEquivalenceSet_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\n"},
  {(char*)"Capacity", PyvtkEquivalenceSet_Capacity, METH_VARARGS,
   (char*)"V.Capacity() -> int\nC++: vtkIdType Capacity()\n\n"},
  {(char*)"GetReference", PyvtkEquivalenceSet_GetReference, METH_VARARGS,
   (char*)"V.GetReference(int) -> int\nC++: int GetReference(int memberId)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEquivalenceSet_StaticNew()
{
  return vtkEquivalenceSet::New();
}

PyObject *PyVTKClass_vtkEquivalenceSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEquivalenceSet_StaticNew,
    PyvtkEquivalenceSet_Methods,
    "vtkEquivalenceSet", modulename,
    NULL, NULL,
    PyvtkEquivalenceSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEquivalenceSet_Doc()
{
  static const char *docstring[] = {
    "vtkEquivalenceSet - records groups of integers that are equivalent.\n\n",
    "Superclass: vtkObject\n\n",
    "Useful for connectivity on multiple processes.  Run connectivity on\neach processes, then make touching fragments equivalent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEquivalenceSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEquivalenceSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEquivalenceSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

