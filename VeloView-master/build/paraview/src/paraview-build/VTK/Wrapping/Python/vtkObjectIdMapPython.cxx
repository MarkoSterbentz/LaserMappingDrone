// python wrapper for vtkObjectIdMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkObjectIdMap.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkObjectIdMap(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkObjectIdMapNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkObjectIdMap_Doc();


static PyObject *
PyvtkObjectIdMap_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObjectIdMap::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectIdMap::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObjectIdMap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObjectIdMap::NewInstance());

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
PyvtkObjectIdMap_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkObjectIdMap *tempr = vtkObjectIdMap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalId(temp0) :
      op->vtkObjectIdMap::GetGlobalId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetVTKObject(temp0) :
      op->vtkObjectIdMap::GetVTKObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_SetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  char *temp0 = NULL;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->SetActiveObject(temp0, temp1) :
      op->vtkObjectIdMap::SetActiveObject(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetActiveObject(temp0) :
      op->vtkObjectIdMap::GetActiveObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectIdMap_FreeObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->FreeObject(temp0);
      }
    else
      {
      op->vtkObjectIdMap::FreeObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkObjectIdMap_Methods[] = {
  {(char*)"GetClassName", PyvtkObjectIdMap_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkObjectIdMap_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkObjectIdMap_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkObjectIdMap\nC++: vtkObjectIdMap *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkObjectIdMap_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkObjectIdMap\nC++: vtkObjectIdMap *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGlobalId", PyvtkObjectIdMap_GetGlobalId, METH_VARARGS,
   (char*)"V.GetGlobalId(vtkObject) -> int\nC++: vtkTypeUInt32 GetGlobalId(vtkObject *obj)\n\nRetreive a unique identifier for the given object or generate a\nnew one if its global id was never requested.\n"},
  {(char*)"GetVTKObject", PyvtkObjectIdMap_GetVTKObject, METH_VARARGS,
   (char*)"V.GetVTKObject(int) -> vtkObject\nC++: vtkObject *GetVTKObject(vtkTypeUInt32 globalId)\n\nRetreive a vtkObject based on its global id. If not found return\nNULL\n"},
  {(char*)"SetActiveObject", PyvtkObjectIdMap_SetActiveObject, METH_VARARGS,
   (char*)"V.SetActiveObject(string, vtkObject) -> int\nC++: vtkTypeUInt32 SetActiveObject(const char *objectType,\n    vtkObject *obj)\n\nAssign an active key (string) to an existing object. This is\nusually used to provide another type of access to specific\nvtkObject that we want to retreive easily using a string. Return\nthe global Id of the given registered object\n"},
  {(char*)"GetActiveObject", PyvtkObjectIdMap_GetActiveObject, METH_VARARGS,
   (char*)"V.GetActiveObject(string) -> vtkObject\nC++: vtkObject *GetActiveObject(const char *objectType)\n\nRetreive a previously stored object based on a name\n"},
  {(char*)"FreeObject", PyvtkObjectIdMap_FreeObject, METH_VARARGS,
   (char*)"V.FreeObject(vtkObject)\nC++: void FreeObject(vtkObject *obj)\n\nRemove any internal reference count due to internal Id/Object\nmapping\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkObjectIdMap_StaticNew()
{
  return vtkObjectIdMap::New();
}

PyObject *PyVTKClass_vtkObjectIdMapNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkObjectIdMap_StaticNew,
    PyvtkObjectIdMap_Methods,
    "vtkObjectIdMap", modulename,
    NULL, NULL,
    PyvtkObjectIdMap_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkObjectIdMap_Doc()
{
  static const char *docstring[] = {
    "vtkObjectIdMap - class used to assign Id to any VTK object and be able\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObjectIdMap(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObjectIdMapNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObjectIdMap", o) != 0)
    {
    Py_DECREF(o);
    }

}

