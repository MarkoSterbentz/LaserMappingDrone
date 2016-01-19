// python wrapper for vtkDataSetCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkDataSetCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkDataSetCollection_Doc();


static PyObject *
PyvtkDataSetCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetCollection::NewInstance());

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
PyvtkDataSetCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetCollection *tempr = vtkDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkDataSetCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkDataSetCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetNextDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetNextDataSet() :
      op->vtkDataSetCollection::GetNextDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkDataSetCollection::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkDataSetCollection::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetCollection\nC++: vtkDataSetCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetCollection\nC++: vtkDataSetCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkDataSetCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkDataSet)\nC++: void AddItem(vtkDataSet *ds)\n\nAdd a dataset to the list.\n"},
  {(char*)"GetNextItem", PyvtkDataSetCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkDataSet\nC++: vtkDataSet *GetNextItem()\n\nGet the next dataset in the list.\n"},
  {(char*)"GetNextDataSet", PyvtkDataSetCollection_GetNextDataSet, METH_VARARGS,
   (char*)"V.GetNextDataSet() -> vtkDataSet\nC++: vtkDataSet *GetNextDataSet()\n\nGet the next dataset in the list.\n"},
  {(char*)"GetItem", PyvtkDataSetCollection_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkDataSet\nC++: vtkDataSet *GetItem(int i)\n\nGet the ith dataset in the list.\n"},
  {(char*)"GetDataSet", PyvtkDataSetCollection_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet(int) -> vtkDataSet\nC++: vtkDataSet *GetDataSet(int i)\n\nGet the ith dataset in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetCollection_StaticNew()
{
  return vtkDataSetCollection::New();
}

PyObject *PyVTKClass_vtkDataSetCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetCollection_StaticNew,
    PyvtkDataSetCollection_Methods,
    "vtkDataSetCollection", modulename,
    NULL, NULL,
    PyvtkDataSetCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkDataSetCollection_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetCollection - maintain an unordered list of dataset objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkDataSetCollection is an object that creates and manipulates lists\nof datasets. See also vtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

