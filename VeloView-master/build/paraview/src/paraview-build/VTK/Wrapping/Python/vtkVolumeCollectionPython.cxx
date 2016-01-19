// python wrapper for vtkVolumeCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropCollectionNew
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropCollectionNew
#endif

static const char **PyvtkVolumeCollection_Doc();


static PyObject *
PyvtkVolumeCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeCollection::NewInstance());

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
PyvtkVolumeCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeCollection *tempr = vtkVolumeCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkVolumeCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetNextVolume() :
      op->vtkVolumeCollection::GetNextVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkVolumeCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeCollection\nC++: vtkVolumeCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeCollection\nC++: vtkVolumeCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkVolumeCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkVolume)\nC++: void AddItem(vtkVolume *a)\n\nAdd a Volume to the list.\n"},
  {(char*)"GetNextVolume", PyvtkVolumeCollection_GetNextVolume, METH_VARARGS,
   (char*)"V.GetNextVolume() -> vtkVolume\nC++: vtkVolume *GetNextVolume()\n\nGet the next Volume in the list. Return NULL when at the end of\nthe list.\n"},
  {(char*)"GetNextItem", PyvtkVolumeCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkVolume\nC++: vtkVolume *GetNextItem()\n\nAccess routine provided for compatibility with previous versions\nof VTK.  Please use the GetNextVolume() variant where possible.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeCollection_StaticNew()
{
  return vtkVolumeCollection::New();
}

PyObject *PyVTKClass_vtkVolumeCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeCollection_StaticNew,
    PyvtkVolumeCollection_Methods,
    "vtkVolumeCollection", modulename,
    NULL, NULL,
    PyvtkVolumeCollection_Doc(),
    PyVTKClass_vtkPropCollectionNew(modulename));
  return cls;
}

const char **PyvtkVolumeCollection_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeCollection - a list of volumes\n\n",
    "Superclass: vtkPropCollection\n\n",
    "vtkVolumeCollection represents and provides methods to manipulate a\nlist of volumes (i.e., vtkVolume and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkCollection vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

