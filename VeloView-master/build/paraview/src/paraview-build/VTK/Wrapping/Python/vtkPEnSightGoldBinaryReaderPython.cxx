// python wrapper for vtkPEnSightGoldBinaryReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPEnSightGoldBinaryReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPEnSightGoldBinaryReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPEnSightGoldBinaryReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkPEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkPEnSightReaderNew
#endif

static const char **PyvtkPEnSightGoldBinaryReader_Doc();


static PyObject *
PyvtkPEnSightGoldBinaryReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldBinaryReader *op = static_cast<vtkPEnSightGoldBinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPEnSightGoldBinaryReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightGoldBinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldBinaryReader *op = static_cast<vtkPEnSightGoldBinaryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightGoldBinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightGoldBinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldBinaryReader *op = static_cast<vtkPEnSightGoldBinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPEnSightGoldBinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightGoldBinaryReader::NewInstance());

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
PyvtkPEnSightGoldBinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPEnSightGoldBinaryReader *tempr = vtkPEnSightGoldBinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPEnSightGoldBinaryReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPEnSightGoldBinaryReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPEnSightGoldBinaryReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPEnSightGoldBinaryReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPEnSightGoldBinaryReader\nC++: vtkPEnSightGoldBinaryReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPEnSightGoldBinaryReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPEnSightGoldBinaryReader\nC++: vtkPEnSightGoldBinaryReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPEnSightGoldBinaryReader_StaticNew()
{
  return vtkPEnSightGoldBinaryReader::New();
}

PyObject *PyVTKClass_vtkPEnSightGoldBinaryReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPEnSightGoldBinaryReader_StaticNew,
    PyvtkPEnSightGoldBinaryReader_Methods,
    "vtkPEnSightGoldBinaryReader", modulename,
    NULL, NULL,
    PyvtkPEnSightGoldBinaryReader_Doc(),
    PyVTKClass_vtkPEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkPEnSightGoldBinaryReader_Doc()
{
  static const char *docstring[] = {
    "vtkPEnSightGoldBinaryReader\n\n",
    "Superclass: vtkPEnSightReader\n\n",
    "Parallel vtkEnSightGoldBinaryReader.\n\nThanks:\n\nThis file has been developed as part of the CARRIOCAS (Distributed\ncomputation over ultra high optical internet network ) project (\nhttp://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French\nICT Cluster (http://www.systematic-paris-region.org/en/index.html)\nunder the supervision of CEA (http://www.cea.fr) and EDF\n(http://www.edf.fr) by Oxal",
    "ya (http://www.oxalya.com)\n\n\n Copyright (c) CEA\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPEnSightGoldBinaryReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPEnSightGoldBinaryReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPEnSightGoldBinaryReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

