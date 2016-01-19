// python wrapper for vtkTextPropertyCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextPropertyCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextPropertyCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextPropertyCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkTextPropertyCollection_Doc();


static PyObject *
PyvtkTextPropertyCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextPropertyCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextPropertyCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextPropertyCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextPropertyCollection::NewInstance());

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
PyvtkTextPropertyCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextPropertyCollection *tempr = vtkTextPropertyCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkTextPropertyCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkTextPropertyCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkTextPropertyCollection::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextPropertyCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextPropertyCollection *op = static_cast<vtkTextPropertyCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkTextPropertyCollection::GetLastItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextPropertyCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkTextPropertyCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextPropertyCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextPropertyCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextPropertyCollection\nC++: vtkTextPropertyCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextPropertyCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextPropertyCollection\nC++: vtkTextPropertyCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkTextPropertyCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkTextProperty)\nC++: void AddItem(vtkTextProperty *a)\n\nAdd a vtkTextProperty to the list.\n"},
  {(char*)"GetNextItem", PyvtkTextPropertyCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkTextProperty\nC++: vtkTextProperty *GetNextItem()\n\nGet the next vtkTextProperty in the list.\n"},
  {(char*)"GetItem", PyvtkTextPropertyCollection_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkTextProperty\nC++: vtkTextProperty *GetItem(int idx)\n\nGet the vtkTextProperty at the specified index.\n"},
  {(char*)"GetLastItem", PyvtkTextPropertyCollection_GetLastItem, METH_VARARGS,
   (char*)"V.GetLastItem() -> vtkTextProperty\nC++: vtkTextProperty *GetLastItem()\n\nGet the last TextProperty in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextPropertyCollection_StaticNew()
{
  return vtkTextPropertyCollection::New();
}

PyObject *PyVTKClass_vtkTextPropertyCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextPropertyCollection_StaticNew,
    PyvtkTextPropertyCollection_Methods,
    "vtkTextPropertyCollection", modulename,
    NULL, NULL,
    PyvtkTextPropertyCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkTextPropertyCollection_Doc()
{
  static const char *docstring[] = {
    "vtkTextPropertyCollection - a list of vtkTextProperty objects.\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkTextPropertyCollection represents and provides methods to\nmanipulate a list of TextProperty objects. The list is unsorted and\nduplicate entries are not prevented.\n\nSee Also:\n\nvtkTextProperty vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextPropertyCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextPropertyCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextPropertyCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

