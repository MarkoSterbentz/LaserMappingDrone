// python wrapper for vtkRenderWindowCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderWindowCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderWindowCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderWindowCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRenderWindowCollection_Doc();


static PyObject *
PyvtkRenderWindowCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderWindowCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowCollection::NewInstance());

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
PyvtkRenderWindowCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderWindowCollection *tempr = vtkRenderWindowCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRenderWindowCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkRenderWindowCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderWindowCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderWindowCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderWindowCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderWindowCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderWindowCollection\nC++: vtkRenderWindowCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderWindowCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderWindowCollection\nC++: vtkRenderWindowCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRenderWindowCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkRenderWindow)\nC++: void AddItem(vtkRenderWindow *a)\n\nAdd a RenderWindow to the list.\n"},
  {(char*)"GetNextItem", PyvtkRenderWindowCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkRenderWindow\nC++: vtkRenderWindow *GetNextItem()\n\nGet the next RenderWindow in the list. Return NULL when at the\nend of the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderWindowCollection_StaticNew()
{
  return vtkRenderWindowCollection::New();
}

PyObject *PyVTKClass_vtkRenderWindowCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderWindowCollection_StaticNew,
    PyvtkRenderWindowCollection_Methods,
    "vtkRenderWindowCollection", modulename,
    NULL, NULL,
    PyvtkRenderWindowCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRenderWindowCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRenderWindowCollection - a list of RenderWindows\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRenderWindowCollection represents and provides methods to\nmanipulate a list of RenderWindows. The list is unsorted and\nduplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderWindow vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderWindowCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderWindowCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderWindowCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

