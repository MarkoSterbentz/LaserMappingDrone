// python wrapper for vtkEnSightGoldReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSightGoldReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSightGoldReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSightGoldReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkEnSightReaderNew
#endif

static const char **PyvtkEnSightGoldReader_Doc();


static PyObject *
PyvtkEnSightGoldReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldReader *op = static_cast<vtkEnSightGoldReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSightGoldReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightGoldReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldReader *op = static_cast<vtkEnSightGoldReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightGoldReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightGoldReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldReader *op = static_cast<vtkEnSightGoldReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSightGoldReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightGoldReader::NewInstance());

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
PyvtkEnSightGoldReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSightGoldReader *tempr = vtkEnSightGoldReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightGoldReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightGoldReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightGoldReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightGoldReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSightGoldReader\nC++: vtkEnSightGoldReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightGoldReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightGoldReader\nC++: vtkEnSightGoldReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightGoldReader_StaticNew()
{
  return vtkEnSightGoldReader::New();
}

PyObject *PyVTKClass_vtkEnSightGoldReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightGoldReader_StaticNew,
    PyvtkEnSightGoldReader_Methods,
    "vtkEnSightGoldReader", modulename,
    NULL, NULL,
    PyvtkEnSightGoldReader_Doc(),
    PyVTKClass_vtkEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSightGoldReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightGoldReader - class to read EnSight Gold files\n\n",
    "Superclass: vtkEnSightReader\n\n",
    "vtkEnSightGoldReader is a class to read EnSight Gold files into vtk.\nBecause the different parts of the EnSight data can be of various\ndata types, this reader produces multiple outputs, one per part in\nthe input file. All variable information is being stored in field\ndata.  The descriptions listed in the case file are used as the array\nnames in the field data. For complex vector variables, the\ndes",
    "cription is appended with _r (for the array of real values) and _i\n(for the array if imaginary values).  Complex scalar variables are\nstored as a single array with 2 components, real and imaginary,\nlisted in that order.\n\nCaveats:\n\nYou must manually call Update on this reader and then connect the\nrest of the pipeline because (due to the nature of the file format)\nit is not possible to know ahead of",
    " time how many outputs you will\nhave or what types they will be. This reader can only handle static\nEnSight datasets (both static geometry and variables).\n\nThanks:\n\nThanks to Yvan Fournier for providing the code to support nfaced\nelements.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightGoldReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightGoldReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightGoldReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

