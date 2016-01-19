// python wrapper for vtkEnSightGoldBinaryReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSightGoldBinaryReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSightGoldBinaryReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSightGoldBinaryReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkEnSightReaderNew
#endif

static const char **PyvtkEnSightGoldBinaryReader_Doc();


static PyObject *
PyvtkEnSightGoldBinaryReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldBinaryReader *op = static_cast<vtkEnSightGoldBinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSightGoldBinaryReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightGoldBinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldBinaryReader *op = static_cast<vtkEnSightGoldBinaryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightGoldBinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightGoldBinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldBinaryReader *op = static_cast<vtkEnSightGoldBinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSightGoldBinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightGoldBinaryReader::NewInstance());

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
PyvtkEnSightGoldBinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSightGoldBinaryReader *tempr = vtkEnSightGoldBinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightGoldBinaryReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightGoldBinaryReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightGoldBinaryReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightGoldBinaryReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSightGoldBinaryReader\nC++: vtkEnSightGoldBinaryReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightGoldBinaryReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightGoldBinaryReader\nC++: vtkEnSightGoldBinaryReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightGoldBinaryReader_StaticNew()
{
  return vtkEnSightGoldBinaryReader::New();
}

PyObject *PyVTKClass_vtkEnSightGoldBinaryReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightGoldBinaryReader_StaticNew,
    PyvtkEnSightGoldBinaryReader_Methods,
    "vtkEnSightGoldBinaryReader", modulename,
    NULL, NULL,
    PyvtkEnSightGoldBinaryReader_Doc(),
    PyVTKClass_vtkEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSightGoldBinaryReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightGoldBinaryReader - class to read binary EnSight Gold files\n\n",
    "Superclass: vtkEnSightReader\n\n",
    "vtkEnSightGoldBinaryReader is a class to read EnSight Gold files into\nvtk. Because the different parts of the EnSight data can be of\nvarious data types, this reader produces multiple outputs, one per\npart in the input file. All variable information is being stored in\nfield data.  The descriptions listed in the case file are used as the\narray names in the field data. For complex vector variables, t",
    "he\ndescription is appended with _r (for the array of real values) and _i\n(for the array if imaginary values).  Complex scalar variables are\nstored as a single array with 2 components, real and imaginary,\nlisted in that order.\n\nCaveats:\n\nYou must manually call Update on this reader and then connect the\nrest of the pipeline because (due to the nature of the file format)\nit is not possible to know ah",
    "ead of time how many outputs you will\nhave or what types they will be. This reader can only handle static\nEnSight datasets (both static geometry and variables).\n\nThanks:\n\nThanks to Yvan Fournier for providing the code to support nfaced\nelements.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightGoldBinaryReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightGoldBinaryReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightGoldBinaryReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

