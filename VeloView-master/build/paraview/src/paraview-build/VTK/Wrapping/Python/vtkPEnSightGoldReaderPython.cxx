// python wrapper for vtkPEnSightGoldReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPEnSightGoldReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPEnSightGoldReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPEnSightGoldReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkPEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkPEnSightReaderNew
#endif

static const char **PyvtkPEnSightGoldReader_Doc();


static PyObject *
PyvtkPEnSightGoldReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldReader *op = static_cast<vtkPEnSightGoldReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPEnSightGoldReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightGoldReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldReader *op = static_cast<vtkPEnSightGoldReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightGoldReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightGoldReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldReader *op = static_cast<vtkPEnSightGoldReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPEnSightGoldReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightGoldReader::NewInstance());

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
PyvtkPEnSightGoldReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPEnSightGoldReader *tempr = vtkPEnSightGoldReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPEnSightGoldReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPEnSightGoldReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPEnSightGoldReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPEnSightGoldReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPEnSightGoldReader\nC++: vtkPEnSightGoldReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPEnSightGoldReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPEnSightGoldReader\nC++: vtkPEnSightGoldReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPEnSightGoldReader_StaticNew()
{
  return vtkPEnSightGoldReader::New();
}

PyObject *PyVTKClass_vtkPEnSightGoldReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPEnSightGoldReader_StaticNew,
    PyvtkPEnSightGoldReader_Methods,
    "vtkPEnSightGoldReader", modulename,
    NULL, NULL,
    PyvtkPEnSightGoldReader_Doc(),
    PyVTKClass_vtkPEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkPEnSightGoldReader_Doc()
{
  static const char *docstring[] = {
    "vtkPEnSightGoldReader\n\n",
    "Superclass: vtkPEnSightReader\n\n",
    "Parallel version of vtkEnSightGoldReader.\n\nThanks:\n\nThis file has been developed as part of the CARRIOCAS (Distributed\ncomputation over ultra high optical internet network ) project (\nhttp://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French\nICT Cluster (http://www.systematic-paris-region.org/en/index.html)\nunder the supervision of CEA (http://www.cea.fr) and EDF\n(http://www.edf.fr) by",
    " Oxalya (http://www.oxalya.com)\n\n\n Copyright (c) CEA\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPEnSightGoldReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPEnSightGoldReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPEnSightGoldReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

