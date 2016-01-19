// python wrapper for vtkImplicitFunctionCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImplicitFunctionCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitFunctionCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitFunctionCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkImplicitFunctionCollection_Doc();


static PyObject *
PyvtkImplicitFunctionCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitFunctionCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitFunctionCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunctionCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitFunctionCollection::NewInstance());

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
PyvtkImplicitFunctionCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitFunctionCollection *tempr = vtkImplicitFunctionCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkImplicitFunctionCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkImplicitFunctionCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitFunctionCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitFunctionCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitFunctionCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitFunctionCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitFunctionCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkImplicitFunctionCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkImplicitFunction)\nC++: void AddItem(vtkImplicitFunction *)\n\nAdd an implicit function to the list.\n"},
  {(char*)"GetNextItem", PyvtkImplicitFunctionCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetNextItem()\n\nGet the next implicit function in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitFunctionCollection_StaticNew()
{
  return vtkImplicitFunctionCollection::New();
}

PyObject *PyVTKClass_vtkImplicitFunctionCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitFunctionCollection_StaticNew,
    PyvtkImplicitFunctionCollection_Methods,
    "vtkImplicitFunctionCollection", modulename,
    NULL, NULL,
    PyvtkImplicitFunctionCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkImplicitFunctionCollection_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitFunctionCollection - maintain a list of implicit functions\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkImplicitFunctionCollection is an object that creates and\nmanipulates lists of objects of type vtkImplicitFunction.\n\nSee Also:\n\nvtkCollection vtkPlaneCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitFunctionCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitFunctionCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitFunctionCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

