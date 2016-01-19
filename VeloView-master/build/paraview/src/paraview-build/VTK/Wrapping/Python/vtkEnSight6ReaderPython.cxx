// python wrapper for vtkEnSight6Reader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSight6Reader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSight6Reader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSight6ReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkEnSightReaderNew
#endif

static const char **PyvtkEnSight6Reader_Doc();


static PyObject *
PyvtkEnSight6Reader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6Reader *op = static_cast<vtkEnSight6Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSight6Reader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSight6Reader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6Reader *op = static_cast<vtkEnSight6Reader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSight6Reader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSight6Reader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6Reader *op = static_cast<vtkEnSight6Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSight6Reader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSight6Reader::NewInstance());

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
PyvtkEnSight6Reader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSight6Reader *tempr = vtkEnSight6Reader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSight6Reader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSight6Reader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSight6Reader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSight6Reader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSight6Reader\nC++: vtkEnSight6Reader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSight6Reader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSight6Reader\nC++: vtkEnSight6Reader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSight6Reader_StaticNew()
{
  return vtkEnSight6Reader::New();
}

PyObject *PyVTKClass_vtkEnSight6ReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSight6Reader_StaticNew,
    PyvtkEnSight6Reader_Methods,
    "vtkEnSight6Reader", modulename,
    NULL, NULL,
    PyvtkEnSight6Reader_Doc(),
    PyVTKClass_vtkEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSight6Reader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSight6Reader - class to read EnSight6 files\n\n",
    "Superclass: vtkEnSightReader\n\n",
    "vtkEnSight6Reader is a class to read EnSight6 files into vtk. Because\nthe different parts of the EnSight data can be of various data types,\nthis reader produces multiple outputs, one per part in the input\nfile. All variable information is being stored in field data.  The\ndescriptions listed in the case file are used as the array names in\nthe field data. For complex vector variables, the descriptio",
    "n is\nappended with _r (for the array of real values) and _i (for the array\nif imaginary values).  Complex scalar variables are stored as a\nsingle array with 2 components, real and imaginary, listed in that\norder.\n\nCaveats:\n\nYou must manually call Update on this reader and then connect the\nrest of the pipeline because (due to the nature of the file format)\nit is not possible to know ahead of time h",
    "ow many outputs you will\nhave or what types they will be. This reader can only handle static\nEnSight datasets (both static geometry and variables).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSight6Reader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSight6ReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSight6Reader", o) != 0)
    {
    Py_DECREF(o);
    }

}

