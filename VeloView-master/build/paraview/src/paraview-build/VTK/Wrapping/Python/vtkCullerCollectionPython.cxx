// python wrapper for vtkCullerCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCullerCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCullerCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCullerCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkCullerCollection_Doc();


static PyObject *
PyvtkCullerCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCullerCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCullerCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCullerCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCullerCollection::NewInstance());

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
PyvtkCullerCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCullerCollection *tempr = vtkCullerCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  vtkCuller *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkCullerCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCuller *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkCullerCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCuller *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkCullerCollection::GetLastItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCullerCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkCullerCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCullerCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCullerCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCullerCollection\nC++: vtkCullerCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCullerCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCullerCollection\nC++: vtkCullerCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkCullerCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkCuller)\nC++: void AddItem(vtkCuller *a)\n\nAdd an Culler to the list.\n"},
  {(char*)"GetNextItem", PyvtkCullerCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkCuller\nC++: vtkCuller *GetNextItem()\n\nGet the next Culler in the list.\n"},
  {(char*)"GetLastItem", PyvtkCullerCollection_GetLastItem, METH_VARARGS,
   (char*)"V.GetLastItem() -> vtkCuller\nC++: vtkCuller *GetLastItem()\n\nGet the last Culler in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCullerCollection_StaticNew()
{
  return vtkCullerCollection::New();
}

PyObject *PyVTKClass_vtkCullerCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCullerCollection_StaticNew,
    PyvtkCullerCollection_Methods,
    "vtkCullerCollection", modulename,
    NULL, NULL,
    PyvtkCullerCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkCullerCollection_Doc()
{
  static const char *docstring[] = {
    "vtkCullerCollection - a list of Cullers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkCullerCollection represents and provides methods to manipulate a\nlist of Cullers (i.e., vtkCuller and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkCuller vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCullerCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCullerCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCullerCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

