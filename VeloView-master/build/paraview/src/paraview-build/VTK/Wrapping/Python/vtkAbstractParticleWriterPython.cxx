// python wrapper for vtkAbstractParticleWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractParticleWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractParticleWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractParticleWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkAbstractParticleWriter_Doc();


static PyObject *
PyvtkAbstractParticleWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractParticleWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractParticleWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractParticleWriter::NewInstance());

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
PyvtkAbstractParticleWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractParticleWriter *tempr = vtkAbstractParticleWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkAbstractParticleWriter::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkAbstractParticleWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeValue(temp0);
      }
    else
      {
      op->vtkAbstractParticleWriter::SetTimeValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkAbstractParticleWriter::GetTimeValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkAbstractParticleWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAbstractParticleWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetCollectiveIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollectiveIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCollectiveIO(temp0);
      }
    else
      {
      op->vtkAbstractParticleWriter::SetCollectiveIO(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetCollectiveIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollectiveIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCollectiveIO() :
      op->vtkAbstractParticleWriter::GetCollectiveIO());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetWriteModeToCollective(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteModeToCollective");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWriteModeToCollective();
      }
    else
      {
      op->vtkAbstractParticleWriter::SetWriteModeToCollective();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetWriteModeToIndependent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteModeToIndependent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWriteModeToIndependent();
      }
    else
      {
      op->vtkAbstractParticleWriter::SetWriteModeToIndependent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_CloseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->CloseFile();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractParticleWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractParticleWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractParticleWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractParticleWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractParticleWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeStep", PyvtkAbstractParticleWriter_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nSet/get the TimeStep that is being written\n"},
  {(char*)"GetTimeStep", PyvtkAbstractParticleWriter_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nSet/get the TimeStep that is being written\n"},
  {(char*)"SetTimeValue", PyvtkAbstractParticleWriter_SetTimeValue, METH_VARARGS,
   (char*)"V.SetTimeValue(float)\nC++: void SetTimeValue(double a)\n\nBefore writing the current data out, set the TimeValue (optional)\nThe TimeValue is a float/double value that corresonds to the real\ntime of the data, it may not be regular, whereas the TimeSteps\nare simple increments.\n"},
  {(char*)"GetTimeValue", PyvtkAbstractParticleWriter_GetTimeValue, METH_VARARGS,
   (char*)"V.GetTimeValue() -> float\nC++: double GetTimeValue()\n\nBefore writing the current data out, set the TimeValue (optional)\nThe TimeValue is a float/double value that corresonds to the real\ntime of the data, it may not be regular, whereas the TimeSteps\nare simple increments.\n"},
  {(char*)"SetFileName", PyvtkAbstractParticleWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/get the FileName that is being written to\n"},
  {(char*)"GetFileName", PyvtkAbstractParticleWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/get the FileName that is being written to\n"},
  {(char*)"SetCollectiveIO", PyvtkAbstractParticleWriter_SetCollectiveIO, METH_VARARGS,
   (char*)"V.SetCollectiveIO(int)\nC++: void SetCollectiveIO(int a)\n\nWhen running in parallel, this writer may be capable of\nCollective IO operations (HDF5). By default, this is off.\n"},
  {(char*)"GetCollectiveIO", PyvtkAbstractParticleWriter_GetCollectiveIO, METH_VARARGS,
   (char*)"V.GetCollectiveIO() -> int\nC++: int GetCollectiveIO()\n\nWhen running in parallel, this writer may be capable of\nCollective IO operations (HDF5). By default, this is off.\n"},
  {(char*)"SetWriteModeToCollective", PyvtkAbstractParticleWriter_SetWriteModeToCollective, METH_VARARGS,
   (char*)"V.SetWriteModeToCollective()\nC++: void SetWriteModeToCollective()\n\nWhen running in parallel, this writer may be capable of\nCollective IO operations (HDF5). By default, this is off.\n"},
  {(char*)"SetWriteModeToIndependent", PyvtkAbstractParticleWriter_SetWriteModeToIndependent, METH_VARARGS,
   (char*)"V.SetWriteModeToIndependent()\nC++: void SetWriteModeToIndependent()\n\nWhen running in parallel, this writer may be capable of\nCollective IO operations (HDF5). By default, this is off.\n"},
  {(char*)"CloseFile", PyvtkAbstractParticleWriter_CloseFile, METH_VARARGS,
   (char*)"V.CloseFile()\nC++: virtual void CloseFile()\n\nClose the file after a write. This is optional but may protect\nagainst data loss in between steps\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractParticleWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractParticleWriter_Methods,
    "vtkAbstractParticleWriter", modulename,
    NULL, NULL,
    PyvtkAbstractParticleWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkAbstractParticleWriter_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractParticleWriter - abstract class to write particle data to\nfile\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkAbstractParticleWriter is an abstract class which is used by\nvtkTemporalStreamTracer to write particles out during simulations.\nThis class is abstract and provides a TimeStep and FileName.\nSubclasses of this should provide the necessary IO.\n\nCaveats:\n\nSee vtkWriter\n\nSee Also:\n\nvtkTemporalStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractParticleWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractParticleWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractParticleWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

