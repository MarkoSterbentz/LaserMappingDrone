// python wrapper for vtkDataArrayCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkDataArrayCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataArrayCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataArrayCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkDataArrayCollection_Doc();


static PyObject *
PyvtkDataArrayCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataArrayCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArrayCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArrayCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArrayCollection::NewInstance());

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
PyvtkDataArrayCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataArrayCollection *tempr = vtkDataArrayCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkDataArrayCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkDataArrayCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkDataArrayCollection::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArrayCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkDataArrayCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataArrayCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataArrayCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataArrayCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkDataArrayCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkDataArray)\nC++: void AddItem(vtkDataArray *ds)\n\nAdd a dataarray to the list.\n"},
  {(char*)"GetNextItem", PyvtkDataArrayCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkDataArray\nC++: vtkDataArray *GetNextItem()\n\nGet the next dataarray in the list.\n"},
  {(char*)"GetItem", PyvtkDataArrayCollection_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkDataArray\nC++: vtkDataArray *GetItem(int i)\n\nGet the ith dataarray in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataArrayCollection_StaticNew()
{
  return vtkDataArrayCollection::New();
}

PyObject *PyVTKClass_vtkDataArrayCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataArrayCollection_StaticNew,
    PyvtkDataArrayCollection_Methods,
    "vtkDataArrayCollection", modulename,
    NULL, NULL,
    PyvtkDataArrayCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkDataArrayCollection_Doc()
{
  static const char *docstring[] = {
    "vtkDataArrayCollection - maintain an unordered list of dataarray\nobjects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkDataArrayCollection is an object that creates and manipulates\nlists of datasets. See also vtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataArrayCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataArrayCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataArrayCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

