// python wrapper for vtkPlaneCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkPlaneCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlaneCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlaneCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkPlaneCollection_Doc();


static PyObject *
PyvtkPlaneCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlaneCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneCollection::NewInstance());

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
PyvtkPlaneCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlaneCollection *tempr = vtkPlaneCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkPlaneCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkPlaneCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkPlaneCollection::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaneCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaneCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlaneCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlaneCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlaneCollection\nC++: vtkPlaneCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlaneCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaneCollection\nC++: vtkPlaneCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkPlaneCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkPlane)\nC++: void AddItem(vtkPlane *)\n\nAdd a plane to the list.\n"},
  {(char*)"GetNextItem", PyvtkPlaneCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkPlane\nC++: vtkPlane *GetNextItem()\n\nGet the next plane in the list.\n"},
  {(char*)"GetItem", PyvtkPlaneCollection_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkPlane\nC++: vtkPlane *GetItem(int i)\n\nGet the ith plane in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaneCollection_StaticNew()
{
  return vtkPlaneCollection::New();
}

PyObject *PyVTKClass_vtkPlaneCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaneCollection_StaticNew,
    PyvtkPlaneCollection_Methods,
    "vtkPlaneCollection", modulename,
    NULL, NULL,
    PyvtkPlaneCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkPlaneCollection_Doc()
{
  static const char *docstring[] = {
    "vtkPlaneCollection - maintain a list of planes\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkPlaneCollection is an object that creates and manipulates lists of\nobjects of type vtkPlane.\n\nSee Also:\n\nvtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaneCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaneCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaneCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

