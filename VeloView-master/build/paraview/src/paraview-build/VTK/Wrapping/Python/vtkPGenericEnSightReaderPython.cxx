// python wrapper for vtkPGenericEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPGenericEnSightReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPGenericEnSightReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPGenericEnSightReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkPGenericEnSightReader_Doc();


static PyObject *
PyvtkPGenericEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPGenericEnSightReader *op = static_cast<vtkPGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPGenericEnSightReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPGenericEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPGenericEnSightReader *op = static_cast<vtkPGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPGenericEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPGenericEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPGenericEnSightReader *op = static_cast<vtkPGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPGenericEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPGenericEnSightReader::NewInstance());

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
PyvtkPGenericEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPGenericEnSightReader *tempr = vtkPGenericEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPGenericEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPGenericEnSightReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPGenericEnSightReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPGenericEnSightReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPGenericEnSightReader\nC++: vtkPGenericEnSightReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPGenericEnSightReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPGenericEnSightReader\nC++: vtkPGenericEnSightReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPGenericEnSightReader_StaticNew()
{
  return vtkPGenericEnSightReader::New();
}

PyObject *PyVTKClass_vtkPGenericEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPGenericEnSightReader_StaticNew,
    PyvtkPGenericEnSightReader_Methods,
    "vtkPGenericEnSightReader", modulename,
    NULL, NULL,
    PyvtkPGenericEnSightReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkPGenericEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkPGenericEnSightReader - class to read any type of EnSight files\n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "The class vtkPGenericEnSightReader allows the user to read an EnSight\ndata set without a priori knowledge of what type of EnSight data set\nit is.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPGenericEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPGenericEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPGenericEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

