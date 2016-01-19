// python wrapper for vtkPolyDataCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyDataCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyDataCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyDataCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkPolyDataCollection_Doc();


static PyObject *
PyvtkPolyDataCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataCollection *op = static_cast<vtkPolyDataCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyDataCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataCollection *op = static_cast<vtkPolyDataCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataCollection *op = static_cast<vtkPolyDataCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataCollection::NewInstance());

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
PyvtkPolyDataCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyDataCollection *tempr = vtkPolyDataCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataCollection *op = static_cast<vtkPolyDataCollection *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkPolyDataCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataCollection *op = static_cast<vtkPolyDataCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkPolyDataCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyDataCollection\nC++: vtkPolyDataCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataCollection\nC++: vtkPolyDataCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkPolyDataCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkPolyData)\nC++: void AddItem(vtkPolyData *pd)\n\nAdd a poly data to the list.\n"},
  {(char*)"GetNextItem", PyvtkPolyDataCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkPolyData\nC++: vtkPolyData *GetNextItem()\n\nGet the next poly data in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataCollection_StaticNew()
{
  return vtkPolyDataCollection::New();
}

PyObject *PyVTKClass_vtkPolyDataCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataCollection_StaticNew,
    PyvtkPolyDataCollection_Methods,
    "vtkPolyDataCollection", modulename,
    NULL, NULL,
    PyvtkPolyDataCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkPolyDataCollection_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataCollection - maintain a list of polygonal data objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkPolyDataCollection is an object that creates and manipulates lists\nof datasets of type vtkPolyData.\n\nSee Also:\n\nvtkDataSetCollection vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

