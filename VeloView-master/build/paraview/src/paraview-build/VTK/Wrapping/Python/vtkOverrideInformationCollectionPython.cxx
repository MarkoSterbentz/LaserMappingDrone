// python wrapper for vtkOverrideInformationCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkOverrideInformationCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOverrideInformationCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOverrideInformationCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkOverrideInformationCollection_Doc();


static PyObject *
PyvtkOverrideInformationCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOverrideInformationCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverrideInformationCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverrideInformationCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverrideInformationCollection::NewInstance());

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
PyvtkOverrideInformationCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOverrideInformationCollection *tempr = vtkOverrideInformationCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  vtkOverrideInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverrideInformation"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkOverrideInformationCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverrideInformation *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkOverrideInformationCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverrideInformationCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkOverrideInformationCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverrideInformationCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverrideInformationCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOverrideInformationCollection\nC++: vtkOverrideInformationCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverrideInformationCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverrideInformationCollection\nC++: vtkOverrideInformationCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkOverrideInformationCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkOverrideInformation)\nC++: void AddItem(vtkOverrideInformation *)\n\nAdd a OverrideInformation to the list.\n"},
  {(char*)"GetNextItem", PyvtkOverrideInformationCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkOverrideInformation\nC++: vtkOverrideInformation *GetNextItem()\n\nGet the next OverrideInformation in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverrideInformationCollection_StaticNew()
{
  return vtkOverrideInformationCollection::New();
}

PyObject *PyVTKClass_vtkOverrideInformationCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverrideInformationCollection_StaticNew,
    PyvtkOverrideInformationCollection_Methods,
    "vtkOverrideInformationCollection", modulename,
    NULL, NULL,
    PyvtkOverrideInformationCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkOverrideInformationCollection_Doc()
{
  static const char *docstring[] = {
    "vtkOverrideInformationCollection - maintain a list of override\ninformation objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkOverrideInformationCollection is an object that creates and\nmanipulates lists of objects of type vtkOverrideInformation.\n\nSee Also:\n\nvtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverrideInformationCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverrideInformationCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverrideInformationCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

