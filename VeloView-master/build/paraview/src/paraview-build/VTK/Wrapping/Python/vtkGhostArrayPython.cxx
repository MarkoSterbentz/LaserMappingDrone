// python wrapper for vtkGhostArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGhostArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGhostArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGhostArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGhostArray_Doc();


static PyObject *
PyvtkGhostArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGhostArray *op = static_cast<vtkGhostArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGhostArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGhostArray *op = static_cast<vtkGhostArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGhostArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGhostArray *op = static_cast<vtkGhostArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGhostArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGhostArray::NewInstance());

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
PyvtkGhostArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGhostArray *tempr = vtkGhostArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_SetProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetProperty");

  unsigned char temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkGhostArray::SetProperty(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_UnsetProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnsetProperty");

  unsigned char temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkGhostArray::UnsetProperty(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_IsPropertySet(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPropertySet");

  unsigned char temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = vtkGhostArray::IsPropertySet(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGhostArray_Reset(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Reset");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGhostArray::Reset(temp0);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGhostArray_Methods[] = {
  {(char*)"GetClassName", PyvtkGhostArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGhostArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGhostArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGhostArray\nC++: vtkGhostArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGhostArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGhostArray\nC++: vtkGhostArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProperty", PyvtkGhostArray_SetProperty, METH_VARARGS | METH_STATIC,
   (char*)"V.SetProperty(int, int)\nC++: static void SetProperty(unsigned char &propertyField,\n    const int property)\n\nSets the given property in the propertyField.\n"},
  {(char*)"UnsetProperty", PyvtkGhostArray_UnsetProperty, METH_VARARGS | METH_STATIC,
   (char*)"V.UnsetProperty(int, int)\nC++: static void UnsetProperty(unsigned char &propertyField,\n    const int property)\n\nUnsets the property from the given propertyField.\n"},
  {(char*)"IsPropertySet", PyvtkGhostArray_IsPropertySet, METH_VARARGS | METH_STATIC,
   (char*)"V.IsPropertySet(int, int) -> bool\nC++: static bool IsPropertySet(unsigned char &propertyField,\n    const int property)\n\nChecks if a property is set in the given property field.\n"},
  {(char*)"Reset", PyvtkGhostArray_Reset, METH_VARARGS | METH_STATIC,
   (char*)"V.Reset(int)\nC++: static void Reset(unsigned char &propertyField)\n\nResets all the bits in the property field\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGhostArray_StaticNew()
{
  return vtkGhostArray::New();
}

PyObject *PyVTKClass_vtkGhostArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGhostArray_StaticNew,
    PyvtkGhostArray_Methods,
    "vtkGhostArray", modulename,
    NULL, NULL,
    PyvtkGhostArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 11; c++)
      {
      static const struct { const char *name; int value; }
        constants[11] = {
          { "INTERNAL", vtkGhostArray::INTERNAL },
          { "SHARED", vtkGhostArray::SHARED },
          { "GHOST", vtkGhostArray::GHOST },
          { "VOID", vtkGhostArray::VOID },
          { "IGNORE", vtkGhostArray::IGNORE },
          { "BOUNDARY", vtkGhostArray::BOUNDARY },
          { "PERIODIC", vtkGhostArray::PERIODIC },
          { "DUPLICATE", vtkGhostArray::DUPLICATE },
          { "EXTERNAL", vtkGhostArray::EXTERNAL },
          { "BLANK", vtkGhostArray::BLANK },
          { "INTERIOR", vtkGhostArray::INTERIOR },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGhostArray_Doc()
{
  static const char *docstring[] = {
    "vtkGhostArray.h -- Encodes/Decodes ghost array information.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGhostArray provides functionality for manipulating a mesh entity\n property field, represented by an \"unsigned char\". Each mesh entity,\ne.g.,\n a vertex or cell is associated with an \"unsigned char\" where each\nindividual\n bit represents the state of a particular property. This class\nprovides\n the logic required to manipulate individual bits in the \"unsigned\nchar\".\n\nCaveats:\n\n\n Since an unsigned c",
    "har is used to represent a mesh entity property\nfield, we\n are restricted to at most 8 properties, i.e., [0-7] that can be used\nto\n designate different states.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGhostArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGhostArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGhostArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

