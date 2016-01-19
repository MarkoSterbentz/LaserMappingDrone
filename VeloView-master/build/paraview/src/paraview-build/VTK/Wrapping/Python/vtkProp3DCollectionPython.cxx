// python wrapper for vtkProp3DCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProp3DCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProp3DCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProp3DCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropCollectionNew
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropCollectionNew
#endif

static const char **PyvtkProp3DCollection_Doc();


static PyObject *
PyvtkProp3DCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProp3DCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3DCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3DCollection::NewInstance());

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
PyvtkProp3DCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProp3DCollection *tempr = vtkProp3DCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkProp3DCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DCollection_GetNextProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetNextProp3D() :
      op->vtkProp3DCollection::GetNextProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DCollection_GetLastProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetLastProp3D() :
      op->vtkProp3DCollection::GetLastProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3DCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkProp3DCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProp3DCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProp3DCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProp3DCollection\nC++: vtkProp3DCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProp3DCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProp3DCollection\nC++: vtkProp3DCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkProp3DCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkProp3D)\nC++: void AddItem(vtkProp3D *p)\n\nAdd an actor to the list.\n"},
  {(char*)"GetNextProp3D", PyvtkProp3DCollection_GetNextProp3D, METH_VARARGS,
   (char*)"V.GetNextProp3D() -> vtkProp3D\nC++: vtkProp3D *GetNextProp3D()\n\nGet the next actor in the list.\n"},
  {(char*)"GetLastProp3D", PyvtkProp3DCollection_GetLastProp3D, METH_VARARGS,
   (char*)"V.GetLastProp3D() -> vtkProp3D\nC++: vtkProp3D *GetLastProp3D()\n\nGet the last actor in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProp3DCollection_StaticNew()
{
  return vtkProp3DCollection::New();
}

PyObject *PyVTKClass_vtkProp3DCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProp3DCollection_StaticNew,
    PyvtkProp3DCollection_Methods,
    "vtkProp3DCollection", modulename,
    NULL, NULL,
    PyvtkProp3DCollection_Doc(),
    PyVTKClass_vtkPropCollectionNew(modulename));
  return cls;
}

const char **PyvtkProp3DCollection_Doc()
{
  static const char *docstring[] = {
    "vtkProp3DCollection - a list of 3D props\n\n",
    "Superclass: vtkPropCollection\n\n",
    "vtkProp3DCollection represents and provides methods to manipulate a\nlist of 3D props (i.e., vtkProp3D and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkProp3D vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProp3DCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProp3DCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProp3DCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

