// python wrapper for vtkActor2DCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkActor2DCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkActor2DCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkActor2DCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropCollectionNew
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropCollectionNew
#endif

static const char **PyvtkActor2DCollection_Doc();


static PyObject *
PyvtkActor2DCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkActor2DCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor2DCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2DCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor2DCollection::NewInstance());

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
PyvtkActor2DCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkActor2DCollection *tempr = vtkActor2DCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Sort();
      }
    else
      {
      op->vtkActor2DCollection::Sort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkActor2DCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
    {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkActor2DCollection::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextActor2D() :
      op->vtkActor2DCollection::GetNextActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastActor2D() :
      op->vtkActor2DCollection::GetLastActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkActor2DCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkActor2DCollection::GetLastItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2DCollection_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0);
      }
    else
      {
      op->vtkActor2DCollection::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkActor2DCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkActor2DCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkActor2DCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkActor2DCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkActor2DCollection\nC++: vtkActor2DCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkActor2DCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkActor2DCollection\nC++: vtkActor2DCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Sort", PyvtkActor2DCollection_Sort, METH_VARARGS,
   (char*)"V.Sort()\nC++: void Sort()\n\nSorts the vtkActor2DCollection by layer number.  Smaller layer\nnumbers are first.  Layer numbers can be any integer value.\n"},
  {(char*)"AddItem", PyvtkActor2DCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkActor2D)\nC++: void AddItem(vtkActor2D *a)\n\nAdd an actor to the list.  The new actor is inserted in the list\naccording to it's layer number.\n"},
  {(char*)"IsItemPresent", PyvtkActor2DCollection_IsItemPresent, METH_VARARGS,
   (char*)"V.IsItemPresent(vtkActor2D) -> int\nC++: int IsItemPresent(vtkActor2D *a)\n\nStandard Collection methods\n"},
  {(char*)"GetNextActor2D", PyvtkActor2DCollection_GetNextActor2D, METH_VARARGS,
   (char*)"V.GetNextActor2D() -> vtkActor2D\nC++: vtkActor2D *GetNextActor2D()\n\nStandard Collection methods\n"},
  {(char*)"GetLastActor2D", PyvtkActor2DCollection_GetLastActor2D, METH_VARARGS,
   (char*)"V.GetLastActor2D() -> vtkActor2D\nC++: vtkActor2D *GetLastActor2D()\n\nStandard Collection methods\n"},
  {(char*)"GetNextItem", PyvtkActor2DCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkActor2D\nC++: vtkActor2D *GetNextItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor2D(),\nGetLastActor2D() variants where possible.\n"},
  {(char*)"GetLastItem", PyvtkActor2DCollection_GetLastItem, METH_VARARGS,
   (char*)"V.GetLastItem() -> vtkActor2D\nC++: vtkActor2D *GetLastItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor2D(),\nGetLastActor2D() variants where possible.\n"},
  {(char*)"RenderOverlay", PyvtkActor2DCollection_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport)\nC++: void RenderOverlay(vtkViewport *viewport)\n\nSort and then render the collection of 2D actors.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkActor2DCollection_StaticNew()
{
  return vtkActor2DCollection::New();
}

PyObject *PyVTKClass_vtkActor2DCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkActor2DCollection_StaticNew,
    PyvtkActor2DCollection_Methods,
    "vtkActor2DCollection", modulename,
    NULL, NULL,
    PyvtkActor2DCollection_Doc(),
    PyVTKClass_vtkPropCollectionNew(modulename));
  return cls;
}

const char **PyvtkActor2DCollection_Doc()
{
  static const char *docstring[] = {
    "vtkActor2DCollection -  a list of 2D actors\n\n",
    "Superclass: vtkPropCollection\n\n",
    "vtkActor2DCollection is a subclass of vtkCollection. \nvtkActor2DCollection maintains a collection of vtkActor2D objects\nthat is sorted by layer number, with lower layer numbers at the start\nof the list.  This allows the vtkActor2D objects to be rendered in\nthe correct order.\n\nSee Also:\n\nvtkActor2D vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkActor2DCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkActor2DCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkActor2DCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

