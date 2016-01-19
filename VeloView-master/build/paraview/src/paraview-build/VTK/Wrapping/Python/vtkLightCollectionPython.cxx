// python wrapper for vtkLightCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLightCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLightCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLightCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkLightCollection_Doc();


static PyObject *
PyvtkLightCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightCollection *op = static_cast<vtkLightCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLightCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightCollection *op = static_cast<vtkLightCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLightCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightCollection *op = static_cast<vtkLightCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLightCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLightCollection::NewInstance());

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
PyvtkLightCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLightCollection *tempr = vtkLightCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightCollection *op = static_cast<vtkLightCollection *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkLightCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightCollection *op = static_cast<vtkLightCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLight *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkLightCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLightCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkLightCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLightCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLightCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLightCollection\nC++: vtkLightCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLightCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLightCollection\nC++: vtkLightCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkLightCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkLight)\nC++: void AddItem(vtkLight *a)\n\nAdd a light to the list.\n"},
  {(char*)"GetNextItem", PyvtkLightCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkLight\nC++: vtkLight *GetNextItem()\n\nGet the next light in the list. NULL is returned when the\ncollection is exhausted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLightCollection_StaticNew()
{
  return vtkLightCollection::New();
}

PyObject *PyVTKClass_vtkLightCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLightCollection_StaticNew,
    PyvtkLightCollection_Methods,
    "vtkLightCollection", modulename,
    NULL, NULL,
    PyvtkLightCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkLightCollection_Doc()
{
  static const char *docstring[] = {
    "vtkLightCollection - a list of lights\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkLightCollection represents and provides methods to manipulate a\nlist of lights (i.e., vtkLight and subclasses). The list is unsorted\nand duplicate entries are not prevented.\n\nSee Also:\n\nvtkCollection vtkLight\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLightCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLightCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

