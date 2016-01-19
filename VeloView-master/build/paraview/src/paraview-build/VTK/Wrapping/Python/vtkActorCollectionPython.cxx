// python wrapper for vtkActorCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkActorCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkActorCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkActorCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropCollectionNew
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropCollectionNew
#endif

static const char **PyvtkActorCollection_Doc();


static PyObject *
PyvtkActorCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkActorCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActorCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActorCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActorCollection::NewInstance());

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
PyvtkActorCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkActorCollection *tempr = vtkActorCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  vtkActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkActorCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_GetNextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetNextActor() :
      op->vtkActorCollection::GetNextActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_GetLastActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetLastActor() :
      op->vtkActorCollection::GetLastActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkActorCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkActorCollection::GetLastItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActorCollection_ApplyProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->ApplyProperties(temp0);
      }
    else
      {
      op->vtkActorCollection::ApplyProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkActorCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkActorCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkActorCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkActorCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkActorCollection\nC++: vtkActorCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkActorCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkActorCollection\nC++: vtkActorCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkActorCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkActor)\nC++: void AddItem(vtkActor *a)\n\nAdd an actor to the list.\n"},
  {(char*)"GetNextActor", PyvtkActorCollection_GetNextActor, METH_VARARGS,
   (char*)"V.GetNextActor() -> vtkActor\nC++: vtkActor *GetNextActor()\n\nGet the next actor in the list.\n"},
  {(char*)"GetLastActor", PyvtkActorCollection_GetLastActor, METH_VARARGS,
   (char*)"V.GetLastActor() -> vtkActor\nC++: vtkActor *GetLastActor()\n\nGet the last actor in the list.\n"},
  {(char*)"GetNextItem", PyvtkActorCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkActor\nC++: vtkActor *GetNextItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor(), GetLastActor()\nvariants where possible.\n"},
  {(char*)"GetLastItem", PyvtkActorCollection_GetLastItem, METH_VARARGS,
   (char*)"V.GetLastItem() -> vtkActor\nC++: vtkActor *GetLastItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor(), GetLastActor()\nvariants where possible.\n"},
  {(char*)"ApplyProperties", PyvtkActorCollection_ApplyProperties, METH_VARARGS,
   (char*)"V.ApplyProperties(vtkProperty)\nC++: void ApplyProperties(vtkProperty *p)\n\nApply properties to all actors in this collection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkActorCollection_StaticNew()
{
  return vtkActorCollection::New();
}

PyObject *PyVTKClass_vtkActorCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkActorCollection_StaticNew,
    PyvtkActorCollection_Methods,
    "vtkActorCollection", modulename,
    NULL, NULL,
    PyvtkActorCollection_Doc(),
    PyVTKClass_vtkPropCollectionNew(modulename));
  return cls;
}

const char **PyvtkActorCollection_Doc()
{
  static const char *docstring[] = {
    "vtkActorCollection - a list of actors\n\n",
    "Superclass: vtkPropCollection\n\n",
    "vtkActorCollection represents and provides methods to manipulate a\nlist of actors (i.e., vtkActor and subclasses). The list is unsorted\nand duplicate entries are not prevented.\n\nSee Also:\n\nvtkActor vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkActorCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkActorCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkActorCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

