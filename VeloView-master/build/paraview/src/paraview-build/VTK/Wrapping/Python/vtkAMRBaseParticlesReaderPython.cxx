// python wrapper for vtkAMRBaseParticlesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRBaseParticlesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRBaseParticlesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRBaseParticlesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRBaseParticlesReader_Doc();


static PyObject *
PyvtkAMRBaseParticlesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRBaseParticlesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRBaseParticlesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRBaseParticlesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRBaseParticlesReader::NewInstance());

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
PyvtkAMRBaseParticlesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRBaseParticlesReader *tempr = vtkAMRBaseParticlesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkAMRBaseParticlesReader::GetFrequency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrequency(temp0);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetFrequency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRBaseParticlesReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFilterLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilterLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilterLocation(temp0);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetFilterLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFilterLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilterLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFilterLocation() :
      op->vtkAMRBaseParticlesReader::GetFilterLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_FilterLocationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilterLocationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilterLocationOn();
      }
    else
      {
      op->vtkAMRBaseParticlesReader::FilterLocationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_FilterLocationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilterLocationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilterLocationOff();
      }
    else
      {
      op->vtkAMRBaseParticlesReader::FilterLocationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetParticleDataArraySelection() :
      op->vtkAMRBaseParticlesReader::GetParticleDataArraySelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetNumberOfParticleArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParticleArrays() :
      op->vtkAMRBaseParticlesReader::GetNumberOfParticleArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetParticleArrayName(temp0) :
      op->vtkAMRBaseParticlesReader::GetParticleArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetParticleArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParticleArrayStatus(temp0) :
      op->vtkAMRBaseParticlesReader::GetParticleArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetParticleArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParticleArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetParticleArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

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
      op->vtkAMRBaseParticlesReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAMRBaseParticlesReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetMinLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMinLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetMinLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_SetMaxLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMaxLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRBaseParticlesReader::SetMaxLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseParticlesReader_GetTotalNumberOfParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseParticlesReader *op = static_cast<vtkAMRBaseParticlesReader *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetTotalNumberOfParticles();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRBaseParticlesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRBaseParticlesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRBaseParticlesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRBaseParticlesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRBaseParticlesReader\nC++: vtkAMRBaseParticlesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRBaseParticlesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRBaseParticlesReader\nC++: vtkAMRBaseParticlesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFrequency", PyvtkAMRBaseParticlesReader_GetFrequency, METH_VARARGS,
   (char*)"V.GetFrequency() -> int\nC++: int GetFrequency()\n\nSet & Get the frequency.\n"},
  {(char*)"SetFrequency", PyvtkAMRBaseParticlesReader_SetFrequency, METH_VARARGS,
   (char*)"V.SetFrequency(int)\nC++: void SetFrequency(int a)\n\nSet & Get the frequency.\n"},
  {(char*)"GetController", PyvtkAMRBaseParticlesReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet & Get the multi-process controller.\n"},
  {(char*)"SetController", PyvtkAMRBaseParticlesReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet & Get the multi-process controller.\n"},
  {(char*)"SetFilterLocation", PyvtkAMRBaseParticlesReader_SetFilterLocation, METH_VARARGS,
   (char*)"V.SetFilterLocation(int)\nC++: void SetFilterLocation(int a)\n\nSet & Get for filter location and boolean macro\n"},
  {(char*)"GetFilterLocation", PyvtkAMRBaseParticlesReader_GetFilterLocation, METH_VARARGS,
   (char*)"V.GetFilterLocation() -> int\nC++: int GetFilterLocation()\n\nSet & Get for filter location and boolean macro\n"},
  {(char*)"FilterLocationOn", PyvtkAMRBaseParticlesReader_FilterLocationOn, METH_VARARGS,
   (char*)"V.FilterLocationOn()\nC++: void FilterLocationOn()\n\nSet & Get for filter location and boolean macro\n"},
  {(char*)"FilterLocationOff", PyvtkAMRBaseParticlesReader_FilterLocationOff, METH_VARARGS,
   (char*)"V.FilterLocationOff()\nC++: void FilterLocationOff()\n\nSet & Get for filter location and boolean macro\n"},
  {(char*)"GetParticleDataArraySelection", PyvtkAMRBaseParticlesReader_GetParticleDataArraySelection, METH_VARARGS,
   (char*)"V.GetParticleDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetParticleDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetNumberOfParticleArrays", PyvtkAMRBaseParticlesReader_GetNumberOfParticleArrays, METH_VARARGS,
   (char*)"V.GetNumberOfParticleArrays() -> int\nC++: int GetNumberOfParticleArrays()\n\nGet the number of particles arrays available in the input.\n"},
  {(char*)"GetParticleArrayName", PyvtkAMRBaseParticlesReader_GetParticleArrayName, METH_VARARGS,
   (char*)"V.GetParticleArrayName(int) -> string\nC++: const char *GetParticleArrayName(int index)\n\nGet the particle array name of the array associated with the\ngiven index.\n"},
  {(char*)"GetParticleArrayStatus", PyvtkAMRBaseParticlesReader_GetParticleArrayStatus, METH_VARARGS,
   (char*)"V.GetParticleArrayStatus(string) -> int\nC++: int GetParticleArrayStatus(const char *name)\n\nGet/Set whether the particle array status.\n"},
  {(char*)"SetParticleArrayStatus", PyvtkAMRBaseParticlesReader_SetParticleArrayStatus, METH_VARARGS,
   (char*)"V.SetParticleArrayStatus(string, int)\nC++: void SetParticleArrayStatus(const char *name, int status)\n\nGet/Set whether the particle array status.\n"},
  {(char*)"SetFileName", PyvtkAMRBaseParticlesReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *fileName)\n\n"},
  {(char*)"GetFileName", PyvtkAMRBaseParticlesReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetMinLocation", PyvtkAMRBaseParticlesReader_SetMinLocation, METH_VARARGS,
   (char*)"V.SetMinLocation(float, float, float)\nC++: void SetMinLocation(const double minx, const double miny,\n    const double minz)\n\nSets the min location\n"},
  {(char*)"SetMaxLocation", PyvtkAMRBaseParticlesReader_SetMaxLocation, METH_VARARGS,
   (char*)"V.SetMaxLocation(float, float, float)\nC++: void SetMaxLocation(const double maxx, const double maxy,\n    const double maxz)\n\nSets the max location\n"},
  {(char*)"GetTotalNumberOfParticles", PyvtkAMRBaseParticlesReader_GetTotalNumberOfParticles, METH_VARARGS,
   (char*)"V.GetTotalNumberOfParticles() -> int\nC++: virtual int GetTotalNumberOfParticles()\n\nReturns the total number of particles\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAMRBaseParticlesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAMRBaseParticlesReader_Methods,
    "vtkAMRBaseParticlesReader", modulename,
    NULL, NULL,
    PyvtkAMRBaseParticlesReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRBaseParticlesReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMRBaseParticlesReader.h -- Base class for all AMR particle readers\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "An abstract base class that implements all the common functionality\nfor\n all particle readers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRBaseParticlesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRBaseParticlesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRBaseParticlesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

