// python wrapper for vtkAMREnzoParticlesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMREnzoParticlesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMREnzoParticlesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMREnzoParticlesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRBaseParticlesReaderNew
extern "C" { PyObject *PyVTKClass_vtkAMRBaseParticlesReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRBaseParticlesReaderNew
#endif

static const char **PyvtkAMREnzoParticlesReader_Doc();


static PyObject *
PyvtkAMREnzoParticlesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMREnzoParticlesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMREnzoParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMREnzoParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMREnzoParticlesReader::NewInstance());

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
PyvtkAMREnzoParticlesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMREnzoParticlesReader *tempr = vtkAMREnzoParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_SetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleType(temp0);
      }
    else
      {
      op->vtkAMREnzoParticlesReader::SetParticleType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_GetParticleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParticleType() :
      op->vtkAMREnzoParticlesReader::GetParticleType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoParticlesReader_GetTotalNumberOfParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoParticlesReader *op = static_cast<vtkAMREnzoParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfParticles() :
      op->vtkAMREnzoParticlesReader::GetTotalNumberOfParticles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMREnzoParticlesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMREnzoParticlesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMREnzoParticlesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMREnzoParticlesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMREnzoParticlesReader\nC++: vtkAMREnzoParticlesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMREnzoParticlesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMREnzoParticlesReader\nC++: vtkAMREnzoParticlesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetParticleType", PyvtkAMREnzoParticlesReader_SetParticleType, METH_VARARGS,
   (char*)"V.SetParticleType(int)\nC++: void SetParticleType(int a)\n\nReturns the requested particle type.\n"},
  {(char*)"GetParticleType", PyvtkAMREnzoParticlesReader_GetParticleType, METH_VARARGS,
   (char*)"V.GetParticleType() -> int\nC++: int GetParticleType()\n\nReturns the requested particle type.\n"},
  {(char*)"GetTotalNumberOfParticles", PyvtkAMREnzoParticlesReader_GetTotalNumberOfParticles, METH_VARARGS,
   (char*)"V.GetTotalNumberOfParticles() -> int\nC++: int GetTotalNumberOfParticles()\n\nSee vtkAMRBaseParticlesReader::GetTotalNumberOfParticles.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMREnzoParticlesReader_StaticNew()
{
  return vtkAMREnzoParticlesReader::New();
}

PyObject *PyVTKClass_vtkAMREnzoParticlesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMREnzoParticlesReader_StaticNew,
    PyvtkAMREnzoParticlesReader_Methods,
    "vtkAMREnzoParticlesReader", modulename,
    NULL, NULL,
    PyvtkAMREnzoParticlesReader_Doc(),
    PyVTKClass_vtkAMRBaseParticlesReaderNew(modulename));
  return cls;
}

const char **PyvtkAMREnzoParticlesReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMREnzoParticlesReader.h -- Reads AMR Enzo Particle datasets\n\n",
    "Superclass: vtkAMRBaseParticlesReader\n\n",
    "A concrete instance of the vtkAMRBaseParticlesReader which provides\n functionality for loading ENZO AMR particle datasets from ENZO.\n\nSee Also:\n\n\n vtkAMRBaseParticlesReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMREnzoParticlesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMREnzoParticlesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMREnzoParticlesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

