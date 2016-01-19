// python wrapper for vtkStringList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStringList.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStringList(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStringListNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStringList_Doc();


static PyObject *
PyvtkStringList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStringList::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringList::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringList *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringList::NewInstance());

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
PyvtkStringList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStringList *tempr = vtkStringList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_AddString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddString(temp0);
      }
    else
      {
      op->vtkStringList::AddString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_AddUniqueString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUniqueString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddUniqueString(temp0);
      }
    else
      {
      op->vtkStringList::AddUniqueString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_AddFormattedString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFormattedString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFormattedString(temp0);
      }
    else
      {
      op->vtkStringList::AddFormattedString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllItems();
      }
    else
      {
      op->vtkStringList::RemoveAllItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_SetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetString(temp0, temp1);
      }
    else
      {
      op->vtkStringList::SetString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkStringList::GetLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndex(temp0) :
      op->vtkStringList::GetIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkStringList::GetString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringList_GetNumberOfStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStrings() :
      op->vtkStringList::GetNumberOfStrings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringList_Methods[] = {
  {(char*)"GetClassName", PyvtkStringList_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringList_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringList_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStringList\nC++: vtkStringList *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringList_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringList\nC++: vtkStringList *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddString", PyvtkStringList_AddString, METH_VARARGS,
   (char*)"V.AddString(string)\nC++: void AddString(const char *str)\n\nAdd a simple string.\n"},
  {(char*)"AddUniqueString", PyvtkStringList_AddUniqueString, METH_VARARGS,
   (char*)"V.AddUniqueString(string)\nC++: void AddUniqueString(const char *str)\n\nAdd a simple string.\n"},
  {(char*)"AddFormattedString", PyvtkStringList_AddFormattedString, METH_VARARGS,
   (char*)"V.AddFormattedString(string)\nC++: void AddFormattedString(const char *EventString, ...)\n\nAdd a command and format it any way you like.\n"},
  {(char*)"RemoveAllItems", PyvtkStringList_RemoveAllItems, METH_VARARGS,
   (char*)"V.RemoveAllItems()\nC++: void RemoveAllItems()\n\nInitialize to empty.\n"},
  {(char*)"SetString", PyvtkStringList_SetString, METH_VARARGS,
   (char*)"V.SetString(int, string)\nC++: void SetString(int idx, const char *str)\n\nRandom access.\n"},
  {(char*)"GetLength", PyvtkStringList_GetLength, METH_VARARGS,
   (char*)"V.GetLength() -> int\nC++: int GetLength()\n\nGet the length of the list.\n"},
  {(char*)"GetIndex", PyvtkStringList_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex(string) -> int\nC++: int GetIndex(const char *str)\n\nGet the index of a string.\n"},
  {(char*)"GetString", PyvtkStringList_GetString, METH_VARARGS,
   (char*)"V.GetString(int) -> string\nC++: const char *GetString(int idx)\n\nGet a command from its index.\n"},
  {(char*)"GetNumberOfStrings", PyvtkStringList_GetNumberOfStrings, METH_VARARGS,
   (char*)"V.GetNumberOfStrings() -> int\nC++: int GetNumberOfStrings()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringList_StaticNew()
{
  return vtkStringList::New();
}

PyObject *PyVTKClass_vtkStringListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringList_StaticNew,
    PyvtkStringList_Methods,
    "vtkStringList", modulename,
    NULL, NULL,
    PyvtkStringList_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStringList_Doc()
{
  static const char *docstring[] = {
    "vtkKWAssignment - Manages allocation and freeing for a string list.\n\n",
    "Superclass: vtkObject\n\n",
    "A vtkStringList holds a list of strings. We might be able to replace\nit in the future.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringList", o) != 0)
    {
    Py_DECREF(o);
    }

}

