// python wrapper for vtkAMRFlashParticlesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRFlashParticlesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRFlashParticlesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRFlashParticlesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRBaseParticlesReaderNew
extern "C" { PyObject *PyVTKClass_vtkAMRBaseParticlesReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRBaseParticlesReaderNew
#endif

static const char **PyvtkAMRFlashParticlesReader_Doc();


static PyObject *
PyvtkAMRFlashParticlesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashParticlesReader *op = static_cast<vtkAMRFlashParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRFlashParticlesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashParticlesReader *op = static_cast<vtkAMRFlashParticlesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFlashParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashParticlesReader *op = static_cast<vtkAMRFlashParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRFlashParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFlashParticlesReader::NewInstance());

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
PyvtkAMRFlashParticlesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRFlashParticlesReader *tempr = vtkAMRFlashParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashParticlesReader_GetTotalNumberOfParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashParticlesReader *op = static_cast<vtkAMRFlashParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfParticles() :
      op->vtkAMRFlashParticlesReader::GetTotalNumberOfParticles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRFlashParticlesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRFlashParticlesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRFlashParticlesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRFlashParticlesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRFlashParticlesReader\nC++: vtkAMRFlashParticlesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRFlashParticlesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRFlashParticlesReader\nC++: vtkAMRFlashParticlesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTotalNumberOfParticles", PyvtkAMRFlashParticlesReader_GetTotalNumberOfParticles, METH_VARARGS,
   (char*)"V.GetTotalNumberOfParticles() -> int\nC++: int GetTotalNumberOfParticles()\n\nSee vtkAMRBaseParticlesReader::GetTotalNumberOfParticles.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRFlashParticlesReader_StaticNew()
{
  return vtkAMRFlashParticlesReader::New();
}

PyObject *PyVTKClass_vtkAMRFlashParticlesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRFlashParticlesReader_StaticNew,
    PyvtkAMRFlashParticlesReader_Methods,
    "vtkAMRFlashParticlesReader", modulename,
    NULL, NULL,
    PyvtkAMRFlashParticlesReader_Doc(),
    PyVTKClass_vtkAMRBaseParticlesReaderNew(modulename));
  return cls;
}

const char **PyvtkAMRFlashParticlesReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMRFlashParticlesReader.cxx -- Reads Flash particles dataset\n\n",
    "Superclass: vtkAMRBaseParticlesReader\n\n",
    "A concrete instance of vtkAMRBaseParticlesReader that implements\n functionality for reading flash particle datasets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRFlashParticlesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRFlashParticlesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRFlashParticlesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

