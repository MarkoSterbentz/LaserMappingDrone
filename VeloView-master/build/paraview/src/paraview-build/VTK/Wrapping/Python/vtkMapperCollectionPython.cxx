// python wrapper for vtkMapperCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMapperCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMapperCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMapperCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkMapperCollection_Doc();


static PyObject *
PyvtkMapperCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMapperCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapperCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapperCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapperCollection::NewInstance());

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
PyvtkMapperCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMapperCollection *tempr = vtkMapperCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkMapperCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkMapperCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkMapperCollection::GetLastItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapperCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkMapperCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapperCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapperCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMapperCollection\nC++: vtkMapperCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMapperCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMapperCollection\nC++: vtkMapperCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkMapperCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkMapper)\nC++: void AddItem(vtkMapper *a)\n\nAdd an mapper to the list.\n"},
  {(char*)"GetNextItem", PyvtkMapperCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkMapper\nC++: vtkMapper *GetNextItem()\n\nGet the next mapper in the list.\n"},
  {(char*)"GetLastItem", PyvtkMapperCollection_GetLastItem, METH_VARARGS,
   (char*)"V.GetLastItem() -> vtkMapper\nC++: vtkMapper *GetLastItem()\n\nGet the last mapper in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMapperCollection_StaticNew()
{
  return vtkMapperCollection::New();
}

PyObject *PyVTKClass_vtkMapperCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMapperCollection_StaticNew,
    PyvtkMapperCollection_Methods,
    "vtkMapperCollection", modulename,
    NULL, NULL,
    PyvtkMapperCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkMapperCollection_Doc()
{
  static const char *docstring[] = {
    "vtkMapperCollection - a list of mappers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkMapperCollection represents and provides methods to manipulate a\nlist of mappers (i.e., vtkMapper and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkMapper vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapperCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapperCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapperCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

