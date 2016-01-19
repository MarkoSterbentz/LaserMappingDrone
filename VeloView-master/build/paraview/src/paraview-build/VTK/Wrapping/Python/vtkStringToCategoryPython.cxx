// python wrapper for vtkStringToCategory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkStringToCategory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStringToCategory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStringToCategoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkStringToCategory_Doc();


static PyObject *
PyvtkStringToCategory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStringToCategory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToCategory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToCategory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToCategory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringToCategory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToCategory::NewInstance());

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
PyvtkStringToCategory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStringToCategory *tempr = vtkStringToCategory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToCategory_SetCategoryArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoryArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCategoryArrayName(temp0);
      }
    else
      {
      op->vtkStringToCategory::SetCategoryArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToCategory_GetCategoryArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoryArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCategoryArrayName() :
      op->vtkStringToCategory::GetCategoryArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToCategory_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToCategory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToCategory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToCategory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStringToCategory\nC++: vtkStringToCategory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringToCategory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringToCategory\nC++: vtkStringToCategory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCategoryArrayName", PyvtkStringToCategory_SetCategoryArrayName, METH_VARARGS,
   (char*)"V.SetCategoryArrayName(string)\nC++: void SetCategoryArrayName(char *)\n\nThe name to give to the output vtkIntArray of category values.\n"},
  {(char*)"GetCategoryArrayName", PyvtkStringToCategory_GetCategoryArrayName, METH_VARARGS,
   (char*)"V.GetCategoryArrayName() -> string\nC++: char *GetCategoryArrayName()\n\nThe name to give to the output vtkIntArray of category values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringToCategory_StaticNew()
{
  return vtkStringToCategory::New();
}

PyObject *PyVTKClass_vtkStringToCategoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringToCategory_StaticNew,
    PyvtkStringToCategory_Methods,
    "vtkStringToCategory", modulename,
    NULL, NULL,
    PyvtkStringToCategory_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStringToCategory_Doc()
{
  static const char *docstring[] = {
    "vtkStringToCategory - Creates a category array from a string array\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkStringToCategory creates an integer array named \"category\" based\non the values in a string array.  You may use this filter to create\nan array that you may use to color points/cells by the values in a\nstring array.  Currently there is not support to color by a string\narray directly. The category values will range from zero to N-1,\nwhere N is the number of distinct strings in the string array.  S",
    "et\nthe string array to process with SetInputArrayToProcess(0,0,0,...). \nThe array may be in the point, cell, or field data of the data\nobject.\n\nThe list of unique strings, in the order they are mapped, can also be\nretrieved from output port 1. They are in a vtkTable, stored in the\n\"Strings\" column as a vtkStringArray.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToCategory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToCategoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToCategory", o) != 0)
    {
    Py_DECREF(o);
    }

}

