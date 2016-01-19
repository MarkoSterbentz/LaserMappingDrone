// python wrapper for vtkGarbageCollector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGarbageCollector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGarbageCollector(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGarbageCollectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGarbageCollector_Doc();


static PyObject *
PyvtkGarbageCollector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGarbageCollector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGarbageCollector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGarbageCollector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGarbageCollector::NewInstance());

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
PyvtkGarbageCollector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGarbageCollector *tempr = vtkGarbageCollector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_Collect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Collect");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkGarbageCollector::Collect();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGarbageCollector_Collect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Collect");

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    vtkGarbageCollector::Collect(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGarbageCollector_Collect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkGarbageCollector_Collect_s1(self, args);
    case 1:
      return PyvtkGarbageCollector_Collect_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Collect");
  return NULL;
}



static PyObject *
PyvtkGarbageCollector_DeferredCollectionPush(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeferredCollectionPush");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkGarbageCollector::DeferredCollectionPush();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_DeferredCollectionPop(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeferredCollectionPop");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkGarbageCollector::DeferredCollectionPop();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_SetGlobalDebugFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalDebugFlag");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGarbageCollector::SetGlobalDebugFlag(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGarbageCollector_GetGlobalDebugFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalDebugFlag");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkGarbageCollector::GetGlobalDebugFlag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGarbageCollector_Methods[] = {
  {(char*)"GetClassName", PyvtkGarbageCollector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGarbageCollector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGarbageCollector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGarbageCollector\nC++: vtkGarbageCollector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGarbageCollector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGarbageCollector\nC++: vtkGarbageCollector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Collect", PyvtkGarbageCollector_Collect, METH_VARARGS | METH_STATIC,
   (char*)"V.Collect()\nC++: static void Collect()\nV.Collect(vtkObjectBase)\nC++: static void Collect(vtkObjectBase *root)\n\nCollect immediately using any objects whose collection was\npreviously deferred as a root for the reference graph walk.\nStrongly connected components in the reference graph are\nidentified.  Those with a net reference count of zero are\ndeleted.  When a component is deleted it may remove references to\nother components that are not part of the same reference loop but\nare held by objects in the original component.  These removed\nreferences are handled as any other and their corresponding\nchecks may be deferred.  This method keeps collecting until no\ndeferred collection checks remain.\n"},
  {(char*)"DeferredCollectionPush", PyvtkGarbageCollector_DeferredCollectionPush, METH_VARARGS | METH_STATIC,
   (char*)"V.DeferredCollectionPush()\nC++: static void DeferredCollectionPush()\n\nPush/Pop whether to do deferred collection.  Whenever the total\nnumber of pushes exceeds the total number of pops collection will\nbe deferred.  Code can call the Collect method directly to force\ncollection.\n"},
  {(char*)"DeferredCollectionPop", PyvtkGarbageCollector_DeferredCollectionPop, METH_VARARGS | METH_STATIC,
   (char*)"V.DeferredCollectionPop()\nC++: static void DeferredCollectionPop()\n\nPush/Pop whether to do deferred collection.  Whenever the total\nnumber of pushes exceeds the total number of pops collection will\nbe deferred.  Code can call the Collect method directly to force\ncollection.\n"},
  {(char*)"SetGlobalDebugFlag", PyvtkGarbageCollector_SetGlobalDebugFlag, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalDebugFlag(int)\nC++: static void SetGlobalDebugFlag(int flag)\n\nSet/Get global garbage collection debugging flag.  When set to 1,\nall garbage collection checks will produce debugging information.\n"},
  {(char*)"GetGlobalDebugFlag", PyvtkGarbageCollector_GetGlobalDebugFlag, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalDebugFlag() -> int\nC++: static int GetGlobalDebugFlag()\n\nSet/Get global garbage collection debugging flag.  When set to 1,\nall garbage collection checks will produce debugging information.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGarbageCollector_StaticNew()
{
  return vtkGarbageCollector::New();
}

PyObject *PyVTKClass_vtkGarbageCollectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGarbageCollector_StaticNew,
    PyvtkGarbageCollector_Methods,
    "vtkGarbageCollector", modulename,
    NULL, NULL,
    PyvtkGarbageCollector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGarbageCollector_Doc()
{
  static const char *docstring[] = {
    "vtkGarbageCollector - Detect and break reference loops\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGarbageCollector is used by VTK classes that may be involved in\nreference counting loops (such as Algorithm <-> Executive).  It\ndetects strongly connected components of the reference graph that\nhave been leaked deletes them.  The garbage collector uses the\nReportReferences method to search the reference graph and construct a\nnet reference count for each connected component.  If the net\nreferenc",
    "e count is zero the entire set of objects is deleted.\nDeleting each component may leak other components, which are then\ncollected recursively.\n\nTo enable garbage collection for a class, add these members:\n\npublic:\n  virtual void Register(vtkObjectBase* o)\n    {\n    this->RegisterInternal(o, 1);\n    }\n  virtual void UnRegister(vtkObjectBase* o)\n    {\n    this->UnRegisterInternal(o, 1);\n    }\n\n\n pro",
    "tected:\n\n\n  virtual void ReportReferences(vtkGarbageCollector* collector)\n    {\n    // Report references held by this object that may be in a loop.\n    this->Superclass::ReportReferences(collector);\n    vtkGarbageCollectorReport(collector, this->OtherObject, \"Other\nObject\");\n    }\n\nThe implementations should be in the .cxx file in practice. It is\nimportant that the reference be reported using the ",
    "real pointer or\nsmart pointer instance that holds the reference.  When collecting the\ngarbage collector will actually set this pointer to NULL.  The\ndestructor of the class should be written to deal with this.  It is\nalso expected that an invariant is maintained for any reference that\nis reported.  The variable holding the reference must always either\nbe NULL or refer to a fully constructed valid ",
    "object.  Therefore code\nlike \"this->Object->UnRegister(this)\" must be avoided if\n\"this->Object\" is a reported reference because it is possible that\nthe object is deleted before UnRegister returns but then\n\"this->Object\" will be left as a dangling pointer.  Instead use code\nlike\n\nvtkObjectBase* obj = this->Object;\n  this->Object = 0;\n  obj->UnRegister(this);\n\nso that the reported reference maintain",
    "s the invariant.\n\nIf subclassing from a class that already supports garbage collection,\none need only provide the ReportReferences method.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGarbageCollector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGarbageCollectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGarbageCollector", o) != 0)
    {
    Py_DECREF(o);
    }

}

