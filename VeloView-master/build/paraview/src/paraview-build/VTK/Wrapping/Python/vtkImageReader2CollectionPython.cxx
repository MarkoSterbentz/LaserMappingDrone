// python wrapper for vtkImageReader2Collection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageReader2Collection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageReader2Collection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageReader2CollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkImageReader2Collection_Doc();


static PyObject *
PyvtkImageReader2Collection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Collection *op = static_cast<vtkImageReader2Collection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageReader2Collection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Collection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Collection *op = static_cast<vtkImageReader2Collection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader2Collection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Collection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Collection *op = static_cast<vtkImageReader2Collection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageReader2Collection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader2Collection::NewInstance());

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
PyvtkImageReader2Collection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageReader2Collection *tempr = vtkImageReader2Collection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Collection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Collection *op = static_cast<vtkImageReader2Collection *>(vp);

  vtkImageReader2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkImageReader2Collection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Collection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Collection *op = static_cast<vtkImageReader2Collection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageReader2 *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkImageReader2Collection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageReader2Collection_Methods[] = {
  {(char*)"GetClassName", PyvtkImageReader2Collection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageReader2Collection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageReader2Collection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageReader2Collection\nC++: vtkImageReader2Collection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageReader2Collection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageReader2Collection\nC++: vtkImageReader2Collection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkImageReader2Collection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkImageReader2)\nC++: void AddItem(vtkImageReader2 *)\n\nAdd an image reader to the list.\n"},
  {(char*)"GetNextItem", PyvtkImageReader2Collection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkImageReader2\nC++: vtkImageReader2 *GetNextItem()\n\nGet the next image reader in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageReader2Collection_StaticNew()
{
  return vtkImageReader2Collection::New();
}

PyObject *PyVTKClass_vtkImageReader2CollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageReader2Collection_StaticNew,
    PyvtkImageReader2Collection_Methods,
    "vtkImageReader2Collection", modulename,
    NULL, NULL,
    PyvtkImageReader2Collection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkImageReader2Collection_Doc()
{
  static const char *docstring[] = {
    "vtkImageReader2Collection - maintain a list of image readers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkImageReader2Collection is an object that creates and manipulates\nlists of objects of type vtkImageReader2 and its subclasses.\n\nSee Also:\n\nvtkCollection vtkPlaneCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageReader2Collection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageReader2CollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageReader2Collection", o) != 0)
    {
    Py_DECREF(o);
    }

}

