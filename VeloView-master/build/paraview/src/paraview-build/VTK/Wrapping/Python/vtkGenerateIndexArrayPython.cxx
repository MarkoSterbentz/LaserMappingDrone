// python wrapper for vtkGenerateIndexArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenerateIndexArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenerateIndexArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenerateIndexArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkGenerateIndexArray_Doc();


static PyObject *
PyvtkGenerateIndexArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenerateIndexArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateIndexArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenerateIndexArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateIndexArray::NewInstance());

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
PyvtkGenerateIndexArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenerateIndexArray *tempr = vtkGenerateIndexArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkGenerateIndexArray::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkGenerateIndexArray::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkGenerateIndexArray::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkGenerateIndexArray::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceArrayName(temp0);
      }
    else
      {
      op->vtkGenerateIndexArray::SetReferenceArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetReferenceArrayName() :
      op->vtkGenerateIndexArray::GetReferenceArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeID(temp0);
      }
    else
      {
      op->vtkGenerateIndexArray::SetPedigreeID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPedigreeID() :
      op->vtkGenerateIndexArray::GetPedigreeID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenerateIndexArray_Methods[] = {
  {(char*)"GetClassName", PyvtkGenerateIndexArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenerateIndexArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenerateIndexArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenerateIndexArray\nC++: vtkGenerateIndexArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenerateIndexArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenerateIndexArray\nC++: vtkGenerateIndexArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArrayName", PyvtkGenerateIndexArray_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nControl the output index array name.  Default: \"index\".\n"},
  {(char*)"GetArrayName", PyvtkGenerateIndexArray_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nControl the output index array name.  Default: \"index\".\n"},
  {(char*)"SetFieldType", PyvtkGenerateIndexArray_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nControl the location where the index array will be stored.\n"},
  {(char*)"GetFieldType", PyvtkGenerateIndexArray_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nControl the location where the index array will be stored.\n"},
  {(char*)"SetReferenceArrayName", PyvtkGenerateIndexArray_SetReferenceArrayName, METH_VARARGS,
   (char*)"V.SetReferenceArrayName(string)\nC++: void SetReferenceArrayName(char *)\n\nSpecifies an optional reference array for index-generation.\n"},
  {(char*)"GetReferenceArrayName", PyvtkGenerateIndexArray_GetReferenceArrayName, METH_VARARGS,
   (char*)"V.GetReferenceArrayName() -> string\nC++: char *GetReferenceArrayName()\n\nSpecifies an optional reference array for index-generation.\n"},
  {(char*)"SetPedigreeID", PyvtkGenerateIndexArray_SetPedigreeID, METH_VARARGS,
   (char*)"V.SetPedigreeID(int)\nC++: void SetPedigreeID(int a)\n\nSpecifies whether the index array should be marked as pedigree\nids.  Default: false.\n"},
  {(char*)"GetPedigreeID", PyvtkGenerateIndexArray_GetPedigreeID, METH_VARARGS,
   (char*)"V.GetPedigreeID() -> int\nC++: int GetPedigreeID()\n\nSpecifies whether the index array should be marked as pedigree\nids.  Default: false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenerateIndexArray_StaticNew()
{
  return vtkGenerateIndexArray::New();
}

PyObject *PyVTKClass_vtkGenerateIndexArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenerateIndexArray_StaticNew,
    PyvtkGenerateIndexArray_Methods,
    "vtkGenerateIndexArray", modulename,
    NULL, NULL,
    PyvtkGenerateIndexArray_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "ROW_DATA", vtkGenerateIndexArray::ROW_DATA },
          { "POINT_DATA", vtkGenerateIndexArray::POINT_DATA },
          { "CELL_DATA", vtkGenerateIndexArray::CELL_DATA },
          { "VERTEX_DATA", vtkGenerateIndexArray::VERTEX_DATA },
          { "EDGE_DATA", vtkGenerateIndexArray::EDGE_DATA },
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

const char **PyvtkGenerateIndexArray_Doc()
{
  static const char *docstring[] = {
    "vtkGenerateIndexArray\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "Generates a new vtkIdTypeArray containing zero-base indices.\n\nvtkGenerateIndexArray operates in one of two distinct \"modes\". By\ndefault, it simply generates an index array containing\nmonotonically-increasing integers in the range [0, N), where N is\nappropriately sized for the field type that will store the results. \nThis mode is useful for generating a unique ID field for datasets\nthat have none.\n",
    "\nThe second \"mode\" uses an existing array from the input data object\nas a \"reference\".  Distinct values from the reference array are\nsorted in ascending order, and an integer index in the range [0, N)\nis assigned to each.  The resulting map is used to populate the\noutput index array, mapping each value in the reference array to its\ncorresponding index and storing the result in the output array.  T",
    "his\nmode is especially useful when generating tensors, since it allows us\nto \"map\" from an array with arbitrary contents to an index that can\nbe used as tensor coordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenerateIndexArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenerateIndexArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenerateIndexArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

