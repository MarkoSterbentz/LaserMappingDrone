// python wrapper for vtkAMRFileSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRFileSeriesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRFileSeriesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRFileSeriesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFileSeriesReaderNew
extern "C" { PyObject *PyVTKClass_vtkFileSeriesReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkFileSeriesReaderNew
#endif

static const char **PyvtkAMRFileSeriesReader_Doc();


static PyObject *
PyvtkAMRFileSeriesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFileSeriesReader *op = static_cast<vtkAMRFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRFileSeriesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFileSeriesReader *op = static_cast<vtkAMRFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFileSeriesReader *op = static_cast<vtkAMRFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFileSeriesReader::NewInstance());

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
PyvtkAMRFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRFileSeriesReader *tempr = vtkAMRFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRFileSeriesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRFileSeriesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRFileSeriesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRFileSeriesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRFileSeriesReader\nC++: vtkAMRFileSeriesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRFileSeriesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRFileSeriesReader\nC++: vtkAMRFileSeriesReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRFileSeriesReader_StaticNew()
{
  return vtkAMRFileSeriesReader::New();
}

PyObject *PyVTKClass_vtkAMRFileSeriesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRFileSeriesReader_StaticNew,
    PyvtkAMRFileSeriesReader_Methods,
    "vtkAMRFileSeriesReader", modulename,
    NULL, NULL,
    PyvtkAMRFileSeriesReader_Doc(),
    PyVTKClass_vtkFileSeriesReaderNew(modulename));
  return cls;
}

const char **PyvtkAMRFileSeriesReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMRFileSeriesReader - no description provided.\n\n",
    "Superclass: vtkFileSeriesReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRFileSeriesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRFileSeriesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRFileSeriesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

