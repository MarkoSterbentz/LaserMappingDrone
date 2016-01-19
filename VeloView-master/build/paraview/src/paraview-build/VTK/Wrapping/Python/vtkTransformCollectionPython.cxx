// python wrapper for vtkTransformCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkTransformCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransformCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransformCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkTransformCollection_Doc();


static PyObject *
PyvtkTransformCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCollection *op = static_cast<vtkTransformCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransformCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCollection *op = static_cast<vtkTransformCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCollection *op = static_cast<vtkTransformCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransformCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformCollection::NewInstance());

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
PyvtkTransformCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransformCollection *tempr = vtkTransformCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCollection *op = static_cast<vtkTransformCollection *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkTransformCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCollection *op = static_cast<vtkTransformCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkTransformCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransformCollection\nC++: vtkTransformCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformCollection\nC++: vtkTransformCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkTransformCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkTransform)\nC++: void AddItem(vtkTransform *)\n\nAdd a Transform to the list.\n"},
  {(char*)"GetNextItem", PyvtkTransformCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkTransform\nC++: vtkTransform *GetNextItem()\n\nGet the next Transform in the list. Return NULL when the end of\nthe list is reached.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformCollection_StaticNew()
{
  return vtkTransformCollection::New();
}

PyObject *PyVTKClass_vtkTransformCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformCollection_StaticNew,
    PyvtkTransformCollection_Methods,
    "vtkTransformCollection", modulename,
    NULL, NULL,
    PyvtkTransformCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkTransformCollection_Doc()
{
  static const char *docstring[] = {
    "vtkTransformCollection - maintain a list of transforms\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkTransformCollection is an object that creates and manipulates\nlists of objects of type vtkTransform.\n\nSee Also:\n\nvtkCollection vtkTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

